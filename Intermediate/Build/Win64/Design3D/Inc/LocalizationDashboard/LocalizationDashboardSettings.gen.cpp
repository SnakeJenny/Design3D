// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizationDashboard/Private/LocalizationDashboardSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationDashboardSettings() {}
// Cross Module References
	LOCALIZATIONDASHBOARD_API UClass* Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister();
	LOCALIZATIONDASHBOARD_API UClass* Z_Construct_UClass_ULocalizationDashboardSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LocalizationDashboard();
// End Cross Module References
	void ULocalizationDashboardSettings::StaticRegisterNativesULocalizationDashboardSettings()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister()
	{
		return ULocalizationDashboardSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizationDashboardSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizationDashboardSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocalizationDashboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationDashboardSettings.h" },
		{ "ModuleRelativePath", "Private/LocalizationDashboardSettings.h" },
		{ "ToolTip", "Currently just a dummy class used for detail customizations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizationDashboardSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationDashboardSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationDashboardSettings_Statics::ClassParams = {
		&ULocalizationDashboardSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizationDashboardSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizationDashboardSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationDashboardSettings, 1152150807);
	template<> LOCALIZATIONDASHBOARD_API UClass* StaticClass<ULocalizationDashboardSettings>()
	{
		return ULocalizationDashboardSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationDashboardSettings(Z_Construct_UClass_ULocalizationDashboardSettings, &ULocalizationDashboardSettings::StaticClass, TEXT("/Script/LocalizationDashboard"), TEXT("ULocalizationDashboardSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationDashboardSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
