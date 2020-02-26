// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/Public/PortalApplicationWindowMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalApplicationWindowMessages() {}
// Cross Module References
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest();
// End Cross Module References
class UScriptStruct* FPortalApplicationWindowNavigateToResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalApplicationWindowNavigateToResponse"), sizeof(FPortalApplicationWindowNavigateToResponse), Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalApplicationWindowNavigateToResponse>()
{
	return FPortalApplicationWindowNavigateToResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalApplicationWindowNavigateToResponse(FPortalApplicationWindowNavigateToResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalApplicationWindowNavigateToResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalApplicationWindowNavigateToResponse")),new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToResponse;
	struct Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalApplicationWindowNavigateToResponse*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalApplicationWindowNavigateToResponse), &Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalApplicationWindowNavigateToResponse",
		sizeof(FPortalApplicationWindowNavigateToResponse),
		alignof(FPortalApplicationWindowNavigateToResponse),
		Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalApplicationWindowNavigateToResponse"), sizeof(FPortalApplicationWindowNavigateToResponse), Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Hash() { return 979813442U; }
class UScriptStruct* FPortalApplicationWindowNavigateToRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalApplicationWindowNavigateToRequest"), sizeof(FPortalApplicationWindowNavigateToRequest), Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalApplicationWindowNavigateToRequest>()
{
	return FPortalApplicationWindowNavigateToRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalApplicationWindowNavigateToRequest(FPortalApplicationWindowNavigateToRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalApplicationWindowNavigateToRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalApplicationWindowNavigateToRequest")),new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalApplicationWindowNavigateToRequest;
	struct Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalApplicationWindowNavigateToRequest, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalApplicationWindowNavigateToRequest",
		sizeof(FPortalApplicationWindowNavigateToRequest),
		alignof(FPortalApplicationWindowNavigateToRequest),
		Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalApplicationWindowNavigateToRequest"), sizeof(FPortalApplicationWindowNavigateToRequest), Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Hash() { return 2412631634U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
