// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDeveloperSettings::StaticRegisterNativesUDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister()
	{
		return UDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DeveloperSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/DeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of any auto discovered settings object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams = {
		&UDeveloperSettings::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeveloperSettings, 2560759415);
	template<> ENGINE_API UClass* StaticClass<UDeveloperSettings>()
	{
		return UDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeveloperSettings(Z_Construct_UClass_UDeveloperSettings, &UDeveloperSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
