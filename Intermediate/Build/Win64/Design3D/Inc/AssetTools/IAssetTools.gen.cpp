// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTools/Public/IAssetTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetTools() {}
// Cross Module References
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyParams();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRenameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_CreateAsset();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAsset();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_ExportAssets();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetTasks();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_OpenEditorForAssets();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_RenameAssets();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsHelpers_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ASSETTOOLS_API UFunction* Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools();
// End Cross Module References
class UScriptStruct* FAdvancedCopyParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancedCopyParams, Z_Construct_UPackage__Script_AssetTools(), TEXT("AdvancedCopyParams"), sizeof(FAdvancedCopyParams), Get_Z_Construct_UScriptStruct_FAdvancedCopyParams_Hash());
	}
	return Singleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAdvancedCopyParams>()
{
	return FAdvancedCopyParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdvancedCopyParams(FAdvancedCopyParams::StaticStruct, TEXT("/Script/AssetTools"), TEXT("AdvancedCopyParams"), false, nullptr, nullptr);
static struct FScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyParams
{
	FScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdvancedCopyParams")),new UScriptStruct::TCppStructOps<FAdvancedCopyParams>);
	}
} ScriptStruct_AssetTools_StaticRegisterNativesFAdvancedCopyParams;
	struct Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancedCopyParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AdvancedCopyParams",
		sizeof(FAdvancedCopyParams),
		alignof(FAdvancedCopyParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdvancedCopyParams"), sizeof(FAdvancedCopyParams), Get_Z_Construct_UScriptStruct_FAdvancedCopyParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdvancedCopyParams_Hash() { return 3461250239U; }
class UScriptStruct* FAssetRenameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FAssetRenameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetRenameData, Z_Construct_UPackage__Script_AssetTools(), TEXT("AssetRenameData"), sizeof(FAssetRenameData), Get_Z_Construct_UScriptStruct_FAssetRenameData_Hash());
	}
	return Singleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAssetRenameData>()
{
	return FAssetRenameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetRenameData(FAssetRenameData::StaticStruct, TEXT("/Script/AssetTools"), TEXT("AssetRenameData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetTools_StaticRegisterNativesFAssetRenameData
{
	FScriptStruct_AssetTools_StaticRegisterNativesFAssetRenameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetRenameData")),new UScriptStruct::TCppStructOps<FAssetRenameData>);
	}
} ScriptStruct_AssetTools_StaticRegisterNativesFAssetRenameData;
	struct Z_Construct_UScriptStruct_FAssetRenameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFixSoftReferences_MetaData[];
#endif
		static void NewProp_bOnlyFixSoftReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFixSoftReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetRenameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "If true, only fix soft references. This will work even if Asset is null because it has already been renamed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_SetBit(void* Obj)
	{
		((FAssetRenameData*)Obj)->bOnlyFixSoftReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences = { "bOnlyFixSoftReferences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetRenameData), &Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New full path, may be a SubObject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath = { "NewObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRenameData, NewObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Full path to old name, in form /Game/SubDirectory/OldName.OldName:SubPath" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath = { "OldObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRenameData, OldObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New package and asset name, new object path will be PackagePath/NewName.NewName" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRenameData, NewName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New path to package without package name, ie /Game/SubDirectory" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath = { "NewPackagePath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRenameData, NewPackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Object being renamed" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRenameData, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AssetRenameData",
		sizeof(FAssetRenameData),
		alignof(FAssetRenameData),
		Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetRenameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetRenameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetRenameData"), sizeof(FAssetRenameData), Get_Z_Construct_UScriptStruct_FAssetRenameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetRenameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetRenameData_Hash() { return 2778932091U; }
	void UAssetTools::StaticRegisterNativesUAssetTools()
	{
		UClass* Class = UAssetTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAsset", &IAssetTools::execCreateAsset },
			{ "CreateAssetWithDialog", &IAssetTools::execCreateAssetWithDialog },
			{ "CreateUniqueAssetName", &IAssetTools::execCreateUniqueAssetName },
			{ "DuplicateAsset", &IAssetTools::execDuplicateAsset },
			{ "DuplicateAssetWithDialog", &IAssetTools::execDuplicateAssetWithDialog },
			{ "ExportAssets", &IAssetTools::execExportAssets },
			{ "ExportAssetsWithDialog", &IAssetTools::execExportAssetsWithDialog },
			{ "FindSoftReferencesToObject", &IAssetTools::execFindSoftReferencesToObject },
			{ "ImportAssetsAutomated", &IAssetTools::execImportAssetsAutomated },
			{ "ImportAssetsWithDialog", &IAssetTools::execImportAssetsWithDialog },
			{ "ImportAssetTasks", &IAssetTools::execImportAssetTasks },
			{ "OpenEditorForAssets", &IAssetTools::execOpenEditorForAssets },
			{ "RenameAssets", &IAssetTools::execRenameAssets },
			{ "RenameAssetsWithDialog", &IAssetTools::execRenameAssetsWithDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetTools_CreateAsset_Statics
	{
		struct AssetTools_eventCreateAsset_Parms
		{
			FString AssetName;
			FString PackagePath;
			UClass* AssetClass;
			UFactory* Factory;
			FName CallingContext;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CallingContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_CallingContext = { "CallingContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, CallingContext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, AssetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_CallingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "CPP_Default_CallingContext", "None" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates an asset with the specified name, path, and factory\n\n@param AssetName the name of the new asset\n@param PackagePath the package that will contain the new asset\n@param AssetClass the class of the new asset\n@param Factory the factory that will build the new asset\n@param CallingContext optional name of the module or method calling CreateAsset() - this is passed to the factory\n@return the new asset or NULL if it fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateAsset", sizeof(AssetTools_eventCreateAsset_Parms), Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics
	{
		struct AssetTools_eventCreateAssetWithDialog_Parms
		{
			FString AssetName;
			FString PackagePath;
			UClass* AssetClass;
			UFactory* Factory;
			FName CallingContext;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CallingContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_CallingContext = { "CallingContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, CallingContext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, AssetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_CallingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "CPP_Default_CallingContext", "None" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens an asset picker dialog and creates an asset with the specified name and path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateAssetWithDialog", sizeof(AssetTools_eventCreateAssetWithDialog_Parms), Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics
	{
		struct AssetTools_eventCreateUniqueAssetName_Parms
		{
			FString InBasePackageName;
			FString InSuffix;
			FString OutPackageName;
			FString OutAssetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAssetName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSuffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBasePackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutAssetName = { "OutAssetName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, OutAssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutPackageName = { "OutPackageName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, OutPackageName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix = { "InSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, InSuffix), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName = { "InBasePackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, InBasePackageName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates a unique package and asset name taking the form InBasePackageName+InSuffix" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateUniqueAssetName", sizeof(AssetTools_eventCreateUniqueAssetName_Parms), Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics
	{
		struct AssetTools_eventDuplicateAsset_Parms
		{
			FString AssetName;
			FString PackagePath;
			UObject* OriginalObject;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_OriginalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates an asset with the specified name and path. Uses OriginalObject as the duplication source." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DuplicateAsset", sizeof(AssetTools_eventDuplicateAsset_Parms), Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics
	{
		struct AssetTools_eventDuplicateAssetWithDialog_Parms
		{
			FString AssetName;
			FString PackagePath;
			UObject* OriginalObject;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_OriginalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens an asset picker dialog and creates an asset with the specified name and path. Uses OriginalObject as the duplication source." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DuplicateAssetWithDialog", sizeof(AssetTools_eventDuplicateAssetWithDialog_Parms), Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ExportAssets_Statics
	{
		struct AssetTools_eventExportAssets_Parms
		{
			TArray<FString> AssetsToExport;
			FString ExportPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToExport_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToExport;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetsToExport_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath = { "ExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventExportAssets_Parms, ExportPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport = { "AssetsToExport", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventExportAssets_Parms, AssetsToExport), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_Inner = { "AssetsToExport", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Exports the specified objects to file.\n\n@param       AssetsToExport                                  List of full asset names (e.g /Game/Path/Asset) to export\n@param       ExportPath                                              The directory path to export to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ExportAssets", sizeof(AssetTools_eventExportAssets_Parms), Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ExportAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics
	{
		struct AssetTools_eventExportAssetsWithDialog_Parms
		{
			TArray<FString> AssetsToExport;
			bool bPromptForIndividualFilenames;
		};
		static void NewProp_bPromptForIndividualFilenames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPromptForIndividualFilenames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToExport_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToExport;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetsToExport_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames_SetBit(void* Obj)
	{
		((AssetTools_eventExportAssetsWithDialog_Parms*)Obj)->bPromptForIndividualFilenames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames = { "bPromptForIndividualFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTools_eventExportAssetsWithDialog_Parms), &Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport = { "AssetsToExport", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventExportAssetsWithDialog_Parms, AssetsToExport), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_Inner = { "AssetsToExport", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Exports the specified objects to file. First prompting the user to pick an export directory and optionally prompting the user to pick a unique directory per file\n\n@param       AssetsToExport                                  List of assets to export\n@param       ExportPath                                              The directory path to export to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ExportAssetsWithDialog", sizeof(AssetTools_eventExportAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics
	{
		struct AssetTools_eventFindSoftReferencesToObject_Parms
		{
			FSoftObjectPath TargetObject;
			TArray<UObject*> ReferencingObjects;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencingObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencingObjects_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects = { "ReferencingObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventFindSoftReferencesToObject_Parms, ReferencingObjects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects_Inner = { "ReferencingObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventFindSoftReferencesToObject_Parms, TargetObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_TargetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Returns list of objects that soft reference the given soft object path. This will load assets into memory to verify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "FindSoftReferencesToObject", sizeof(AssetTools_eventFindSoftReferencesToObject_Parms), Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics
	{
		struct AssetTools_eventImportAssetsAutomated_Parms
		{
			const UAutomatedAssetImportData* ImportData;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventImportAssetsAutomated_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData = { "ImportData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventImportAssetsAutomated_Parms, ImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Imports assets using data specified completely up front.  Does not ever ask any questions of the user or show any modal error messages\n\n@param AutomatedImportData   Data that specifies how to import each file\n@return list of successfully imported assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetsAutomated", sizeof(AssetTools_eventImportAssetsAutomated_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics
	{
		struct AssetTools_eventImportAssetsWithDialog_Parms
		{
			FString DestinationPath;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventImportAssetsWithDialog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventImportAssetsWithDialog_Parms, DestinationPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens a file open dialog to choose files to import to the destination path.\n\n@param DestinationPath       Path to import files to\n@return list of successfully imported assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetsWithDialog", sizeof(AssetTools_eventImportAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics
	{
		struct AssetTools_eventImportAssetTasks_Parms
		{
			TArray<UAssetImportTask*> ImportTasks;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportTasks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks = { "ImportTasks", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventImportAssetTasks_Parms, ImportTasks), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_Inner = { "ImportTasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Imports assets using tasks specified.\n\n@param ImportTasks    Tasks that specify how to import each file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetTasks", sizeof(AssetTools_eventImportAssetTasks_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics
	{
		struct AssetTools_eventOpenEditorForAssets_Parms
		{
			TArray<UObject*> Assets;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventOpenEditorForAssets_Parms, Assets), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens editor for assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "OpenEditorForAssets", sizeof(AssetTools_eventOpenEditorForAssets_Parms), Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_OpenEditorForAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_RenameAssets_Statics
	{
		struct AssetTools_eventRenameAssets_Parms
		{
			TArray<FAssetRenameData> AssetsAndNames;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsAndNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsAndNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsAndNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTools_eventRenameAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTools_eventRenameAssets_Parms), &Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventRenameAssets_Parms, AssetsAndNames), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_Inner = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetRenameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Renames assets using the specified names." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "RenameAssets", sizeof(AssetTools_eventRenameAssets_Parms), Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_RenameAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics
	{
		struct AssetTools_eventRenameAssetsWithDialog_Parms
		{
			TArray<FAssetRenameData> AssetsAndNames;
			bool bAutoCheckout;
		};
		static void NewProp_bAutoCheckout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCheckout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsAndNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsAndNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsAndNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout_SetBit(void* Obj)
	{
		((AssetTools_eventRenameAssetsWithDialog_Parms*)Obj)->bAutoCheckout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout = { "bAutoCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetTools_eventRenameAssetsWithDialog_Parms), &Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetTools_eventRenameAssetsWithDialog_Parms, AssetsAndNames), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_Inner = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetRenameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "CPP_Default_bAutoCheckout", "false" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Renames assets using the specified names." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "RenameAssetsWithDialog", sizeof(AssetTools_eventRenameAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetTools_NoRegister()
	{
		return UAssetTools::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetTools_CreateAsset, "CreateAsset" }, // 3228959315
		{ &Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog, "CreateAssetWithDialog" }, // 907446255
		{ &Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName, "CreateUniqueAssetName" }, // 2693307629
		{ &Z_Construct_UFunction_UAssetTools_DuplicateAsset, "DuplicateAsset" }, // 3247932126
		{ &Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog, "DuplicateAssetWithDialog" }, // 771573800
		{ &Z_Construct_UFunction_UAssetTools_ExportAssets, "ExportAssets" }, // 2977380384
		{ &Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog, "ExportAssetsWithDialog" }, // 304548144
		{ &Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject, "FindSoftReferencesToObject" }, // 2421950821
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated, "ImportAssetsAutomated" }, // 673891772
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog, "ImportAssetsWithDialog" }, // 3930489159
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetTasks, "ImportAssetTasks" }, // 341156520
		{ &Z_Construct_UFunction_UAssetTools_OpenEditorForAssets, "OpenEditorForAssets" }, // 1060573310
		{ &Z_Construct_UFunction_UAssetTools_RenameAssets, "RenameAssets" }, // 3919893603
		{ &Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog, "RenameAssetsWithDialog" }, // 2721003572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetTools_Statics::ClassParams = {
		&UAssetTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetTools, 2474949277);
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetTools>()
	{
		return UAssetTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetTools(Z_Construct_UClass_UAssetTools, &UAssetTools::StaticClass, TEXT("/Script/AssetTools"), TEXT("UAssetTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTools);
	void UAssetToolsHelpers::StaticRegisterNativesUAssetToolsHelpers()
	{
		UClass* Class = UAssetToolsHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetTools", &UAssetToolsHelpers::execGetAssetTools },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics
	{
		struct AssetToolsHelpers_eventGetAssetTools_Parms
		{
			TScriptInterface<IAssetTools> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetToolsHelpers_eventGetAssetTools_Parms, ReturnValue), Z_Construct_UClass_UAssetTools_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetToolsHelpers, nullptr, "GetAssetTools", sizeof(AssetToolsHelpers_eventGetAssetTools_Parms), Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetToolsHelpers_NoRegister()
	{
		return UAssetToolsHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UAssetToolsHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetToolsHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetToolsHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools, "GetAssetTools" }, // 2550933175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IAssetTools.h" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetToolsHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetToolsHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetToolsHelpers_Statics::ClassParams = {
		&UAssetToolsHelpers::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetToolsHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetToolsHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetToolsHelpers, 3379780818);
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetToolsHelpers>()
	{
		return UAssetToolsHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetToolsHelpers(Z_Construct_UClass_UAssetToolsHelpers, &UAssetToolsHelpers::StaticClass, TEXT("/Script/AssetTools"), TEXT("UAssetToolsHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetToolsHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
