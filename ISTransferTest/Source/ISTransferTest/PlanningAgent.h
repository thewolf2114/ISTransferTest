// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

	// Frustration variables
	float m_frustration;
	int m_jumpCount;
	int m_shootCount;

	// Enemy creation variables
	int m_maxEnemies;
	int m_currEnemies;
	float m_enemyHealth;
	float m_enemyAggression;
	float m_enemySpeed;

	// Calculates the players frustration level
	void CalcFrustration();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DetectShot();
	void DetectJump();
	void MoveForward(float value);
	void MoveRight(float value);
};
