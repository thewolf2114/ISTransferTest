// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ISTRANSFERTEST_ISTransferTestProjectile_generated_h
#error "ISTransferTestProjectile.generated.h already included, missing '#pragma once' in ISTransferTestProjectile.h"
#endif
#define ISTRANSFERTEST_ISTransferTestProjectile_generated_h

#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISTransferTestProjectile(); \
	friend struct Z_Construct_UClass_AISTransferTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AISTransferTestProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AISTransferTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAISTransferTestProjectile(); \
	friend struct Z_Construct_UClass_AISTransferTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AISTransferTestProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AISTransferTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AISTransferTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISTransferTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTransferTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTransferTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISTransferTestProjectile(AISTransferTestProjectile&&); \
	NO_API AISTransferTestProjectile(const AISTransferTestProjectile&); \
public:


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISTransferTestProjectile(AISTransferTestProjectile&&); \
	NO_API AISTransferTestProjectile(const AISTransferTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTransferTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTransferTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AISTransferTestProjectile)


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AISTransferTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AISTransferTestProjectile, ProjectileMovement); }


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_9_PROLOG
#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_RPC_WRAPPERS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_INCLASS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISTRANSFERTEST_API UClass* StaticClass<class AISTransferTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ISTransferTest_Source_ISTransferTest_ISTransferTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
