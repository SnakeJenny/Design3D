// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidPlatformEditor/Private/AndroidSDKSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidSDKSettings() {}
// Cross Module References
	ANDROIDPLATFORMEDITOR_API UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister();
	ANDROIDPLATFORMEDITOR_API UClass* Z_Construct_UClass_UAndroidSDKSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidPlatformEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UAndroidSDKSettings::StaticRegisterNativesUAndroidSDKSettings()
	{
	}
	UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister()
	{
		return UAndroidSDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidSDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDKAPILevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NDKAPILevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SDKAPILevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SDKAPILevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JavaPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JavaPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ANTPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ANTPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDKPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NDKPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SDKPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SDKPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidSDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidPlatformEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidSDKSettings.h" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Implements the settings for the Android SDK setup." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "NDK API Level (specific version or 'latest' - see tooltip)" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel = { "NDKAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, NDKAPILevel), METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "SDK API Level (specific version, 'latest', or 'matchndk' - see tooltip)" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel = { "SDKAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, SDKAPILevel), METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "Location of JAVA (the directory usually contains 'jdk')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of Java (falls back to JAVA_HOME environment variable if this is left blank)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath = { "JavaPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, JavaPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_ANTPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "Location of ANT (the directory usually contains 'apache-ant-')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of the ANT tool (falls back to ANT_HOME environment variable if this is left blank)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_ANTPath = { "ANTPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, ANTPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_ANTPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_ANTPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "Location of Android NDK (the directory usually contains 'android-ndk-')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of the Android NDK (falls back to NDKROOT environment variable if this is left blank)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath = { "NDKPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, NDKPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "Location of Android SDK (the directory usually contains 'android-sdk-')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of the Android SDK (falls back to ANDROID_HOME environment variable if this is left blank)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath = { "SDKPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidSDKSettings, SDKPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_ANTPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidSDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidSDKSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidSDKSettings_Statics::ClassParams = {
		&UAndroidSDKSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers),
		0,
		0x081000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidSDKSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidSDKSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidSDKSettings, 1977734598);
	template<> ANDROIDPLATFORMEDITOR_API UClass* StaticClass<UAndroidSDKSettings>()
	{
		return UAndroidSDKSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidSDKSettings(Z_Construct_UClass_UAndroidSDKSettings, &UAndroidSDKSettings::StaticClass, TEXT("/Script/AndroidPlatformEditor"), TEXT("UAndroidSDKSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidSDKSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
