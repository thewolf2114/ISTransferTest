// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanningAgent.h"
#include "EnemyAgent1.h"
#include "SpawnPoint.h"
#include "Containers/Array.h"

// Sets default values
APlanningAgent::APlanningAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Frustration variables
	m_frustration = 0;
	m_jumpCount = 0;
	m_shootCount = 0;

	// Enemy creation variables
	m_maxEnemies = 10;
	m_currEnemies = 0;
	m_enemyHealth = 100;
	m_enemyAggression = 0;
	m_enemySpeed = 500;

	// initialize spawn points array
	m_spawnPoints = new TArray<ASpawnPoint>();
}

APlanningAgent::~APlanningAgent()
{
	if (m_spawnPoints->Num() > 0)
	{
		m_spawnPoints->Empty();
	}
	delete m_spawnPoints;
	m_spawnPoints = nullptr;
}

// Called when the game starts or when spawned
void APlanningAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlanningAgent::CalcFrustration()
{
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

