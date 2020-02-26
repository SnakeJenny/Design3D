// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebugger/Public/GameplayDebuggerPlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FGameplayDebuggerPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerPlayerData>()
{
	return FGameplayDebuggerPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerPlayerData(FGameplayDebuggerPlayerData::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerPlayerData")),new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator = { "Replicator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Replicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Controller), Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerPlayerData",
		sizeof(FGameplayDebuggerPlayerData),
		alignof(FGameplayDebuggerPlayerData),
		Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Hash() { return 414939684U; }
	void AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager()
	{
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingRegistrations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingRegistrations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingRegistrations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerPlayerManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PendingRegistrations), METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PlayerData), METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner = { "PlayerData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerPlayerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams = {
		&AGameplayDebuggerPlayerManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers),
		0,
		0x048002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayDebuggerPlayerManager, 3789319419);
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerPlayerManager>()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerPlayerManager(Z_Construct_UClass_AGameplayDebuggerPlayerManager, &AGameplayDebuggerPlayerManager::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerPlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerPlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
