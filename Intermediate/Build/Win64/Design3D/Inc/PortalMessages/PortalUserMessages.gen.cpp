// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/Public/PortalUserMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalUserMessages() {}
// Cross Module References
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest();
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest();
// End Cross Module References
class UScriptStruct* FPortalUserIsEntitledToItemResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserIsEntitledToItemResponse"), sizeof(FPortalUserIsEntitledToItemResponse), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemResponse>()
{
	return FPortalUserIsEntitledToItemResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserIsEntitledToItemResponse(FPortalUserIsEntitledToItemResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserIsEntitledToItemResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserIsEntitledToItemResponse")),new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemResponse;
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserIsEntitledToItemResponse, Result), Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserIsEntitledToItemResponse",
		sizeof(FPortalUserIsEntitledToItemResponse),
		alignof(FPortalUserIsEntitledToItemResponse),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserIsEntitledToItemResponse"), sizeof(FPortalUserIsEntitledToItemResponse), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Hash() { return 2641519341U; }
class UScriptStruct* FPortalUserIsEntitledToItemRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserIsEntitledToItemRequest"), sizeof(FPortalUserIsEntitledToItemRequest), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemRequest>()
{
	return FPortalUserIsEntitledToItemRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserIsEntitledToItemRequest(FPortalUserIsEntitledToItemRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserIsEntitledToItemRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserIsEntitledToItemRequest")),new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserIsEntitledToItemRequest;
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CacheLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CacheLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel = { "CacheLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserIsEntitledToItemRequest, CacheLevel), Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserIsEntitledToItemRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserIsEntitledToItemRequest",
		sizeof(FPortalUserIsEntitledToItemRequest),
		alignof(FPortalUserIsEntitledToItemRequest),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserIsEntitledToItemRequest"), sizeof(FPortalUserIsEntitledToItemRequest), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Hash() { return 1333437367U; }
class UScriptStruct* FPortalUserGetUserDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserGetUserDetailsResponse"), sizeof(FPortalUserGetUserDetailsResponse), Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserGetUserDetailsResponse>()
{
	return FPortalUserGetUserDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserGetUserDetailsResponse(FPortalUserGetUserDetailsResponse::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserGetUserDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsResponse
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserGetUserDetailsResponse")),new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsResponse>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsResponse;
	struct Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserGetUserDetailsResponse, Result), Z_Construct_UScriptStruct_FPortalUserDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserGetUserDetailsResponse",
		sizeof(FPortalUserGetUserDetailsResponse),
		alignof(FPortalUserGetUserDetailsResponse),
		Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserGetUserDetailsResponse"), sizeof(FPortalUserGetUserDetailsResponse), Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Hash() { return 212696062U; }
class UScriptStruct* FPortalUserGetUserDetailsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest, Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserGetUserDetailsRequest"), sizeof(FPortalUserGetUserDetailsRequest), Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Hash());
	}
	return Singleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserGetUserDetailsRequest>()
{
	return FPortalUserGetUserDetailsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserGetUserDetailsRequest(FPortalUserGetUserDetailsRequest::StaticStruct, TEXT("/Script/PortalMessages"), TEXT("PortalUserGetUserDetailsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsRequest
{
	FScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserGetUserDetailsRequest")),new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsRequest>);
	}
} ScriptStruct_PortalMessages_StaticRegisterNativesFPortalUserGetUserDetailsRequest;
	struct Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserGetUserDetailsRequest",
		sizeof(FPortalUserGetUserDetailsRequest),
		alignof(FPortalUserGetUserDetailsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserGetUserDetailsRequest"), sizeof(FPortalUserGetUserDetailsRequest), Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Hash() { return 2445420980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
