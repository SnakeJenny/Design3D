// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Private/TutorialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialSettings() {}
// Cross Module References
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialSettings_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
// End Cross Module References
	void UTutorialSettings::StaticRegisterNativesUTutorialSettings()
	{
	}
	UClass* Z_Construct_UClass_UTutorialSettings_NoRegister()
	{
		return UTutorialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartupTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TutorialSettings.h" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Per-project tutorial settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Tutorial to start on project startup" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial = { "StartupTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialSettings, StartupTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Categories for tutorials" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialSettings, Categories), METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialSettings_Statics::ClassParams = {
		&UTutorialSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialSettings, 305704457);
	template<> INTROTUTORIALS_API UClass* StaticClass<UTutorialSettings>()
	{
		return UTutorialSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialSettings(Z_Construct_UClass_UTutorialSettings, &UTutorialSettings::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UTutorialSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
