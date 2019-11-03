// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef ISTRANSFERTEST_EnemyAgent1_generated_h
#error "EnemyAgent1.generated.h already included, missing '#pragma once' in EnemyAgent1.h"
#endif
#define ISTRANSFERTEST_EnemyAgent1_generated_h

#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackingPlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackingPlayer(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackingPlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackingPlayer(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAgent1(); \
	friend struct Z_Construct_UClass_AEnemyAgent1_Statics; \
public: \
	DECLARE_CLASS(AEnemyAgent1, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAgent1)


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAgent1(); \
	friend struct Z_Construct_UClass_AEnemyAgent1_Statics; \
public: \
	DECLARE_CLASS(AEnemyAgent1, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAgent1)


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAgent1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAgent1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAgent1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAgent1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAgent1(AEnemyAgent1&&); \
	NO_API AEnemyAgent1(const AEnemyAgent1&); \
public:


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAgent1(AEnemyAgent1&&); \
	NO_API AEnemyAgent1(const AEnemyAgent1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAgent1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAgent1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAgent1)


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_isAttacking() { return STRUCT_OFFSET(AEnemyAgent1, m_isAttacking); } \
	FORCEINLINE static uint32 __PPO__m_playerReached() { return STRUCT_OFFSET(AEnemyAgent1, m_playerReached); } \
	FORCEINLINE static uint32 __PPO__m_damage() { return STRUCT_OFFSET(AEnemyAgent1, m_damage); }


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_9_PROLOG
#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_RPC_WRAPPERS \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_INCLASS \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_INCLASS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_EnemyAgent1_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISTRANSFERTEST_API UClass* StaticClass<class AEnemyAgent1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ISTransferTest_Source_ISTransferTest_EnemyAgent1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
