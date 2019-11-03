// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISTRANSFERTEST_ISTransferTestCharacter_generated_h
#error "ISTransferTestCharacter.generated.h already included, missing '#pragma once' in ISTransferTestCharacter.h"
#endif
#define ISTRANSFERTEST_ISTransferTestCharacter_generated_h

#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_RPC_WRAPPERS
#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISTransferTestCharacter(); \
	friend struct Z_Construct_UClass_AISTransferTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AISTransferTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AISTransferTestCharacter)


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAISTransferTestCharacter(); \
	friend struct Z_Construct_UClass_AISTransferTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AISTransferTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(AISTransferTestCharacter)


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AISTransferTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISTransferTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTransferTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTransferTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISTransferTestCharacter(AISTransferTestCharacter&&); \
	NO_API AISTransferTestCharacter(const AISTransferTestCharacter&); \
public:


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISTransferTestCharacter(AISTransferTestCharacter&&); \
	NO_API AISTransferTestCharacter(const AISTransferTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTransferTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTransferTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AISTransferTestCharacter)


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AISTransferTestCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AISTransferTestCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AISTransferTestCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AISTransferTestCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AISTransferTestCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AISTransferTestCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AISTransferTestCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AISTransferTestCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__m_currHealth() { return STRUCT_OFFSET(AISTransferTestCharacter, m_currHealth); } \
	FORCEINLINE static uint32 __PPO__m_maxHealth() { return STRUCT_OFFSET(AISTransferTestCharacter, m_maxHealth); } \
	FORCEINLINE static uint32 __PPO__m_currHeat() { return STRUCT_OFFSET(AISTransferTestCharacter, m_currHeat); } \
	FORCEINLINE static uint32 __PPO__m_maxHeat() { return STRUCT_OFFSET(AISTransferTestCharacter, m_maxHeat); }


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_11_PROLOG
#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_RPC_WRAPPERS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_INCLASS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISTRANSFERTEST_API UClass* StaticClass<class AISTransferTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ISTransferTest_Source_ISTransferTest_ISTransferTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
