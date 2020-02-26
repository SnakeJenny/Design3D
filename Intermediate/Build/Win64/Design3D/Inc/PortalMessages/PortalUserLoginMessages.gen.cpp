// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/Public/PortalUserLoginMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalUserLoginMessages() {}
// Cross Module References
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest();
// End Cross Module References
class UScriptStruct* FPortalUserLoginPromptUserForSignInResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserLoginPromptUserForSignInResponse"), sizeof(FPortalUserLoginPromptUserForSignInResponse), Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserLoginPromptUserForSignInResponse>()
{
	return FPortalUserLoginPromptUserForSignInResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse(FPortalUserLoginPromptUserForSignInResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserLoginPromptUserForSignInResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserLoginPromptUserForSignInResponse")),new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInResponse;
	struct Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalUserLoginPromptUserForSignInResponse*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalUserLoginPromptUserForSignInResponse), &Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserLoginPromptUserForSignInResponse",
		sizeof(FPortalUserLoginPromptUserForSignInResponse),
		alignof(FPortalUserLoginPromptUserForSignInResponse),
		Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserLoginPromptUserForSignInResponse"), sizeof(FPortalUserLoginPromptUserForSignInResponse), Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Hash() { return 4170523507U; }
class UScriptStruct* FPortalUserLoginPromptUserForSignInRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserLoginPromptUserForSignInRequest"), sizeof(FPortalUserLoginPromptUserForSignInRequest), Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserLoginPromptUserForSignInRequest>()
{
	return FPortalUserLoginPromptUserForSignInRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest(FPortalUserLoginPromptUserForSignInRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserLoginPromptUserForSignInRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserLoginPromptUserForSignInRequest")),new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserLoginPromptUserForSignInRequest;
	struct Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserLoginPromptUserForSignInRequest",
		sizeof(FPortalUserLoginPromptUserForSignInRequest),
		alignof(FPortalUserLoginPromptUserForSignInRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserLoginPromptUserForSignInRequest"), sizeof(FPortalUserLoginPromptUserForSignInRequest), Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Hash() { return 3661253859U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
