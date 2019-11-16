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

	const float MOVE_TIMER = 0.5;
	const int RESET_TIMER = 5;
	const int SPAWN_TIMER = 2;
	const int COOL_DOWN_TIMER = 10;
	const int DEFAULT_MAX_ENEMY = 10;
	const int DEFAULT_ENEMY_HEALTH = 100;
	const int DEFAULT_ENEMY_AGGRESSION = 0;
	const int DEFAULT_ENEMY_SPEED = 500;

	// Timer
	float m_resetTimer;
	float m_moveBackTimer;
	float m_spawnTimer;
	float m_coolDownTimer;

	// Frustration variables
	float m_currFrustration;
	float m_prevFrustration;
	float m_shootFrustration;
	float m_jumpFrustration;
	float m_moveBackFrustration;
	float m_zigZagFrustration;
	int m_jumpCount;
	int m_shootCount;
	int m_moveBackCount;
	int m_zigZagCount;
	int m_prevZigZagValue;
	int m_turnCount;
	int m_prevTurnValue;
	int m_lookUpCount;
	int m_prevLookUpValue;
	int m_maxShoot;
	int m_maxJump;
	int m_maxMoveBack;
	int m_maxZigZag;

	// Enemy creation variables
	int m_maxEnemies;
	int m_currEnemies;
	float m_enemyHealth;
	float m_enemyAggression;
	float m_enemySpeed;

	// Winding down frustration
	bool m_frustCoolDown;

	// Weights
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_jumpWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_shootWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_moveBackWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_zigZagWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_turnWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weights")
	float m_lookUpWeight;

	UPROPERTY(EditAnywhere, Category = "Spawn Enemy")
	TSubclassOf<class AEnemyAgent1> m_enemyClass;
	TArray<ASpawnPoint*> m_spawnPoints;

	// Calculates the players frustration level
	void CalcFrustration();

	// Calculate frustration variables
	void CalcShootFrustration();
	void CalcJumpFrustration();
	void CalcMoveBackFrustration();
	void CalcZigZagFrustration();

	// Spawn the enemy
	void SpawnEnemy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DetectShot();
	void DetectJump();
	void MoveForward(float value);
	void MoveRight(float value);
	void Turn(float value);
	void LookUp(float value);

	void EnemyDied();
};
