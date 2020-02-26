// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/AssetBundleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetBundleData() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
// End Cross Module References
class UScriptStruct* FAssetBundleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleData, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FAssetBundleData>()
{
	return FAssetBundleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleData(FAssetBundleData::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleData")),new UScriptStruct::TCppStructOps<FAssetBundleData>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData;
	struct Z_Construct_UScriptStruct_FAssetBundleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bundles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bundles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "A struct with a list of asset bundle entries. If one of these is inside a UObject it will get automatically exported as the asset registry tag AssetBundleData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetBundleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "List of bundles defined" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles = { "Bundles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetBundleData, Bundles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles_Inner = { "Bundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetBundleEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetBundleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewProp_Bundles_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetBundleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"AssetBundleData",
		sizeof(FAssetBundleData),
		alignof(FAssetBundleData),
		Z_Construct_UScriptStruct_FAssetBundleData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetBundleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_Hash() { return 1599117096U; }
class UScriptStruct* FAssetBundleEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleEntry, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FAssetBundleEntry>()
{
	return FAssetBundleEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleEntry(FAssetBundleEntry::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleEntry")),new UScriptStruct::TCppStructOps<FAssetBundleEntry>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry;
	struct Z_Construct_UScriptStruct_FAssetBundleEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BundleAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BundleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleScope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "A struct representing a single AssetBundle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetBundleEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "List of string assets contained in this bundle" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets = { "BundleAssets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetBundleEntry, BundleAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets_Inner = { "BundleAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "Specific name of this bundle, should be unique for a given scope" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleName = { "BundleName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetBundleEntry, BundleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleScope_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetBundleData.h" },
		{ "ToolTip", "Asset this bundle is saved within. This is empty for global bundles, or in the saved bundle info" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleScope = { "BundleScope", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetBundleEntry, BundleScope), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleScope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleScope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewProp_BundleScope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"AssetBundleEntry",
		sizeof(FAssetBundleEntry),
		alignof(FAssetBundleEntry),
		Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_Hash() { return 2866579736U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
