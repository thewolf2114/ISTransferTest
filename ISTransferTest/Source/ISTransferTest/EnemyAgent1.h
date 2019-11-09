// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAgent1.generated.h"

UCLASS()
class ISTRANSFERTEST_API AEnemyAgent1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyAgent1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool IsAttacking();

	virtual void OnAttackStateEnter();
	virtual void OnAttackStateUpdate();
	virtual void OnAttackStateExit();

	//virtual void OnDeadStateEnter();
	//virtual void OnDeadStateUpdate();
	//virtual void OnDeadStateExit();

	//virtual void ChangeState();

	virtual void SetSpeed(float speed);
	virtual void SetHealth(float health);
	virtual void SetAggression(float aggression);

	UFUNCTION()
	void OnAttackingPlayer(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit);

	float m_health;
	float m_speed;
	float m_aggression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacking")
	bool m_isAttacking;

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = "Pathfinding")
	bool m_playerReached;

	UPROPERTY(EditAnywhere, Category = "Damage")
	float m_damage;

	UCharacterMovementComponent* m_characterMovement;
	UCapsuleComponent* m_collider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void TakeDamage(float damage);
};
