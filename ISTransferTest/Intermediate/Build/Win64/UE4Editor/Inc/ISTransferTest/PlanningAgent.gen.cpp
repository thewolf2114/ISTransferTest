// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISTransferTest/PlanningAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanningAgent() {}
// Cross Module References
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_APlanningAgent_NoRegister();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_APlanningAgent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ISTransferTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister();
// End Cross Module References
	void APlanningAgent::StaticRegisterNativesAPlanningAgent()
	{
	}
	UClass* Z_Construct_UClass_APlanningAgent_NoRegister()
	{
		return APlanningAgent::StaticClass();
	}
	struct Z_Construct_UClass_APlanningAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_enemyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanningAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlanningAgent.h" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass_MetaData[] = {
		{ "Category", "Spawn Enemy" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass = { "m_enemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_enemyClass), Z_Construct_UClass_AEnemyAgent1_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanningAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanningAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanningAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanningAgent_Statics::ClassParams = {
		&APlanningAgent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanningAgent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanningAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanningAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanningAgent, 250917240);
	template<> ISTRANSFERTEST_API UClass* StaticClass<APlanningAgent>()
	{
		return APlanningAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanningAgent(Z_Construct_UClass_APlanningAgent, &APlanningAgent::StaticClass, TEXT("/Script/ISTransferTest"), TEXT("APlanningAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanningAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
