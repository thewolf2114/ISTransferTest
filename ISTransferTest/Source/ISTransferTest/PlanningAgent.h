// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpawnPoint.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanningAgent.generated.h"

UCLASS()
class ISTRANSFERTEST_API APlanningAgent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanningAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Constants
	const float JUMP_WEIGHT = 0;
	const float SHOOT_WEIGHT = 0;
	const float MOVE_WEIGHT = 0;
	const float TURN_WEIGHT = 0;
	const int TIMER = 5;

	// Timer
	float m_resetTimer;

	// Frustration variables
	float m_currFrustration;
	float m_prevFrustration;
	float m_shootFrustration;
	float m_jumpFrustration;
	int m_jumpCount;
	int m_shootCount;
	int m_maxShoot;
	int m_maxJump;

	// Enemy creation variables
	int m_maxEnemies;
	int m_currEnemies;
	float m_enemyHealth;
	float m_enemyAggression;
	float m_enemySpeed;

	UPROPERTY(EditAnywhere, Category = "Spawn Enemy")
	TSubclassOf<class AEnemyAgent1> m_enemyClass;
	TArray<ASpawnPoint*> m_spawnPoints;

	// Calculates the players frustration level
	void CalcFrustration();

	// Calculate frustration variables
	void CalcShootFrustration();
	void CalcJumpFrustration();
	void CalcWalkFrustration();
	void CalcTurnFrustration();

	// Spawn the enemy
	void SpawnEnemy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DetectShot();
	void DetectJump();
	void MoveForward(float value);
	void MoveRight(float value);
};
