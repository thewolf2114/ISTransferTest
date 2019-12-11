// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpawnPoint.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanningAgent.generated.h"

#define MAX_STRATEGY 6

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

	void InitStrategies();

	// Constants
	const float MOVE_TIMER = 0.5;
	const int RESET_TIMER = 5;
	const int SPAWN_TIMER = 2;
	const int COOL_DOWN_TIMER = 10;
	const int DEFAULT_MAX_ENEMY = 10;
	const int DEFAULT_ENEMY_HEALTH = 100;
	const int DEFAULT_ENEMY_AGGRESSION = 0;
	const int DEFAULT_ENEMY_SPEED = 250;
	const int DEFAULT_PLAYER_HEAT = 100;
	const int INCREASE_ENEMY_HEALTH = 20;
	const int INCREASE_ENEMY_SPEED = 50;

	// Timer
	float m_resetTimer;
	float m_moveBackTimer;
	float m_spawnTimer;
	float m_coolDownTimer;

	// Frustration variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Frustration")
	float m_currFrustration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Frustration")
	float m_prevFrustration;
	float m_shootFrustration;
	float m_jumpFrustration;
	float m_moveBackFrustration;
	float m_zigZagFrustration;
	float m_turnFrustration;
	float m_lookUpFrustration;
	int m_jumpCount;
	int m_shootCount;
	int m_moveBackCount;
	int m_zigZagCount;
	int m_prevZigZagValue;
	int m_turnCount;
	float m_prevTurnValue;
	int m_lookUpCount;
	float m_prevLookUpValue;
	int m_maxShoot;
	int m_maxJump;
	int m_maxMoveBack;
	int m_maxZigZag;
	int m_maxTurn;
	int m_maxLookUp;
	bool m_isFlanking;

	// Enemy creation variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	int m_maxEnemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	int m_currEnemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	float m_enemyHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	float m_enemyAggression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
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

	// The Function Pointer Variable type
	typedef void (APlanningAgent::* FunctionPtrType)(void);

	// Variables for function pointers
	FunctionPtrType m_strategies[MAX_STRATEGY];
	int m_strategyIndex;
	int m_enemiesIncreasedBy;
	int m_enemyHealthIncreasedBy;
	int m_enemySpeedIncreasedBy;
	bool m_changedOverheat;

	// Calculates the players frustration level
	void CalcFrustration();

	// Calculate frustration variables
	void CalcShootFrustration();
	void CalcJumpFrustration();
	void CalcMoveBackFrustration();
	void CalcZigZagFrustration();
	void CalcTurnFrustration();
	void CalcLookUpFrustration();
	void ZeroCounts();

	// Spawn the enemy
	void SpawnEnemy();

	// Frustration strategies
	void IncreaseMaxEnemy();
	void IncreaseEnemyHealth();
	void IncreaseEnemyAggression();
	void IncreaseEnemySpeed();
	void ChangePlayerOverheat();
	void FlankingEnemies();
	void Default();
	bool NeedNewStrategy();
	void AdjustWeights();

	// Helper functions
	TArray<ASpawnPoint*> GetFlankingPoints();
	TArray<ASpawnPoint*> GetForwardPoints();

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
