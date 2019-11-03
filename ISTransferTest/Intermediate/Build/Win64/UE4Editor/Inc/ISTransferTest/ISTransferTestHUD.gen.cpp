// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISTransferTest/ISTransferTestHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTransferTestHUD() {}
// Cross Module References
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AISTransferTestHUD_NoRegister();
	ISTRANSFERTEST_API UClass* Z_Construct_UClass_AISTransferTestHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ISTransferTest();
// End Cross Module References
	void AISTransferTestHUD::StaticRegisterNativesAISTransferTestHUD()
	{
	}
	UClass* Z_Construct_UClass_AISTransferTestHUD_NoRegister()
	{
		return AISTransferTestHUD::StaticClass();
	}
	struct Z_Construct_UClass_AISTransferTestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AISTransferTestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISTransferTestHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ISTransferTestHUD.h" },
		{ "ModuleRelativePath", "ISTransferTestHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AISTransferTestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTransferTestHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AISTransferTestHUD_Statics::ClassParams = {
		&AISTransferTestHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AISTransferTestHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AISTransferTestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AISTransferTestHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AISTransferTestHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AISTransferTestHUD, 3097501443);
	template<> ISTRANSFERTEST_API UClass* StaticClass<AISTransferTestHUD>()
	{
		return AISTransferTestHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AISTransferTestHUD(Z_Construct_UClass_AISTransferTestHUD, &AISTransferTestHUD::StaticClass, TEXT("/Script/ISTransferTest"), TEXT("AISTransferTestHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AISTransferTestHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
