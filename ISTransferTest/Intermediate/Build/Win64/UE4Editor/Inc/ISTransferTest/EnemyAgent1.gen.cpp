// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISTransferTest/EnemyAgent1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAgent1() {}
// Cross Module References
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AEnemyAgent1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ISTransferTest();
// End Cross Module References
	void AEnemyAgent1::StaticRegisterNativesAEnemyAgent1()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister()
	{
		return AEnemyAgent1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAgent1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAgent1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyAgent1.h" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAgent1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAgent1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAgent1_Statics::ClassParams = {
		&AEnemyAgent1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAgent1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyAgent1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAgent1, 3308982716);
	template<> ISTRANSFERTEST_API UClass* StaticClass<AEnemyAgent1>()
	{
		return AEnemyAgent1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAgent1(Z_Construct_UClass_AEnemyAgent1, &AEnemyAgent1::StaticClass, TEXT("/Script/ISTransferTest"), TEXT("AEnemyAgent1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAgent1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
