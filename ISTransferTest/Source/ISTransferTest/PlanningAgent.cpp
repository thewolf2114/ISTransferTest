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
	m_turnFrustration = 0;
	m_lookUpFrustration = 0;
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
	m_maxTurn = 10;
	m_maxLookUp = 10;
	m_isFlanking = false;

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

	// Weights
	m_jumpWeight = 0.16;
	m_shootWeight = 0.16;
	m_moveBackWeight = 0.16;
	m_zigZagWeight = 0.16;
	m_turnWeight = 0.16;
	m_lookUpWeight = 0.20;

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
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Prev Frustration Level: %f"), m_prevFrustration));

	CalcShootFrustration();
	CalcJumpFrustration();
	CalcMoveBackFrustration();
	CalcZigZagFrustration();
	CalcTurnFrustration();
	CalcLookUpFrustration();

	m_currFrustration = (m_shootFrustration * m_shootWeight) + (m_jumpFrustration * m_jumpWeight) + 
		(m_moveBackFrustration * m_moveBackWeight) + (m_zigZagFrustration * m_zigZagWeight) + 
		(m_turnFrustration * m_turnWeight) + (m_lookUpFrustration * m_lookUpWeight);
	m_currFrustration *= m_currFrustration;

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Curr Frustration Level: %f"), m_currFrustration));
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

void APlanningAgent::CalcTurnFrustration()
{
	if (m_turnCount > m_maxTurn)
	{
		m_maxTurn = m_turnCount;
	}

	m_turnFrustration = (float)m_turnCount / m_maxTurn;
}

void APlanningAgent::CalcLookUpFrustration()
{
	if (m_lookUpCount > m_maxLookUp)
	{
		m_maxLookUp = m_lookUpCount;
	}

	m_lookUpFrustration = (float)m_lookUpCount / m_maxLookUp;
}

void APlanningAgent::ZeroCounts()
{
	m_shootCount = 0;
	m_jumpCount = 0;
	m_moveBackCount = 0;
	m_zigZagCount = 0;
	m_turnCount = 0;
	m_lookUpCount = 0;
	m_isFlanking = false;
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

		if (m_isFlanking)
		{
			TArray<ASpawnPoint*> flankingPoints = GetFlankingPoints();

			int32 rand = FMath::RandRange(0, flankingPoints.Num() - 1);
			ASpawnPoint* randPoint = flankingPoints[rand];

			rotation = randPoint->GetActorRotation();
			location = randPoint->GetActorLocation();
			spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AEnemyAgent1* enemy = World->SpawnActor<AEnemyAgent1>(m_enemyClass, location, rotation, spawnParams);
			enemy->SetVariables(m_enemyHealth, m_enemySpeed, m_enemyAggression);

			m_currEnemies++;
		}
		else
		{
			TArray<ASpawnPoint*> forwardPoints = GetForwardPoints();

			int32 rand = FMath::RandRange(0, forwardPoints.Num() - 1);
			ASpawnPoint* randPoint = forwardPoints[rand];

			rotation = randPoint->GetActorRotation();
			location = randPoint->GetActorLocation();
			spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AEnemyAgent1* enemy = World->SpawnActor<AEnemyAgent1>(m_enemyClass, location, rotation, spawnParams);
			enemy->SetVariables(m_enemyHealth, m_enemySpeed, m_enemyAggression);

			m_currEnemies++;
		}
	}
}

void APlanningAgent::IncreaseMaxEnemy()
{
	m_maxEnemies++;
}

void APlanningAgent::IncreaseEnemyHealth()
{
	m_enemyHealth += 50;
}

void APlanningAgent::IncreaseEnemyAggression()
{
	m_enemyAggression = 1;
}

void APlanningAgent::IncreaseEnemySpeed()
{
	m_enemySpeed += 50;
}

void APlanningAgent::ChangePlayerOverheat()
{
	
}

void APlanningAgent::FlankingEnemies()
{
	m_isFlanking = true;
}

void APlanningAgent::Normalize()
{
	m_frustCoolDown = true;
	m_maxEnemies = DEFAULT_MAX_ENEMY;
	m_enemyHealth = DEFAULT_ENEMY_HEALTH;
	m_enemyAggression = DEFAULT_ENEMY_AGGRESSION;
	m_enemySpeed = DEFAULT_ENEMY_SPEED;

	m_currFrustration = 0;
	m_prevFrustration = 0;
}

TArray<ASpawnPoint*> APlanningAgent::GetFlankingPoints()
{
	float dotProduct;
	FVector direction;
	TArray<ASpawnPoint*> spawnPoints;
	AISTransferTestCharacter* player = Cast<AISTransferTestCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	if (player != nullptr)
	{
		for (auto& point : m_spawnPoints)
		{
			direction = point->GetActorLocation() - player->GetActorLocation();
			dotProduct = FVector::DotProduct(direction, player->GetActorForwardVector());

			if (dotProduct < 0)
			{
				spawnPoints.Add(point);
			}
		}
	}

	return spawnPoints;
}

TArray<ASpawnPoint*> APlanningAgent::GetForwardPoints()
{
	float dotProduct;
	FVector direction;
	TArray<ASpawnPoint*> spawnPoints;
	AISTransferTestCharacter* player = Cast<AISTransferTestCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	if (player != nullptr)
	{
		for (auto& point : m_spawnPoints)
		{
			direction = point->GetActorLocation() - player->GetActorLocation();
			dotProduct = FVector::DotProduct(direction, player->GetActorForwardVector());

			if (dotProduct > 0)
			{
				spawnPoints.Add(point);
			}
		}
	}

	return spawnPoints;
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

		if (m_resetTimer <= 0)
		{
			m_resetTimer = RESET_TIMER;

			CalcFrustration();

			ZeroCounts();

			if (m_currFrustration < 0.3)
			{
				m_maxEnemies++;
			}
			else
			{
				Normalize();
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
				ZeroCounts();

				m_coolDownTimer = COOL_DOWN_TIMER;
				m_frustCoolDown = false;
			}
		}
	}
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
	if (value != 0 && m_prevTurnValue == 0)
	{
		m_prevTurnValue = value;
	}

	if (value != 0 && FMath::Sign<float>(m_prevTurnValue) == -FMath::Sign<float>(value))
	{
		m_turnCount++;

		m_prevTurnValue = value;
	}
}

void APlanningAgent::LookUp(float value)
{
	if (value != 0 && m_prevLookUpValue == 0)
	{
		m_prevLookUpValue = value;
	}

	if (value != 0 && FMath::Sign<float>(m_prevLookUpValue) == -FMath::Sign<float>(value))
	{
		m_lookUpCount++;

		m_prevLookUpValue = value;
	}
}

// Decreases the current amount of enemies in the level.
void APlanningAgent::EnemyDied()
{
	m_currEnemies--;
}