// Fill out your copyright notice in the Description page of Project Settings.

#include "PlanningAgent.h"
#include "EnemyAgent1.h"
#include "ISTransferTestCharacter.h"
#include "Containers/Array.h"
#include "Engine.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values
APlanningAgent::APlanningAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Frustration variables
	m_currFrustration = 0;
	m_prevFrustration = 0;
	m_shootFrustration = 0;
	m_jumpFrustration = 0;
	m_moveBackFrustration = 0;
	m_zigZagFrustration = 0;
	m_jumpCount = 0;
	m_shootCount = 0;
	m_moveBackCount = 0;
	m_zigZagCount = 0;
	m_turnCount = 0;
	m_prevTurnValue = 0;
	m_lookUpCount = 0;
	m_prevLookUpValue = 0;
	m_maxShoot = 10;
	m_maxJump = 10;
	m_maxMoveBack = 10;
	m_maxZigZag = 10;

	// Enemy creation variables
	m_maxEnemies = DEFAULT_MAX_ENEMY;
	m_currEnemies = 0;
	m_enemyHealth = DEFAULT_ENEMY_HEALTH;
	m_enemyAggression = DEFAULT_ENEMY_AGGRESSION;
	m_enemySpeed = DEFAULT_ENEMY_SPEED;

	// Timer
	m_resetTimer = RESET_TIMER;
	m_moveBackTimer = MOVE_TIMER;
	m_spawnTimer = SPAWN_TIMER;
	m_coolDownTimer = COOL_DOWN_TIMER;

	// Winding Down Frustration
	m_frustCoolDown = false;
}

// Called when the game starts or when spawned
void APlanningAgent::BeginPlay()
{
	Super::BeginPlay();
	
	for (TActorIterator<ASpawnPoint> ActorITR(GetWorld()); ActorITR; ++ActorITR)
	{
		ASpawnPoint* spawnPoint = *ActorITR;
		m_spawnPoints.Add(spawnPoint);
	}
}

// Calculates the total frustration of the player
void APlanningAgent::CalcFrustration()
{
	m_prevFrustration = m_currFrustration;
	//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Prev Frustration Level: %f"), m_prevFrustration));

	CalcShootFrustration();
	CalcJumpFrustration();
	CalcMoveBackFrustration();
	CalcZigZagFrustration();

	m_currFrustration = (m_shootFrustration * SHOOT_WEIGHT) + (m_jumpFrustration * JUMP_WEIGHT) + (m_moveBackFrustration * MOVE_BACK_WEIGHT) + (m_zigZagFrustration * ZIG_ZAG_WEIGHT);
	m_currFrustration *= m_currFrustration;

	//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Curr Frustration Level: %f"), m_currFrustration));
}

// Calculates the shooting portion of the frustration calculation
void APlanningAgent::CalcShootFrustration()
{
	if (m_shootCount > m_maxShoot)
	{
		m_maxShoot = m_shootCount;
	}

	m_shootFrustration = (float)m_shootCount / m_maxShoot;
}

// Calculates the jumping portion of the frustration calculation
void APlanningAgent::CalcJumpFrustration()
{
	if (m_jumpCount > m_maxJump)
	{
		m_maxJump = m_jumpCount;
	}

	m_jumpFrustration = (float)m_jumpCount / m_maxJump;
}

// Calculates the moving backward portion of the frustration calculation
void APlanningAgent::CalcMoveBackFrustration()
{
	m_moveBackFrustration = (float)m_moveBackCount / m_maxMoveBack;
}

// Calculates the zig zag movment portion of the frustration calculation
void APlanningAgent::CalcZigZagFrustration()
{
	if (m_zigZagCount > m_maxZigZag)
	{
		m_maxZigZag = m_zigZagCount;
	}

	m_zigZagFrustration = (float)m_zigZagCount / m_maxZigZag;
}

