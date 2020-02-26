// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuminPlatformEditor/Private/MagicLeapSDKSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSDKSettings() {}
// Cross Module References
	LUMINPLATFORMEDITOR_API UClass* Z_Construct_UClass_UMagicLeapSDKSettings_NoRegister();
	LUMINPLATFORMEDITOR_API UClass* Z_Construct_UClass_UMagicLeapSDKSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LuminPlatformEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UMagicLeapSDKSettings::StaticRegisterNativesUMagicLeapSDKSettings()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapSDKSettings_NoRegister()
	{
		return UMagicLeapSDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapSDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MLSDKPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MLSDKPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapSDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LuminPlatformEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSDKSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicLeapSDKSettings.h" },
		{ "ModuleRelativePath", "Private/MagicLeapSDKSettings.h" },
		{ "ToolTip", "Implements the settings for the Magic Leap SDK setup." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSDKSettings_Statics::NewProp_MLSDKPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "DisplayName", "Location of Magic Leap SDK" },
		{ "ModuleRelativePath", "Private/MagicLeapSDKSettings.h" },
		{ "ToolTip", "Location on disk of the Magic Leap SDK (falls back to MLSDK environment variable if this is left blank)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapSDKSettings_Statics::NewProp_MLSDKPath = { "MLSDKPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapSDKSettings, MLSDKPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSDKSettings_Statics::NewProp_MLSDKPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSDKSettings_Statics::NewProp_MLSDKPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapSDKSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapSDKSettings_Statics::NewProp_MLSDKPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapSDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapSDKSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapSDKSettings_Statics::ClassParams = {
		&UMagicLeapSDKSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicLeapSDKSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSDKSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSDKSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapSDKSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapSDKSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapSDKSettings, 885580527);
	template<> LUMINPLATFORMEDITOR_API UClass* StaticClass<UMagicLeapSDKSettings>()
	{
		return UMagicLeapSDKSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapSDKSettings(Z_Construct_UClass_UMagicLeapSDKSettings, &UMagicLeapSDKSettings::StaticClass, TEXT("/Script/LuminPlatformEditor"), TEXT("UMagicLeapSDKSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapSDKSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
