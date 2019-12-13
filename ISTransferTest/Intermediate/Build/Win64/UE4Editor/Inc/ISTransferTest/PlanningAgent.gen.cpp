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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lookUpWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_lookUpWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_turnWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_turnWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_zigZagWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_zigZagWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_moveBackWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_moveBackWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_shootWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_shootWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_jumpWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_jumpWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enemySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_enemySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enemyAggression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_enemyAggression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enemyHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_enemyHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_currEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_currEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_maxEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_prevFrustration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_prevFrustration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_currFrustration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_currFrustration;
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
		{ "Comment", "// for determining most frustrating strat\n" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
		{ "ToolTip", "for determining most frustrating strat" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass = { "m_enemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_enemyClass), Z_Construct_UClass_AEnemyAgent1_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_lookUpWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_lookUpWeight = { "m_lookUpWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_lookUpWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_lookUpWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_lookUpWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_turnWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_turnWeight = { "m_turnWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_turnWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_turnWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_turnWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_zigZagWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_zigZagWeight = { "m_zigZagWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_zigZagWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_zigZagWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_zigZagWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_moveBackWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_moveBackWeight = { "m_moveBackWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_moveBackWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_moveBackWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_moveBackWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_shootWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_shootWeight = { "m_shootWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_shootWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_shootWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_shootWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_jumpWeight_MetaData[] = {
		{ "Category", "Weights" },
		{ "Comment", "// Weights\n" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
		{ "ToolTip", "Weights" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_jumpWeight = { "m_jumpWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_jumpWeight), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_jumpWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_jumpWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemySpeed_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemySpeed = { "m_enemySpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_enemySpeed), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemySpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyAggression_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyAggression = { "m_enemyAggression", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_enemyAggression), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyAggression_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyAggression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyHealth = { "m_enemyHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_enemyHealth), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currEnemies_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currEnemies = { "m_currEnemies", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_currEnemies), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currEnemies_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_maxEnemies_MetaData[] = {
		{ "Category", "Enemy" },
		{ "Comment", "// Enemy creation variables\n" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
		{ "ToolTip", "Enemy creation variables" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_maxEnemies = { "m_maxEnemies", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_maxEnemies), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_maxEnemies_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_maxEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_prevFrustration_MetaData[] = {
		{ "Category", "Frustration" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_prevFrustration = { "m_prevFrustration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_prevFrustration), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_prevFrustration_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_prevFrustration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currFrustration_MetaData[] = {
		{ "Category", "Frustration" },
		{ "Comment", "// Frustration variables\n" },
		{ "ModuleRelativePath", "PlanningAgent.h" },
		{ "ToolTip", "Frustration variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currFrustration = { "m_currFrustration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanningAgent, m_currFrustration), METADATA_PARAMS(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currFrustration_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currFrustration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanningAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_lookUpWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_turnWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_zigZagWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_moveBackWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_shootWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_jumpWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyAggression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_enemyHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_maxEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_prevFrustration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanningAgent_Statics::NewProp_m_currFrustration,
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
	IMPLEMENT_CLASS(APlanningAgent, 1672008034);
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
