// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/FileHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileHelpers() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages();
// End Cross Module References
	void UEditorLoadingAndSavingUtils::StaticRegisterNativesUEditorLoadingAndSavingUtils()
	{
		UClass* Class = UEditorLoadingAndSavingUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportScene", &UEditorLoadingAndSavingUtils::execExportScene },
			{ "GetDirtyContentPackages", &UEditorLoadingAndSavingUtils::execGetDirtyContentPackages },
			{ "GetDirtyMapPackages", &UEditorLoadingAndSavingUtils::execGetDirtyMapPackages },
			{ "ImportScene", &UEditorLoadingAndSavingUtils::execImportScene },
			{ "LoadMap", &UEditorLoadingAndSavingUtils::execLoadMap },
			{ "LoadMapWithDialog", &UEditorLoadingAndSavingUtils::execLoadMapWithDialog },
			{ "NewBlankMap", &UEditorLoadingAndSavingUtils::execNewBlankMap },
			{ "NewMapFromTemplate", &UEditorLoadingAndSavingUtils::execNewMapFromTemplate },
			{ "SaveCurrentLevel", &UEditorLoadingAndSavingUtils::execSaveCurrentLevel },
			{ "SaveDirtyPackages", &UEditorLoadingAndSavingUtils::execSaveDirtyPackages },
			{ "SaveDirtyPackagesWithDialog", &UEditorLoadingAndSavingUtils::execSaveDirtyPackagesWithDialog },
			{ "SaveMap", &UEditorLoadingAndSavingUtils::execSaveMap },
			{ "SavePackages", &UEditorLoadingAndSavingUtils::execSavePackages },
			{ "SavePackagesWithDialog", &UEditorLoadingAndSavingUtils::execSavePackagesWithDialog },
			{ "UnloadPackages", &UEditorLoadingAndSavingUtils::execUnloadPackages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics
	{
		struct EditorLoadingAndSavingUtils_eventExportScene_Parms
		{
			bool bExportSelectedActorsOnly;
		};
		static void NewProp_bExportSelectedActorsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSelectedActorsOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventExportScene_Parms*)Obj)->bExportSelectedActorsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly = { "bExportSelectedActorsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventExportScene_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Exports the current scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "ExportScene", sizeof(EditorLoadingAndSavingUtils_eventExportScene_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms
		{
			TArray<UPackage*> OutDirtyPackages;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDirtyPackages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDirtyPackages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms, OutDirtyPackages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages_Inner = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Appends array with all currently dirty content packages.\n\n@param OutDirtyPackages Array to append dirty packages to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "GetDirtyContentPackages", sizeof(EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms
		{
			TArray<UPackage*> OutDirtyPackages;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDirtyPackages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDirtyPackages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms, OutDirtyPackages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages_Inner = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Appends array with all currently dirty map packages.\n\n@param OutDirtyPackages Array to append dirty packages to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "GetDirtyMapPackages", sizeof(EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics
	{
		struct EditorLoadingAndSavingUtils_eventImportScene_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventImportScene_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Imports a file such as (FBX or obj) and spawns actors f into the current level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "ImportScene", sizeof(EditorLoadingAndSavingUtils_eventImportScene_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventLoadMap_Parms
		{
			FString Filename;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMap_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMap_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Loads the specified map.  Does not prompt the user to save the current map.\n\n@param       Filename                Level package filename, including path.\n@return                                      true if the map was loaded successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "LoadMap", sizeof(EditorLoadingAndSavingUtils_eventLoadMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Prompts the user to save the current map if necessary, the presents a load dialog and\nloads a new map if selected by the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "LoadMapWithDialog", sizeof(EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventNewBlankMap_Parms
		{
			bool bSaveExistingMap;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bSaveExistingMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveExistingMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewBlankMap_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventNewBlankMap_Parms*)Obj)->bSaveExistingMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap = { "bSaveExistingMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventNewBlankMap_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "NewBlankMap", sizeof(EditorLoadingAndSavingUtils_eventNewBlankMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics
	{
		struct EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms
		{
			FString PathToTemplateLevel;
			bool bSaveExistingMap;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bSaveExistingMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveExistingMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToTemplateLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToTemplateLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms*)Obj)->bSaveExistingMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap = { "bSaveExistingMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel = { "PathToTemplateLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms, PathToTemplateLevel), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "NewMapFromTemplate", sizeof(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms
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
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Saves the active level, prompting the use for checkout if necessary.\n\n@return      true on success, False on fail" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveCurrentLevel", sizeof(EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms
		{
			bool bSaveMapPackages;
			bool bSaveContentPackages;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveContentPackages_MetaData[];
#endif
		static void NewProp_bSaveContentPackages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveContentPackages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveMapPackages_MetaData[];
#endif
		static void NewProp_bSaveMapPackages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveMapPackages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->bSaveContentPackages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages = { "bSaveContentPackages", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->bSaveMapPackages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages = { "bSaveMapPackages", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\nAssume all dirty packages should be saved and check out from source control (if enabled).\n\n@param       bSaveMapPackages                        true if map packages should be saved\n@param       bSaveContentPackages            true if we should save content packages.\n@return                                                              true on success, false on fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveDirtyPackages", sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms
		{
			bool bSaveMapPackages;
			bool bSaveContentPackages;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveContentPackages_MetaData[];
#endif
		static void NewProp_bSaveContentPackages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveContentPackages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveMapPackages_MetaData[];
#endif
		static void NewProp_bSaveMapPackages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveMapPackages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->bSaveContentPackages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages = { "bSaveContentPackages", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->bSaveMapPackages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages = { "bSaveMapPackages", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\nPrompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\n\n@param       bSaveMapPackages                        true if map packages should be saved\n@param       bSaveContentPackages            true if we should save content packages.\n@return                                                              true on success, false on fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveDirtyPackagesWithDialog", sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveMap_Parms
		{
			UWorld* World;
			FString AssetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveMap_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSaveMap_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSaveMap_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Saves the specified map, returning true on success.\n\n@param       World                   The world to save.\n@param       AssetPath               The valid content directory path and name for the asset.  E.g \"/Game/MyMap\"\n\n@return                                      true if the map was saved successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveMap", sizeof(EditorLoadingAndSavingUtils_eventSaveMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSavePackages_Parms
		{
			TArray<UPackage*> PackagesToSave;
			bool bOnlyDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOnlyDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackagesToSave_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackages_Parms*)Obj)->bOnlyDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty = { "bOnlyDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave = { "PackagesToSave", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSavePackages_Parms, PackagesToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_Inner = { "PackagesToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Save all packages.\nAssume all dirty packages should be saved and check out from source control (if enabled).\n\n@param               PackagesToSave                          The list of packages to save.  Both map and content packages are supported\n@param               bCheckDirty                                     If true, only packages that are dirty in PackagesToSave will be saved\n@return                                                                      true on success, false on fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SavePackages", sizeof(EditorLoadingAndSavingUtils_eventSavePackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms
		{
			TArray<UPackage*> PackagesToSave;
			bool bOnlyDirty;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOnlyDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackagesToSave_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms*)Obj)->bOnlyDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty = { "bOnlyDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave = { "PackagesToSave", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms, PackagesToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_Inner = { "PackagesToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Save all packages. Optionally prompting the user to select which packages to save.\nPrompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\n@param                PackagesToSave                          The list of packages to save.  Both map and content packages are supported\n@param                bCheckDirty                                     If true, only packages that are dirty in PackagesToSave will be saved\n@return                                                                       true on success, false on fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SavePackagesWithDialog", sizeof(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventUnloadPackages_Parms
		{
			TArray<UPackage*> PackagesToUnload;
			bool bOutAnyPackagesUnloaded;
			FText OutErrorMessage;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutErrorMessage;
		static void NewProp_bOutAnyPackagesUnloaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutAnyPackagesUnloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToUnload_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToUnload;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackagesToUnload_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms, OutErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventUnloadPackages_Parms*)Obj)->bOutAnyPackagesUnloaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded = { "bOutAnyPackagesUnloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload = { "PackagesToUnload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms, PackagesToUnload), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_Inner = { "PackagesToUnload", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_OutErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Unloads a list of packages\n\n@param PackagesToUnload Array of packages to unload." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "UnloadPackages", sizeof(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister()
	{
		return UEditorLoadingAndSavingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene, "ExportScene" }, // 1020720277
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages, "GetDirtyContentPackages" }, // 2681815864
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages, "GetDirtyMapPackages" }, // 1696550334
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene, "ImportScene" }, // 843790808
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap, "LoadMap" }, // 2717191316
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog, "LoadMapWithDialog" }, // 903979671
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap, "NewBlankMap" }, // 3568292208
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate, "NewMapFromTemplate" }, // 4017800895
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel, "SaveCurrentLevel" }, // 1576722792
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages, "SaveDirtyPackages" }, // 1489105663
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog, "SaveDirtyPackagesWithDialog" }, // 1413483166
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap, "SaveMap" }, // 4184403723
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages, "SavePackages" }, // 1927098833
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog, "SavePackagesWithDialog" }, // 1373867077
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages, "UnloadPackages" }, // 3639564724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileHelpers.h" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "This class is a wrapper for editor loading and saving functionality\nIt is meant to contain only functions that can be executed in script (but are also allowed in C++).\nIt is separated from FEditorFileUtils to ensure new easier to use methods can be created without breaking FEditorFileUtils backwards compatibility\nHowever this should be used in place of FEditorFileUtils wherever possible as the goal is to deprecate FEditorFileUtils eventually" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLoadingAndSavingUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::ClassParams = {
		&UEditorLoadingAndSavingUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorLoadingAndSavingUtils, 2409255053);
	template<> UNREALED_API UClass* StaticClass<UEditorLoadingAndSavingUtils>()
	{
		return UEditorLoadingAndSavingUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLoadingAndSavingUtils(Z_Construct_UClass_UEditorLoadingAndSavingUtils, &UEditorLoadingAndSavingUtils::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorLoadingAndSavingUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLoadingAndSavingUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
