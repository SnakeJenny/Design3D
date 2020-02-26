// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineReplStructs() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
// End Cross Module References
class UScriptStruct* FUniqueNetIdRepl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdRepl, Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdRepl"), sizeof(FUniqueNetIdRepl), Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdRepl>()
{
	return FUniqueNetIdRepl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUniqueNetIdRepl(FUniqueNetIdRepl::StaticStruct, TEXT("/Script/Engine"), TEXT("UniqueNetIdRepl"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl
{
	FScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UniqueNetIdRepl")),new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl;
	struct Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicationBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationBytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Wrapper for opaque type FUniqueNetId\n\nMakes sure that the opaque aspects of FUniqueNetId are properly handled/serialized\nover network RPC and actor replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Network serialized data cache" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniqueNetIdRepl, ReplicationBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FUniqueNetIdWrapper,
		&NewStructOps,
		"UniqueNetIdRepl",
		sizeof(FUniqueNetIdRepl),
		alignof(FUniqueNetIdRepl),
		Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UniqueNetIdRepl"), sizeof(FUniqueNetIdRepl), Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_Hash() { return 1165895399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
