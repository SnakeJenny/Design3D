// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Services/Public/Account/IPortalUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPortalUser() {}
// Cross Module References
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved();
	UPackage* Z_Construct_UPackage__Script_PortalServices();
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails();
// End Cross Module References
	static UEnum* EEntitlementCacheLevelRetrieved_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved, Z_Construct_UPackage__Script_PortalServices(), TEXT("EEntitlementCacheLevelRetrieved"));
		}
		return Singleton;
	}
	template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRetrieved>()
	{
		return EEntitlementCacheLevelRetrieved_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEntitlementCacheLevelRetrieved(EEntitlementCacheLevelRetrieved_StaticEnum, TEXT("/Script/PortalServices"), TEXT("EEntitlementCacheLevelRetrieved"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Hash() { return 2398853272U; }
	UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PortalServices();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEntitlementCacheLevelRetrieved"), 0, Get_Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEntitlementCacheLevelRetrieved::None", (int64)EEntitlementCacheLevelRetrieved::None },
				{ "EEntitlementCacheLevelRetrieved::Memory", (int64)EEntitlementCacheLevelRetrieved::Memory },
				{ "EEntitlementCacheLevelRetrieved::Disk", (int64)EEntitlementCacheLevelRetrieved::Disk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disk.ToolTip", "Allow reference to entitlements cached on disk between sessions of the portal.\nThis cache is updated regularly while a user is signed-in.  If no user is signed-in\nthen disk cached entitlements are still used from the last signed-in user's session." },
				{ "Memory.ToolTip", "Allow reference to entitlements cached in-memory for this session of the portal.\nThese are periodically updated. This is the recommended level for entitlement checking." },
				{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
				{ "ToolTip", "Used to delineate which cache an entitlement check result was retrieved from." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PortalServices,
				nullptr,
				"EEntitlementCacheLevelRetrieved",
				"EEntitlementCacheLevelRetrieved",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEntitlementCacheLevelRequest_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest, Z_Construct_UPackage__Script_PortalServices(), TEXT("EEntitlementCacheLevelRequest"));
		}
		return Singleton;
	}
	template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRequest>()
	{
		return EEntitlementCacheLevelRequest_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEntitlementCacheLevelRequest(EEntitlementCacheLevelRequest_StaticEnum, TEXT("/Script/PortalServices"), TEXT("EEntitlementCacheLevelRequest"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Hash() { return 3183393843U; }
	UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PortalServices();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEntitlementCacheLevelRequest"), 0, Get_Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEntitlementCacheLevelRequest::Memory", (int64)EEntitlementCacheLevelRequest::Memory },
				{ "EEntitlementCacheLevelRequest::Disk", (int64)EEntitlementCacheLevelRequest::Disk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disk.ToolTip", "Allow reference to entitlements cached on disk between sessions of the portal.\nThis cache is updated regularly while a user is signed-in.  If no user is signed-in\nthen disk cached entitlements are still used from the last signed-in user's session." },
				{ "Memory.ToolTip", "Allow reference to entitlements cached in-memory for this session of the portal.\nThese are periodically updated. This is the recommended level for entitlement checking." },
				{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
				{ "ToolTip", "The available options for the different levels of caches available when\nrequesting information about user entitlements.\n\nDisk cache level includes Memory cache level." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PortalServices,
				nullptr,
				"EEntitlementCacheLevelRequest",
				"EEntitlementCacheLevelRequest",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPortalUserIsEntitledToItemResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult, Z_Construct_UPackage__Script_PortalServices(), TEXT("PortalUserIsEntitledToItemResult"), sizeof(FPortalUserIsEntitledToItemResult), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Hash());
	}
	return Singleton;
}
template<> PORTALSERVICES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemResult>()
{
	return FPortalUserIsEntitledToItemResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserIsEntitledToItemResult(FPortalUserIsEntitledToItemResult::StaticStruct, TEXT("/Script/PortalServices"), TEXT("PortalUserIsEntitledToItemResult"), false, nullptr, nullptr);
static struct FScriptStruct_PortalServices_StaticRegisterNativesFPortalUserIsEntitledToItemResult
{
	FScriptStruct_PortalServices_StaticRegisterNativesFPortalUserIsEntitledToItemResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserIsEntitledToItemResult")),new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResult>);
	}
} ScriptStruct_PortalServices_StaticRegisterNativesFPortalUserIsEntitledToItemResult;
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetrievedFromCacheLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RetrievedFromCacheLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RetrievedFromCacheLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEntitled_MetaData[];
#endif
		static void NewProp_IsEntitled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEntitled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "How fresh this entitlement information is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel = { "RetrievedFromCacheLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserIsEntitledToItemResult, RetrievedFromCacheLevel), Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "Whether this user is entitled to the item id" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_SetBit(void* Obj)
	{
		((FPortalUserIsEntitledToItemResult*)Obj)->IsEntitled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled = { "IsEntitled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalUserIsEntitledToItemResult), &Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The item id that was checked for an active entitlement" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserIsEntitledToItemResult, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		&NewStructOps,
		"PortalUserIsEntitledToItemResult",
		sizeof(FPortalUserIsEntitledToItemResult),
		alignof(FPortalUserIsEntitledToItemResult),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserIsEntitledToItemResult"), sizeof(FPortalUserIsEntitledToItemResult), Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Hash() { return 4219618211U; }
class UScriptStruct* FPortalUserDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PORTALSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FPortalUserDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserDetails, Z_Construct_UPackage__Script_PortalServices(), TEXT("PortalUserDetails"), sizeof(FPortalUserDetails), Get_Z_Construct_UScriptStruct_FPortalUserDetails_Hash());
	}
	return Singleton;
}
template<> PORTALSERVICES_API UScriptStruct* StaticStruct<FPortalUserDetails>()
{
	return FPortalUserDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPortalUserDetails(FPortalUserDetails::StaticStruct, TEXT("/Script/PortalServices"), TEXT("PortalUserDetails"), false, nullptr, nullptr);
static struct FScriptStruct_PortalServices_StaticRegisterNativesFPortalUserDetails
{
	FScriptStruct_PortalServices_StaticRegisterNativesFPortalUserDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PortalUserDetails")),new UScriptStruct::TCppStructOps<FPortalUserDetails>);
	}
} ScriptStruct_PortalServices_StaticRegisterNativesFPortalUserDetails;
	struct Z_Construct_UScriptStruct_FPortalUserDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSignedIn_MetaData[];
#endif
		static void NewProp_IsSignedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RealName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The basic data for the last or currently signed-in user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "Whether this user is currently signed-in to the portal" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_SetBit(void* Obj)
	{
		((FPortalUserDetails*)Obj)->IsSignedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn = { "IsSignedIn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPortalUserDetails), &Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users real name attached to their epic games account" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserDetails, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users epic games account email address" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserDetails, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users epic games account display name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPortalUserDetails, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		&NewStructOps,
		"PortalUserDetails",
		sizeof(FPortalUserDetails),
		alignof(FPortalUserDetails),
		Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPortalUserDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PortalServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PortalUserDetails"), sizeof(FPortalUserDetails), Get_Z_Construct_UScriptStruct_FPortalUserDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPortalUserDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPortalUserDetails_Hash() { return 2437107893U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
