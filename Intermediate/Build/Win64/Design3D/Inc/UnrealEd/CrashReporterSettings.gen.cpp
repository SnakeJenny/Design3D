// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/CrashReporterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashReporterSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCrashReporterSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCrashReporterSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCrashReporterSettings::StaticRegisterNativesUCrashReporterSettings()
	{
	}
	UClass* Z_Construct_UClass_UCrashReporterSettings_NoRegister()
	{
		return UCrashReporterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCrashReporterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteStorage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteStorage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownstreamStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DownstreamStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UploadSymbolsPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UploadSymbolsPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrashReporterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrashReporterSettings.h" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Implements per-project cooker settings exposed to the editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Remote PDB storage (directory path or http/https URL)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage = { "RemoteStorage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrashReporterSettings, RemoteStorage), METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_Inner = { "RemoteStorage", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Local downstream PDB storage path (used for caching remote .PDB files)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage = { "DownstreamStorage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrashReporterSettings, DownstreamStorage), METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Directory for uploading locally built binaries and .PDB files" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath = { "UploadSymbolsPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrashReporterSettings, UploadSymbolsPath), METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrashReporterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrashReporterSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrashReporterSettings_Statics::ClassParams = {
		&UCrashReporterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrashReporterSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrashReporterSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrashReporterSettings, 69446440);
	template<> UNREALED_API UClass* StaticClass<UCrashReporterSettings>()
	{
		return UCrashReporterSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrashReporterSettings(Z_Construct_UClass_UCrashReporterSettings, &UCrashReporterSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCrashReporterSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrashReporterSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
