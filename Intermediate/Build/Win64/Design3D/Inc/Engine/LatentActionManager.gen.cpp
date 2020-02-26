// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LatentActionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentActionManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLatentActionManager::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionManager, Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionManager"), sizeof(FLatentActionManager), Get_Z_Construct_UScriptStruct_FLatentActionManager_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionManager>()
{
	return FLatentActionManager::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLatentActionManager(FLatentActionManager::StaticStruct, TEXT("/Script/Engine"), TEXT("LatentActionManager"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLatentActionManager
{
	FScriptStruct_Engine_StaticRegisterNativesFLatentActionManager()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LatentActionManager")),new UScriptStruct::TCppStructOps<FLatentActionManager>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLatentActionManager;
	struct Z_Construct_UScriptStruct_FLatentActionManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The latent action manager handles all pending latent actions for a single world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLatentActionManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionManager>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LatentActionManager",
		sizeof(FLatentActionManager),
		alignof(FLatentActionManager),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LatentActionManager"), sizeof(FLatentActionManager), Get_Z_Construct_UScriptStruct_FLatentActionManager_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLatentActionManager_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_Hash() { return 2566029602U; }
class UScriptStruct* FLatentActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionInfo"), sizeof(FLatentActionInfo), Get_Z_Construct_UScriptStruct_FLatentActionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionInfo>()
{
	return FLatentActionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLatentActionInfo(FLatentActionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("LatentActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LatentActionInfo")),new UScriptStruct::TCppStructOps<FLatentActionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo;
	struct Z_Construct_UScriptStruct_FLatentActionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExecutionFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Linkage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Linkage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Latent action info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData[] = {
		{ "LatentCallbackTarget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Object to execute the function on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget = { "CallbackTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLatentActionInfo, CallbackTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The function to execute." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction = { "ExecutionFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLatentActionInfo, ExecutionFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "the UUID for this action" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLatentActionInfo, UUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "NeedsLatentFixup", "TRUE" },
		{ "ToolTip", "The resume point within the function to execute" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage = { "Linkage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLatentActionInfo, Linkage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LatentActionInfo",
		sizeof(FLatentActionInfo),
		alignof(FLatentActionInfo),
		Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LatentActionInfo"), sizeof(FLatentActionInfo), Get_Z_Construct_UScriptStruct_FLatentActionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLatentActionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_Hash() { return 2524984188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
