// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/AssetImportTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportTask() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
// End Cross Module References
	void UAssetImportTask::StaticRegisterNativesUAssetImportTask()
	{
	}
	UClass* Z_Construct_UClass_UAssetImportTask_NoRegister()
	{
		return UAssetImportTask::StaticClass();
	}
	struct Z_Construct_UClass_UAssetImportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedObjectPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportedObjectPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportedObjectPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetImportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AssetImportTask.h" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Imported object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, Result), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Paths to objects created or updated after import" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths = { "ImportedObjectPaths", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, ImportedObjectPaths), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_Inner = { "ImportedObjectPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Import options specific to the type of asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, Options), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Optional factory to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Save after importing" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Avoid dialogs" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bAutomated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Overwrite existing assets" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bReplaceExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Optional custom name to import as" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName = { "DestinationName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, DestinationName), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Content path in the projects content directory where asset will be imported" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Filename to import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportTask, Filename), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetImportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetImportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetImportTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetImportTask_Statics::ClassParams = {
		&UAssetImportTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetImportTask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetImportTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetImportTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetImportTask, 486224611);
	template<> UNREALED_API UClass* StaticClass<UAssetImportTask>()
	{
		return UAssetImportTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetImportTask(Z_Construct_UClass_UAssetImportTask, &UAssetImportTask::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAssetImportTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
