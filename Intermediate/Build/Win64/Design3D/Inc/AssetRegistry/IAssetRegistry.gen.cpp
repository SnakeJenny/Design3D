// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/IAssetRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_SearchAllAssets();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets();
// End Cross Module References
	void UAssetRegistry::StaticRegisterNativesUAssetRegistry()
	{
		UClass* Class = UAssetRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAssets", &IAssetRegistry::execGetAllAssets },
			{ "GetAllCachedPaths", &IAssetRegistry::execGetAllCachedPaths },
			{ "GetAssetByObjectPath", &IAssetRegistry::execGetAssetByObjectPath },
			{ "GetAssets", &IAssetRegistry::execGetAssets },
			{ "GetAssetsByClass", &IAssetRegistry::execGetAssetsByClass },
			{ "GetAssetsByPackageName", &IAssetRegistry::execGetAssetsByPackageName },
			{ "GetAssetsByPath", &IAssetRegistry::execGetAssetsByPath },
			{ "GetSubPaths", &IAssetRegistry::execGetSubPaths },
			{ "HasAssets", &IAssetRegistry::execHasAssets },
			{ "IsLoadingAssets", &IAssetRegistry::execIsLoadingAssets },
			{ "PrioritizeSearchPath", &IAssetRegistry::execPrioritizeSearchPath },
			{ "RunAssetsThroughFilter", &IAssetRegistry::execRunAssetsThroughFilter },
			{ "ScanFilesSynchronous", &IAssetRegistry::execScanFilesSynchronous },
			{ "ScanModifiedAssetFiles", &IAssetRegistry::execScanModifiedAssetFiles },
			{ "ScanPathsSynchronous", &IAssetRegistry::execScanPathsSynchronous },
			{ "SearchAllAssets", &IAssetRegistry::execSearchAllAssets },
			{ "UseFilterToExcludeAssets", &IAssetRegistry::execUseFilterToExcludeAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics
	{
		struct AssetRegistry_eventGetAllAssets_Parms
		{
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAllAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAllAssets_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllAssets_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the registry.\nThis method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllAssets", sizeof(AssetRegistry_eventGetAllAssets_Parms), Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics
	{
		struct AssetRegistry_eventGetAllCachedPaths_Parms
		{
			TArray<FString> OutPathList;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllCachedPaths_Parms, OutPathList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllCachedPaths", sizeof(AssetRegistry_eventGetAllCachedPaths_Parms), Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics
	{
		struct AssetRegistry_eventGetAssetByObjectPath_Parms
		{
			FName ObjectPath;
			bool bIncludeOnlyOnDiskAssets;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetByObjectPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ObjectPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets the asset data for the specified object path\n\n@param ObjectPath the path of the object to be looked up\n@param bIncludeOnlyOnDiskAssets if true, in-memory objects will be ignored. The call will be faster.\n@return the assets data;Will be invalid if object could not be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetByObjectPath", sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics
	{
		struct AssetRegistry_eventGetAssets_Parms
		{
			FARFilter Filter;
			TArray<FAssetData> OutAssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets that match the filter.\nAssets returned must satisfy every filter component if there is at least one element in the component's array.\nAssets will satisfy a component if they match any of the elements in it.\n\n@param Filter filter to apply to the assets in the AssetRegistry\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssets", sizeof(AssetRegistry_eventGetAssets_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics
	{
		struct AssetRegistry_eventGetAssetsByClass_Parms
		{
			FName ClassName;
			TArray<FAssetData> OutAssetData;
			bool bSearchSubClasses;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSearchSubClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchSubClasses;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->bSearchSubClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses = { "bSearchSubClasses", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, ClassName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bSearchSubClasses", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets with the supplied class\n\n@param ClassName the class name of the assets requested\n@param OutAssetData the list of assets in this path\n@param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByClass", sizeof(AssetRegistry_eventGetAssetsByClass_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics
	{
		struct AssetRegistry_eventGetAssetsByPackageName_Parms
		{
			FName PackageName;
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for the assets in the package with the specified package name\n\n@param PackageName the package name for the requested assets\n@param OutAssetData the list of assets in this path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPackageName", sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics
	{
		struct AssetRegistry_eventGetAssetsByPath_Parms
		{
			FName PackagePath;
			TArray<FAssetData> OutAssetData;
			bool bRecursive;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, PackagePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the supplied folder path\n\n@param PackagePath the path to query asset data in\n@param OutAssetData the list of assets in this path\n@param bRecursive if true, all supplied paths will be searched recursively" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPath", sizeof(AssetRegistry_eventGetAssetsByPath_Parms), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics
	{
		struct AssetRegistry_eventGetSubPaths_Parms
		{
			FString InBasePath;
			TArray<FString> OutPathList;
			bool bInRecurse;
		};
		static void NewProp_bInRecurse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRecurse;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBasePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit(void* Obj)
	{
		((AssetRegistry_eventGetSubPaths_Parms*)Obj)->bInRecurse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse = { "bInRecurse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventGetSubPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, OutPathList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath = { "InBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, InBasePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached below the passed-in base path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetSubPaths", sizeof(AssetRegistry_eventGetSubPaths_Parms), Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics
	{
		struct AssetRegistry_eventHasAssets_Parms
		{
			FName PackagePath;
			bool bRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventHasAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((AssetRegistry_eventHasAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventHasAssets_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Does the given path contain assets, optionally also testing sub-paths?\n\n@param PackagePath the path to query asset data in\n@param bRecursive if true, the supplied path will be tested recursively" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "HasAssets", sizeof(AssetRegistry_eventHasAssets_Parms), Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics
	{
		struct AssetRegistry_eventIsLoadingAssets_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetRegistry_eventIsLoadingAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventIsLoadingAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Returns true if the asset registry is currently loading files and does not yet know about all assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "IsLoadingAssets", sizeof(AssetRegistry_eventIsLoadingAssets_Parms), Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics
	{
		struct AssetRegistry_eventPrioritizeSearchPath_Parms
		{
			FString PathToPrioritize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToPrioritize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToPrioritize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize = { "PathToPrioritize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventPrioritizeSearchPath_Parms, PathToPrioritize), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned before other assets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "PrioritizeSearchPath", sizeof(AssetRegistry_eventPrioritizeSearchPath_Parms), Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics
	{
		struct AssetRegistry_eventRunAssetsThroughFilter_Parms
		{
			TArray<FAssetData> AssetDataList;
			FARFilter Filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, AssetDataList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "RunAssetsThroughFilter", sizeof(AssetRegistry_eventRunAssetsThroughFilter_Parms), Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics
	{
		struct AssetRegistry_eventScanFilesSynchronous_Parms
		{
			TArray<FString> InFilePaths;
			bool bForceRescan;
		};
		static void NewProp_bForceRescan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
	{
		((AssetRegistry_eventScanFilesSynchronous_Parms*)Obj)->bForceRescan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventScanFilesSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanFilesSynchronous_Parms, InFilePaths), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanFilesSynchronous", sizeof(AssetRegistry_eventScanFilesSynchronous_Parms), Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics
	{
		struct AssetRegistry_eventScanModifiedAssetFiles_Parms
		{
			TArray<FString> InFilePaths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanModifiedAssetFiles_Parms, InFilePaths), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Forces a rescan of specific filenames, call this when you need to refresh from disk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanModifiedAssetFiles", sizeof(AssetRegistry_eventScanModifiedAssetFiles_Parms), Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics
	{
		struct AssetRegistry_eventScanPathsSynchronous_Parms
		{
			TArray<FString> InPaths;
			bool bForceRescan;
		};
		static void NewProp_bForceRescan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
	{
		((AssetRegistry_eventScanPathsSynchronous_Parms*)Obj)->bForceRescan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths = { "InPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventScanPathsSynchronous_Parms, InPaths), METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner = { "InPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanPathsSynchronous", sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics
	{
		struct AssetRegistry_eventSearchAllAssets_Parms
		{
			bool bSynchronousSearch;
		};
		static void NewProp_bSynchronousSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSynchronousSearch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit(void* Obj)
	{
		((AssetRegistry_eventSearchAllAssets_Parms*)Obj)->bSynchronousSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch = { "bSynchronousSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetRegistry_eventSearchAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Look for all assets on disk (can be async or synchronous)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "SearchAllAssets", sizeof(AssetRegistry_eventSearchAllAssets_Parms), Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_SearchAllAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics
	{
		struct AssetRegistry_eventUseFilterToExcludeAssets_Parms
		{
			TArray<FAssetData> AssetDataList;
			FARFilter Filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, AssetDataList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "UseFilterToExcludeAssets", sizeof(AssetRegistry_eventUseFilterToExcludeAssets_Parms), Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetRegistry_NoRegister()
	{
		return UAssetRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UAssetRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllAssets, "GetAllAssets" }, // 3482779955
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths, "GetAllCachedPaths" }, // 1743325457
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath, "GetAssetByObjectPath" }, // 2623836025
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssets, "GetAssets" }, // 704761014
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass, "GetAssetsByClass" }, // 838829566
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName, "GetAssetsByPackageName" }, // 3225160863
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath, "GetAssetsByPath" }, // 963881468
		{ &Z_Construct_UFunction_UAssetRegistry_GetSubPaths, "GetSubPaths" }, // 271401023
		{ &Z_Construct_UFunction_UAssetRegistry_HasAssets, "HasAssets" }, // 1187340511
		{ &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets, "IsLoadingAssets" }, // 4291567942
		{ &Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath, "PrioritizeSearchPath" }, // 4258863489
		{ &Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter, "RunAssetsThroughFilter" }, // 3694648928
		{ &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous, "ScanFilesSynchronous" }, // 3961924147
		{ &Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles, "ScanModifiedAssetFiles" }, // 4012685415
		{ &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous, "ScanPathsSynchronous" }, // 1289361754
		{ &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets, "SearchAllAssets" }, // 466480339
		{ &Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets, "UseFilterToExcludeAssets" }, // 1966457947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistry_Statics::ClassParams = {
		&UAssetRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistry, 2751012712);
	template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistry>()
	{
		return UAssetRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistry(Z_Construct_UClass_UAssetRegistry, &UAssetRegistry::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
