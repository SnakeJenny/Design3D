// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/Public/LocalizationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationSettings() {}
// Cross Module References
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Localization();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
// End Cross Module References
	void ULocalizationSettings::StaticRegisterNativesULocalizationSettings()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister()
	{
		return ULocalizationSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTargetsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameTargetsSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameTargetsSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameTargetSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTargetsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineTargetsSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineTargetsSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineTargetSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationSettings.h" },
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class for loading/saving configuration settings and the details view objects needed for localization dashboard functionality." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings = { "GameTargetsSettings", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationSettings, GameTargetsSettings), METADATA_PARAMS(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_Inner = { "GameTargetsSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet = { "GameTargetSet", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationSettings, GameTargetSet), Z_Construct_UClass_ULocalizationTargetSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings = { "EngineTargetsSettings", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationSettings, EngineTargetsSettings), METADATA_PARAMS(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_Inner = { "EngineTargetsSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet = { "EngineTargetSet", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationSettings, EngineTargetSet), Z_Construct_UClass_ULocalizationTargetSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationSettings_Statics::ClassParams = {
		&ULocalizationSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationSettings, 2804169989);
	template<> LOCALIZATION_API UClass* StaticClass<ULocalizationSettings>()
	{
		return ULocalizationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationSettings(Z_Construct_UClass_ULocalizationSettings, &ULocalizationSettings::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
