// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISTransferTest/ISTransferTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTransferTestGameMode() {}
// Cross Module References
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AISTransferTestGameMode_NoRegister();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AISTransferTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ISTransferTest();
// End Cross Module References
	void AISTransferTestGameMode::StaticRegisterNativesAISTransferTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AISTransferTestGameMode_NoRegister()
	{
		return AISTransferTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AISTransferTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AISTransferTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISTransferTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ISTransferTestGameMode.h" },
		{ "ModuleRelativePath", "ISTransferTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AISTransferTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTransferTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AISTransferTestGameMode_Statics::ClassParams = {
		&AISTransferTestGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AISTransferTestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AISTransferTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AISTransferTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AISTransferTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AISTransferTestGameMode, 746740950);
	template<> ISTRANSFERTEST_API UClass* StaticClass<AISTransferTestGameMode>()
	{
		return AISTransferTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AISTransferTestGameMode(Z_Construct_UClass_AISTransferTestGameMode, &AISTransferTestGameMode::StaticClass, TEXT("/Script/ISTransferTest"), TEXT("AISTransferTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AISTransferTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
