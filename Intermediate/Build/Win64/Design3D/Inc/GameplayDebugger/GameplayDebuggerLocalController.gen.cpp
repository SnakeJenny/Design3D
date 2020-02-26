// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebugger/Public/GameplayDebuggerLocalController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
// End Cross Module References
	void UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugActorCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugActorCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedReplicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedReplicator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerLocalController.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate = { "DebugActorCandidate", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, DebugActorCandidate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager = { "CachedPlayerManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedPlayerManager), Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator = { "CachedReplicator", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedReplicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerLocalController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams = {
		&UGameplayDebuggerLocalController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers),
		0,
		0x040000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayDebuggerLocalController, 2406588474);
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerLocalController>()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerLocalController(Z_Construct_UClass_UGameplayDebuggerLocalController, &UGameplayDebuggerLocalController::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerLocalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerLocalController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
