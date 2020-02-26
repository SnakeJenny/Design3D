// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/AssetExportTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetExportTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
// End Cross Module References
	void UAssetExportTask::StaticRegisterNativesUAssetExportTask()
	{
	}
	UClass* Z_Construct_UClass_UAssetExportTask_NoRegister()
	{
		return UAssetExportTask::StaticClass();
	}
	struct Z_Construct_UClass_UAssetExportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Errors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreObjectList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreObjectList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreObjectList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteEmptyFiles_MetaData[];
#endif
		static void NewProp_bWriteEmptyFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteEmptyFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFileArchive_MetaData[];
#endif
		static void NewProp_bUseFileArchive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFileArchive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrompt_MetaData[];
#endif
		static void NewProp_bPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceIdentical_MetaData[];
#endif
		static void NewProp_bReplaceIdentical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceIdentical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Exporter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetExportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AssetExportTask.h" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of error messages encountered during exporter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, Errors), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Exporter specific options" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, Options), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of objects to ignore exporting" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList = { "IgnoreObjectList", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, IgnoreObjectList), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner = { "IgnoreObjectList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Write even if file empty" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bWriteEmptyFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles = { "bWriteEmptyFiles", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Save to a file archive" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bUseFileArchive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive = { "bUseFileArchive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Unattended export" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bAutomated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Allow dialog prompts" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt = { "bPrompt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Replace identical files" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bReplaceIdentical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical = { "bReplaceIdentical", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Export selected only" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "File to export as" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, Filename), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Optional exporter, otherwise it will be determined automatically" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter = { "Exporter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, Exporter), Z_Construct_UClass_UExporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Asset to export" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetExportTask, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetExportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetExportTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetExportTask_Statics::ClassParams = {
		&UAssetExportTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetExportTask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetExportTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetExportTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetExportTask, 4025510612);
	template<> ENGINE_API UClass* StaticClass<UAssetExportTask>()
	{
		return UAssetExportTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetExportTask(Z_Construct_UClass_UAssetExportTask, &UAssetExportTask::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetExportTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetExportTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
