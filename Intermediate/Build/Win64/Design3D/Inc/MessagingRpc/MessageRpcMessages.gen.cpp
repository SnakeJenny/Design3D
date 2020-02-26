// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MessagingRpc/Public/MessageRpcMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageRpcMessages() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcUnhandled();
	UPackage* Z_Construct_UPackage__Script_MessagingRpc();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcProgress();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcCancel();
// End Cross Module References
class UScriptStruct* FMessageRpcUnhandled::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESSAGINGRPC_API uint32 Get_Z_Construct_UScriptStruct_FMessageRpcUnhandled_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcUnhandled, Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcUnhandled"), sizeof(FMessageRpcUnhandled), Get_Z_Construct_UScriptStruct_FMessageRpcUnhandled_Hash());
	}
	return Singleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcUnhandled>()
{
	return FMessageRpcUnhandled::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessageRpcUnhandled(FMessageRpcUnhandled::StaticStruct, TEXT("/Script/MessagingRpc"), TEXT("MessageRpcUnhandled"), false, nullptr, nullptr);
static struct FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcUnhandled
{
	FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcUnhandled()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessageRpcUnhandled")),new UScriptStruct::TCppStructOps<FMessageRpcUnhandled>);
	}
} ScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcUnhandled;
	struct Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for notifying RPC clients that a call was not handled by the server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcUnhandled>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageRpcUnhandled, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcUnhandled",
		sizeof(FMessageRpcUnhandled),
		alignof(FMessageRpcUnhandled),
		Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcUnhandled()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessageRpcUnhandled_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MessagingRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessageRpcUnhandled"), sizeof(FMessageRpcUnhandled), Get_Z_Construct_UScriptStruct_FMessageRpcUnhandled_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessageRpcUnhandled_Hash() { return 3235719795U; }
class UScriptStruct* FMessageRpcProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESSAGINGRPC_API uint32 Get_Z_Construct_UScriptStruct_FMessageRpcProgress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcProgress, Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcProgress"), sizeof(FMessageRpcProgress), Get_Z_Construct_UScriptStruct_FMessageRpcProgress_Hash());
	}
	return Singleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcProgress>()
{
	return FMessageRpcProgress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessageRpcProgress(FMessageRpcProgress::StaticStruct, TEXT("/Script/MessagingRpc"), TEXT("MessageRpcProgress"), false, nullptr, nullptr);
static struct FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcProgress
{
	FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcProgress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessageRpcProgress")),new UScriptStruct::TCppStructOps<FMessageRpcProgress>);
	}
} ScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcProgress;
	struct Z_Construct_UScriptStruct_FMessageRpcProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Completion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for updating the progress of an RPC call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcProgress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Status text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageRpcProgress, StatusText), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageRpcProgress, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Completion percentage (0.0 to 1.0)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion = { "Completion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageRpcProgress, Completion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcProgress",
		sizeof(FMessageRpcProgress),
		alignof(FMessageRpcProgress),
		Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessageRpcProgress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MessagingRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessageRpcProgress"), sizeof(FMessageRpcProgress), Get_Z_Construct_UScriptStruct_FMessageRpcProgress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessageRpcProgress_Hash() { return 185714321U; }
class UScriptStruct* FMessageRpcCancel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESSAGINGRPC_API uint32 Get_Z_Construct_UScriptStruct_FMessageRpcCancel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcCancel, Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcCancel"), sizeof(FMessageRpcCancel), Get_Z_Construct_UScriptStruct_FMessageRpcCancel_Hash());
	}
	return Singleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcCancel>()
{
	return FMessageRpcCancel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessageRpcCancel(FMessageRpcCancel::StaticStruct, TEXT("/Script/MessagingRpc"), TEXT("MessageRpcCancel"), false, nullptr, nullptr);
static struct FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcCancel
{
	FScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcCancel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessageRpcCancel")),new UScriptStruct::TCppStructOps<FMessageRpcCancel>);
	}
} ScriptStruct_MessagingRpc_StaticRegisterNativesFMessageRpcCancel;
	struct Z_Construct_UScriptStruct_FMessageRpcCancel_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for canceling an RPC call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcCancel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessageRpcCancel, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcCancel",
		sizeof(FMessageRpcCancel),
		alignof(FMessageRpcCancel),
		Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcCancel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessageRpcCancel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MessagingRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessageRpcCancel"), sizeof(FMessageRpcCancel), Get_Z_Construct_UScriptStruct_FMessageRpcCancel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessageRpcCancel_Hash() { return 4106538550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