// Spawns an enemy into the world.
// Current finding a random spawn point for the spawning,
// move development needed.
void APlanningAgent::SpawnEnemy()
{
	UWorld* const World = GetWorld();

	if (World != NULL)
	{
		FRotator rotation;
		FVector location;
		FActorSpawnParameters spawnParams;

		int32 rand = FMath::RandRange(0, m_spawnPoints.Num() - 1);

		rotation = m_spawnPoints[rand]->GetActorRotation();
		location = m_spawnPoints[rand]->GetActorLocation();
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AEnemyAgent1* enemy = World->SpawnActor<AEnemyAgent1>(m_enemyClass, location, rotation, spawnParams);
		enemy->SetVariables(m_enemyHealth, m_enemySpeed, m_enemyAggression);

		m_currEnemies++;
	}
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_spawnTimer -= DeltaTime;

	if (m_spawnTimer <= 0 && m_currEnemies < m_maxEnemies)
	{
		m_spawnTimer = SPAWN_TIMER;

		SpawnEnemy();
	}

	if (!m_frustCoolDown)
	{
		m_resetTimer -= DeltaTime;
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, FString::Printf(TEXT("Reset Timer: %f"), m_resetTimer));

		if (m_resetTimer <= 0)
		{
			m_resetTimer = RESET_TIMER;

			CalcFrustration();

			m_shootCount = 0;
			m_jumpCount = 0;
			m_moveBackCount = 0;
			m_zigZagCount = 0;

			if (m_currFrustration < 0.3)
			{
				m_maxEnemies++;
			}
			else
			{
				m_frustCoolDown = true;
				m_maxEnemies = DEFAULT_MAX_ENEMY;
				m_enemyHealth = DEFAULT_ENEMY_HEALTH;
				m_enemyAggression = DEFAULT_ENEMY_AGGRESSION;
				m_enemySpeed = DEFAULT_ENEMY_SPEED;

				m_currFrustration = 0;
				m_prevFrustration = 0;
			}
		}
	}
	else
	{
		if (m_currEnemies <= m_maxEnemies)
		{
			m_coolDownTimer -= DeltaTime;

			if (m_coolDownTimer <= 0)
			{
				m_shootCount = 0;
				m_jumpCount = 0;
				m_moveBackCount = 0;
				m_zigZagCount = 0;

				m_coolDownTimer = COOL_DOWN_TIMER;
				m_frustCoolDown = false;
			}

			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, FString::Printf(TEXT("Cool Down Timer: %f"), m_coolDownTimer));
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, FString::Printf(TEXT("Max Enemies: %d"), m_maxEnemies));
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Curr Enemies: %d"), m_currEnemies));
}

// Increases the amount of times the player has shot their gun
void APlanningAgent::DetectShot()
{
	m_shootCount++;
}

// Increases the amount of times the player has jumped
void APlanningAgent::DetectJump()
{
	m_jumpCount++;
}

// Increases the amount of times the player moves backward,
// based on if they have been moving backward for a certain amount of time.
void APlanningAgent::MoveForward(float value)
{
	if (value < 0)
	{
		m_moveBackTimer -= GetWorld()->DeltaTimeSeconds;

		if (m_moveBackTimer <= 0)
		{
			m_moveBackTimer = MOVE_TIMER;
			m_moveBackCount++;
		}
	}
	else
	{
		m_moveBackTimer = MOVE_TIMER;
	}
}

// Increases the amount of times the player moves in a zig zag pattern
void APlanningAgent::MoveRight(float value)
{
	if (value != 0 && m_prevZigZagValue == 0 && floor(value) == value)
	{
		m_prevZigZagValue = value;
	}

	if (value != 0 && m_prevZigZagValue == -value)
	{
		m_zigZagCount++;

		m_prevZigZagValue = value;
	}
}

void APlanningAgent::Turn(float value)
{
}

void APlanningAgent::LookUp(float value)
{
}

// Decreases the current amount of enemies in the level.
void APlanningAgent::EnemyDied()
{
	m_currEnemies--;
}