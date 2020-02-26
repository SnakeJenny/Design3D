// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TranslationEditor/Private/InternationalizationExportSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternationalizationExportSettings() {}
// Cross Module References
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UInternationalizationExportSettings_NoRegister();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UInternationalizationExportSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References
	void UInternationalizationExportSettings::StaticRegisterNativesUInternationalizationExportSettings()
	{
	}
	UClass* Z_Construct_UClass_UInternationalizationExportSettings_NoRegister()
	{
		return UInternationalizationExportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInternationalizationExportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCultureDirectory_MetaData[];
#endif
		static void NewProp_bUseCultureDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCultureDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportLoc_MetaData[];
#endif
		static void NewProp_bImportLoc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportLoc_MetaData[];
#endif
		static void NewProp_bExportLoc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArchiveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManifestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManifestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortableObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PortableObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CulturesToGenerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CulturesToGenerate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CulturesToGenerate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternationalizationExportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InternationalizationExportSettings.h" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to use culture path" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bUseCultureDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory = { "bUseCultureDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to import localization data" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bImportLoc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc = { "bImportLoc", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to export localization data" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bExportLoc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc = { "bExportLoc", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Name of the archive file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName = { "ArchiveName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, ArchiveName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Name of the manifest file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName = { "ManifestName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, ManifestName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Filename for the Portable Object format file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName = { "PortableObjectName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, PortableObjectName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Destination for the localization data" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Source for the localization data" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, SourcePath), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "The commandlet to run" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass = { "CommandletClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, CommandletClass), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData[] = {
		{ "Category", "CommonSettings" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Which cultures should be exported" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInternationalizationExportSettings, CulturesToGenerate), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_Inner = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternationalizationExportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternationalizationExportSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::ClassParams = {
		&UInternationalizationExportSettings::StaticClass,
		"InternationalizationExport",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInternationalizationExportSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInternationalizationExportSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInternationalizationExportSettings, 4256991102);
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UInternationalizationExportSettings>()
	{
		return UInternationalizationExportSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInternationalizationExportSettings(Z_Construct_UClass_UInternationalizationExportSettings, &UInternationalizationExportSettings::StaticClass, TEXT("/Script/TranslationEditor"), TEXT("UInternationalizationExportSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternationalizationExportSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
