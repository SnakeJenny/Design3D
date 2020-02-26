// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryManager() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager();
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
class UScriptStruct* FEnvQueryInstanceCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstanceCache, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryInstanceCache"), sizeof(FEnvQueryInstanceCache), Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryInstanceCache>()
{
	return FEnvQueryInstanceCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvQueryInstanceCache(FEnvQueryInstanceCache::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvQueryInstanceCache"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvQueryInstanceCache")),new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache;
	struct Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances with sorted tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "query template, duplicated in manager's world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvQueryInstanceCache, Template), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryInstanceCache",
		sizeof(FEnvQueryInstanceCache),
		alignof(FEnvQueryInstanceCache),
		Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvQueryInstanceCache"), sizeof(FEnvQueryInstanceCache), Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Hash() { return 3843520459U; }
class UScriptStruct* FEnvQueryRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryRequest, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryRequest"), sizeof(FEnvQueryRequest), Get_Z_Construct_UScriptStruct_FEnvQueryRequest_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryRequest>()
{
	return FEnvQueryRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvQueryRequest(FEnvQueryRequest::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvQueryRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvQueryRequest")),new UScriptStruct::TCppStructOps<FEnvQueryRequest>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest;
	struct Z_Construct_UScriptStruct_FEnvQueryRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "wrapper for easy query execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvQueryRequest, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "querier" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvQueryRequest, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "query to run" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvQueryRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryRequest",
		sizeof(FEnvQueryRequest),
		alignof(FEnvQueryRequest),
		Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvQueryRequest"), sizeof(FEnvQueryRequest), Get_Z_Construct_UScriptStruct_FEnvQueryRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_Hash() { return 2902537745U; }
	void UEnvQueryManager::StaticRegisterNativesUEnvQueryManager()
	{
		UClass* Class = UEnvQueryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunEQSQuery", &UEnvQueryManager::execRunEQSQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics
	{
		struct EnvQueryManager_eventRunEQSQuery_Parms
		{
			UObject* WorldContextObject;
			UEnvQuery* QueryTemplate;
			UObject* Querier;
			TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
			TSubclassOf<UEnvQueryInstanceBlueprintWrapper>  WrapperClass;
			UEnvQueryInstanceBlueprintWrapper* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WrapperClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Querier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, ReturnValue), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass = { "WrapperClass", nullptr, (EPropertyFlags)0x0014040000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WrapperClass), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, Querier), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WrapperClass" },
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryManager, nullptr, "RunEQSQuery", sizeof(EnvQueryManager_eventRunEQSQuery_Parms), Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister()
	{
		return UEnvQueryManager::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[];
#endif
		static void NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GCShieldedWrappers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GCShieldedWrappers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GCShieldedWrappers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalContexts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalContexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceCache_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery, "RunEQSQuery" }, // 2745006010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryManager.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval = { "QueryCountWarningInterval", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningInterval), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold = { "QueryCountWarningThreshold", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningThreshold), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "whether we update EQS queries based on:\n          running a test on one query and move to the next (breadth) - default behavior,\n          or test an entire query before moving to the next one (depth)." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj)
	{
		((UEnvQueryManager*)Obj)->bTestQueriesUsingBreadth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth = { "bTestQueriesUsingBreadth", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryManager), &Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how long are we allowed to test per update, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime = { "MaxAllowedTestingTime", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, MaxAllowedTestingTime), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, GCShieldedWrappers), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "local cache of context objects for managing BP based objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts = { "LocalContexts", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, LocalContexts), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner = { "LocalContexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache = { "InstanceCache", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryManager, InstanceCache), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner = { "InstanceCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnvQueryInstanceCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams = {
		&UEnvQueryManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryManager, 2038450058);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryManager>()
	{
		return UEnvQueryManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryManager(Z_Construct_UClass_UEnvQueryManager, &UEnvQueryManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
