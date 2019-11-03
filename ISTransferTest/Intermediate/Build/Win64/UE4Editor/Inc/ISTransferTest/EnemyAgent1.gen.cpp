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
	ISTRANSFERTEST_API UFunction* Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AEnemyAgent1::StaticRegisterNativesAEnemyAgent1()
	{
		UClass* Class = AEnemyAgent1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackingPlayer", &AEnemyAgent1::execOnAttackingPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics
	{
		struct EnemyAgent1_eventOnAttackingPlayer_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAgent1_eventOnAttackingPlayer_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAgent1_eventOnAttackingPlayer_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAgent1_eventOnAttackingPlayer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAgent1_eventOnAttackingPlayer_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::NewProp_SelfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//virtual void ChangeState();\n" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
		{ "ToolTip", "virtual void ChangeState();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAgent1, nullptr, "OnAttackingPlayer", nullptr, nullptr, sizeof(EnemyAgent1_eventOnAttackingPlayer_Parms), Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister()
	{
		return AEnemyAgent1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAgent1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_playerReached_MetaData[];
#endif
		static void NewProp_m_playerReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_playerReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_isAttacking_MetaData[];
#endif
		static void NewProp_m_isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_isAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAgent1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ISTransferTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyAgent1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyAgent1_OnAttackingPlayer, "OnAttackingPlayer" }, // 758983822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyAgent1.h" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_damage = { "m_damage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAgent1, m_damage), METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached_SetBit(void* Obj)
	{
		((AEnemyAgent1*)Obj)->m_playerReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached = { "m_playerReached", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyAgent1), &Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking_SetBit(void* Obj)
	{
		((AEnemyAgent1*)Obj)->m_isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking = { "m_isAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyAgent1), &Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_playerReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_isAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAgent1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAgent1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAgent1_Statics::ClassParams = {
		&AEnemyAgent1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AEnemyAgent1, 1847850541);
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
