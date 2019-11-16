// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISTRANSFERTEST_PlanningAgent_generated_h
#error "PlanningAgent.generated.h already included, missing '#pragma once' in PlanningAgent.h"
#endif
#define ISTRANSFERTEST_PlanningAgent_generated_h

#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_RPC_WRAPPERS
#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanningAgent(); \
	friend struct Z_Construct_UClass_APlanningAgent_Statics; \
public: \
	DECLARE_CLASS(APlanningAgent, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(APlanningAgent)


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlanningAgent(); \
	friend struct Z_Construct_UClass_APlanningAgent_Statics; \
public: \
	DECLARE_CLASS(APlanningAgent, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(APlanningAgent)


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlanningAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanningAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanningAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanningAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanningAgent(APlanningAgent&&); \
	NO_API APlanningAgent(const APlanningAgent&); \
public:


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanningAgent(APlanningAgent&&); \
	NO_API APlanningAgent(const APlanningAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanningAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanningAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlanningAgent)


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_jumpWeight() { return STRUCT_OFFSET(APlanningAgent, m_jumpWeight); } \
	FORCEINLINE static uint32 __PPO__m_shootWeight() { return STRUCT_OFFSET(APlanningAgent, m_shootWeight); } \
	FORCEINLINE static uint32 __PPO__m_moveBackWeight() { return STRUCT_OFFSET(APlanningAgent, m_moveBackWeight); } \
	FORCEINLINE static uint32 __PPO__m_zigZagWeight() { return STRUCT_OFFSET(APlanningAgent, m_zigZagWeight); } \
	FORCEINLINE static uint32 __PPO__m_turnWeight() { return STRUCT_OFFSET(APlanningAgent, m_turnWeight); } \
	FORCEINLINE static uint32 __PPO__m_lookUpWeight() { return STRUCT_OFFSET(APlanningAgent, m_lookUpWeight); } \
	FORCEINLINE static uint32 __PPO__m_enemyClass() { return STRUCT_OFFSET(APlanningAgent, m_enemyClass); }


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_10_PROLOG
#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_RPC_WRAPPERS \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_INCLASS \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_INCLASS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_PlanningAgent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISTRANSFERTEST_API UClass* StaticClass<class APlanningAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ISTransferTest_Source_ISTransferTest_PlanningAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
