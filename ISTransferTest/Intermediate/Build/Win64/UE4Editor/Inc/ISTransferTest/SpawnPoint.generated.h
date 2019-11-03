// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISTRANSFERTEST_SpawnPoint_generated_h
#error "SpawnPoint.generated.h already included, missing '#pragma once' in SpawnPoint.h"
#endif
#define ISTRANSFERTEST_SpawnPoint_generated_h

#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_RPC_WRAPPERS
#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnPoint(); \
	friend struct Z_Construct_UClass_ASpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASpawnPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPoint)


#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnPoint(); \
	friend struct Z_Construct_UClass_ASpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASpawnPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ISTransferTest"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPoint)


#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPoint(ASpawnPoint&&); \
	NO_API ASpawnPoint(const ASpawnPoint&); \
public:


#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPoint(ASpawnPoint&&); \
	NO_API ASpawnPoint(const ASpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnPoint)


#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET
#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_9_PROLOG
#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_RPC_WRAPPERS \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_INCLASS \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
	ISTransferTest_Source_ISTransferTest_SpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISTRANSFERTEST_API UClass* StaticClass<class ASpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ISTransferTest_Source_ISTransferTest_SpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
