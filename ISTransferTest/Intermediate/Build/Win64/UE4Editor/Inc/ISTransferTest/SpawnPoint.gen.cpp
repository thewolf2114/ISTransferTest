// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISTransferTest/SpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPoint() {}
// Cross Module References
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_ASpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ISTransferTest();
// End Cross Module References
	void ASpawnPoint::StaticRegisterNativesASpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_ASpawnPoint_NoRegister()
	{
		return ASpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPoint.h" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPoint_Statics::ClassParams = {
		&ASpawnPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnPoint, 464223253);
	template<> ISTRANSFERTEST_API UClass* StaticClass<ASpawnPoint>()
	{
		return ASpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnPoint(Z_Construct_UClass_ASpawnPoint, &ASpawnPoint::StaticClass, TEXT("/Script/ISTransferTest"), TEXT("ASpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
