// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanningAgent.h"
#include "EnemyAgent1.h"
#include "ISTransferTestCharacter.h"
#include "Containers/Array.h"
#include "Engine.h"

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
	m_jumpCount = 0;
	m_shootCount = 0;
	m_maxShoot = 10;
	m_maxJump = 10;

	// Enemy creation variables
	m_maxEnemies = 10;
	m_currEnemies = 0;
	m_enemyHealth = 100;
	m_enemyAggression = 0;
	m_enemySpeed = 500;

	// Timer
	m_resetTimer = TIMER;
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

void APlanningAgent::CalcWalkFrustration()
{
}

void APlanningAgent::CalcTurnFrustration()
{
}

void APlanningAgent::SpawnEnemy()
{
	UWorld* const world = GetWorld();

	if (world != NULL)
	{
		FRotator rotation;
		FVector location;
		FActorSpawnParameters spawnParams;

		FVector spawnDirection;

		APlayerController* player = world->GetFirstPlayerController();

		for (int32 i = 0; i < m_spawnPoints.Num(); i++)
		{

		}
	}
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_resetTimer -= DeltaTime;

	if (m_resetTimer <= 0)
	{
		m_resetTimer = TIMER;

		m_shootCount = 0;
		m_jumpCount = 0;
	}

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, FString::Printf(TEXT("Jump Count: %d"), m_jumpCount));
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
}

void APlanningAgent::MoveRight(float value)
{
}

