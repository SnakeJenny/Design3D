// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateReflector/Private/WidgetSnapshotMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages() {}
// Cross Module References
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
	UPackage* Z_Construct_UPackage__Script_SlateReflector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
// End Cross Module References
class UScriptStruct* FWidgetSnapshotResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Hash());
	}
	return Singleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotResponse>()
{
	return FWidgetSnapshotResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotResponse(FWidgetSnapshotResponse::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotResponse")),new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse;
	struct Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnapshotData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to receive a widget snapshot from a remote target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData = { "SnapshotData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotData), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner = { "SnapshotData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
		nullptr,
		&NewStructOps,
		"WidgetSnapshotResponse",
		sizeof(FWidgetSnapshotResponse),
		alignof(FWidgetSnapshotResponse),
		Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Hash() { return 2555895727U; }
class UScriptStruct* FWidgetSnapshotRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Hash());
	}
	return Singleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotRequest>()
{
	return FWidgetSnapshotRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotRequest(FWidgetSnapshotRequest::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotRequest"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotRequest")),new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest;
	struct Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetInstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to request a widget snapshot from a remote target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetSnapshotRequest, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The instance ID of the remote target we want to receive a snapshot from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId = { "TargetInstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetSnapshotRequest, TargetInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
		nullptr,
		&NewStructOps,
		"WidgetSnapshotRequest",
		sizeof(FWidgetSnapshotRequest),
		alignof(FWidgetSnapshotRequest),
		Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Hash() { return 4074021202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
