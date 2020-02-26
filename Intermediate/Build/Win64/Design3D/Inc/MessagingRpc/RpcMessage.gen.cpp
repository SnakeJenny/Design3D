// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MessagingRpc/Public/RpcMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpcMessage() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	UPackage* Z_Construct_UPackage__Script_MessagingRpc();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FRpcMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESSAGINGRPC_API uint32 Get_Z_Construct_UScriptStruct_FRpcMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpcMessage, Z_Construct_UPackage__Script_MessagingRpc(), TEXT("RpcMessage"), sizeof(FRpcMessage), Get_Z_Construct_UScriptStruct_FRpcMessage_Hash());
	}
	return Singleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FRpcMessage>()
{
	return FRpcMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRpcMessage(FRpcMessage::StaticStruct, TEXT("/Script/MessagingRpc"), TEXT("RpcMessage"), false, nullptr, nullptr);
static struct FScriptStruct_MessagingRpc_StaticRegisterNativesFRpcMessage
{
	FScriptStruct_MessagingRpc_StaticRegisterNativesFRpcMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RpcMessage")),new UScriptStruct::TCppStructOps<FRpcMessage>);
	}
} ScriptStruct_MessagingRpc_StaticRegisterNativesFRpcMessage;
	struct Z_Construct_UScriptStruct_FRpcMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpcMessage.h" },
		{ "ToolTip", "Base type for RPC messages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpcMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpcMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpcMessage.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpcMessage, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpcMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"RpcMessage",
		sizeof(FRpcMessage),
		alignof(FRpcMessage),
		Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRpcMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MessagingRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RpcMessage"), sizeof(FRpcMessage), Get_Z_Construct_UScriptStruct_FRpcMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRpcMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRpcMessage_Hash() { return 2539616393U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
