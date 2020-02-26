// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/AssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetData() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References
class UScriptStruct* FAssetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetData, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetData"), sizeof(FAssetData), Get_Z_Construct_UScriptStruct_FAssetData_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FAssetData>()
{
	return FAssetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetData(FAssetData::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetData")),new UScriptStruct::TCppStructOps<FAssetData>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData;
	struct Z_Construct_UScriptStruct_FAssetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "A struct to hold important information about an assets found by the Asset Registry\nThis struct is transient and should never be serialized" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "The name of the asset's class" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetData, AssetClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "The name of the asset without the package" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackagePath_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "The path to the package in which the asset is found, this is /Game/Path with the Package stripped off" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetData, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "The name of the package in which the asset is found, this is the full long package name such as /Game/Path/Package" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetData, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetData.h" },
		{ "ToolTip", "The object path for the asset in the form PackageName.AssetName. Only top level objects in a package can have AssetData" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetData, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_ObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_ObjectPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetData_Statics::NewProp_ObjectPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"AssetData",
		sizeof(FAssetData),
		alignof(FAssetData),
		Z_Construct_UScriptStruct_FAssetData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetData"), sizeof(FAssetData), Get_Z_Construct_UScriptStruct_FAssetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetData_Hash() { return 2519689862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
