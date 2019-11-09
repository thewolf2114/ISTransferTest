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
	m_maxShoot = 10;
	m_maxJump = 10;
	m_maxMoveBack = 10;
	m_maxZigZag = 10;

	// Enemy creation variables
	m_maxEnemies = 10;
	m_currEnemies = 0;
	m_enemyHealth = 100;
	m_enemyAggression = 0;
	m_enemySpeed = 500;

	// Timer
	m_resetTimer = RESET_TIMER;
	m_moveBackTimer = MOVE_BACK_TIMER;
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

void APlanningAgent::CalcFrustration()
{
	m_prevFrustration = m_currFrustration;

	CalcShootFrustration();
	CalcJumpFrustration();
	CalcMoveBackFrustration();
	CalcZigZagFrustration();

	m_currFrustration = (m_shootFrustration * SHOOT_WEIGHT) + (m_jumpFrustration * JUMP_WEIGHT) + (m_moveBackFrustration * MOVE_BACK_WEIGHT) + (m_zigZagFrustration * ZIG_ZAG_WEIGHT);
	m_currFrustration *= m_currFrustration;
}

void APlanningAgent::CalcShootFrustration()
{
	if (m_shootCount > m_maxShoot)
	{
		m_maxShoot = m_shootCount;
	}

	m_shootFrustration = m_shootCount / m_maxShoot;
}

void APlanningAgent::CalcJumpFrustration()
{
	if (m_jumpCount > m_maxJump)
	{
		m_maxJump = m_jumpCount;
	}

	m_jumpFrustration = m_jumpCount / m_maxJump;
}

void APlanningAgent::CalcMoveBackFrustration()
{
	m_moveBackFrustration = m_moveBackCount / m_maxMoveBack;
}

void APlanningAgent::CalcZigZagFrustration()
{
	if (m_zigZagCount > m_maxZigZag)
	{
		m_maxZigZag = m_zigZagCount;
	}

	m_zigZagFrustration = m_zigZagCount / m_maxZigZag;
}

void APlanningAgent::SpawnEnemy()
{
	UWorld* const World = GetWorld();

	if (World != NULL)
	{
		FRotator rotation;
		FVector location;
		FActorSpawnParameters spawnParams;

		APlayerController* player = World->GetFirstPlayerController();

		int32 rand = FMath::RandRange(0, m_spawnPoints.Num() - 1);

		rotation = m_spawnPoints[rand]->GetActorRotation();
		location = m_spawnPoints[rand]->GetActorLocation();
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AEnemyAgent1* enemy = World->SpawnActor<AEnemyAgent1>(m_enemyClass, location, rotation, spawnParams);
		enemy->SetVariables(m_enemyHealth, m_enemySpeed, m_enemyAggression);
	}
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_resetTimer -= DeltaTime;

	if (m_resetTimer <= 0)
	{
		m_resetTimer = RESET_TIMER;

		m_shootCount = 0;
		m_jumpCount = 0;
		m_moveBackCount = 0;
		m_zigZagCount = 0;

		CalcFrustration();
	}

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, FString::Printf(TEXT("Zig Zag Count: %d"), m_zigZagCount));
}

void APlanningAgent::DetectShot()
{
	m_shootCount++;
}

void APlanningAgent::DetectJump()
{
	m_jumpCount++;
}

void APlanningAgent::MoveForward(float value)
{
	if (value < 0)
	{
		m_moveBackTimer -= GetWorld()->DeltaTimeSeconds;

		if (m_moveBackTimer <= 0)
		{
			m_moveBackTimer = MOVE_BACK_TIMER;
			m_moveBackCount++;
		}
	}
	else
	{
		m_moveBackTimer = MOVE_BACK_TIMER;
	}
}

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

