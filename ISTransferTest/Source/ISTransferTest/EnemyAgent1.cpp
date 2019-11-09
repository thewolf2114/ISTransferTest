// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAgent1.h"
#include "ISTransferTestCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"

// Sets default values
AEnemyAgent1::AEnemyAgent1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_characterMovement = GetCharacterMovement();
	m_collider = GetCapsuleComponent();

	OnActorHit.AddDynamic(this, &AEnemyAgent1::OnAttackingPlayer);

	m_health = 100;
	m_speed = 500;
	m_aggression = 0;
	m_isAttacking = false;
	m_playerReached = false;

	m_damage = 1;
}

// Called when the game starts or when spawned
void AEnemyAgent1::BeginPlay()
{
	Super::BeginPlay();
	
	// imidiately update the walking speed to the member speed variable
	m_characterMovement->MaxWalkSpeed = m_speed;
}

bool AEnemyAgent1::IsAttacking()
{
	return m_isAttacking;
}

void AEnemyAgent1::OnAttackStateEnter()
{
	// Initialize attacking annimation
}

void AEnemyAgent1::OnAttackStateUpdate()
{
	if (m_aggression < 0.5f)
	{
		// attack passively
		bool anotherAttacker = false;

		// iterates over all the Enemy Agent 1's in the map to see if they are attacking right now
		for (TActorIterator<AEnemyAgent1> ActorITR(GetWorld()); ActorITR; ++ActorITR)
		{
			AEnemyAgent1* otherEnemy = *ActorITR;
			if (otherEnemy == this)
			{
				continue;
			}

			if (otherEnemy->IsAttacking())
			{
				anotherAttacker = true;
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, "Enemy Attacking");
			}
		}

		if (!anotherAttacker)
		{
			m_isAttacking = true;
		}
	}
	else
	{
		// attack aggressively
		m_isAttacking = true;
	}
}

void AEnemyAgent1::OnAttackStateExit()
{
	// Reset annimation
}

void AEnemyAgent1::SetSpeed(float speed)
{
	m_speed = speed;

	m_characterMovement->MaxWalkSpeed = m_speed;
}

void AEnemyAgent1::SetHealth(float health)
{
	m_health = health;
}

void AEnemyAgent1::SetAggression(float aggression)
{
	m_aggression = aggression;
}

void AEnemyAgent1::OnAttackingPlayer(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	if (AISTransferTestCharacter* player = Cast<AISTransferTestCharacter>(OtherActor))
	{
		if (m_isAttacking)
		{
			player->TakeDamage(m_damage);
		}
	}
}

// Called every frame
void AEnemyAgent1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_playerReached)
	{
		OnAttackStateUpdate();
	}
}

// Called to bind functionality to input
void AEnemyAgent1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyAgent1::TakeDamage(float damage)
{
	m_health -= damage;

	if (m_health <= 0)
	{

		Destroy();
	}
}