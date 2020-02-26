// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/GeneralEngineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralEngineSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGeneralEngineSettings::StaticRegisterNativesUGeneralEngineSettings()
	{
	}
	UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGeneralEngineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneralEngineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneralEngineSettings.h" },
		{ "ModuleRelativePath", "Classes/GeneralEngineSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneralEngineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralEngineSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneralEngineSettings_Statics::ClassParams = {
		&UGeneralEngineSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneralEngineSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneralEngineSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneralEngineSettings, 3768792366);
	template<> ENGINESETTINGS_API UClass* StaticClass<UGeneralEngineSettings>()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneralEngineSettings(Z_Construct_UClass_UGeneralEngineSettings, &UGeneralEngineSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGeneralEngineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralEngineSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
