// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TranslationEditor/Private/TranslationPickerEditWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationPickerEditWindow() {}
// Cross Module References
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References
	void UTranslationPickerSettings::StaticRegisterNativesUTranslationPickerSettings()
	{
	}
	UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister()
	{
		return UTranslationPickerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationPickerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData[];
#endif
		static void NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubmitTranslationPickerChangesToLocalizationService;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationPickerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TranslationPickerEditWindow.h" },
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData[] = {
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
		{ "ToolTip", "Bool submit translation picker changes to Localization Service" },
	};
#endif
	void Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj)
	{
		((UTranslationPickerSettings*)Obj)->bSubmitTranslationPickerChangesToLocalizationService = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService = { "bSubmitTranslationPickerChangesToLocalizationService", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTranslationPickerSettings), &Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationPickerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationPickerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams = {
		&UTranslationPickerSettings::StaticClass,
		"TranslationPickerSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationPickerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranslationPickerSettings, 2089301741);
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UTranslationPickerSettings>()
	{
		return UTranslationPickerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranslationPickerSettings(Z_Construct_UClass_UTranslationPickerSettings, &UTranslationPickerSettings::StaticClass, TEXT("/Script/TranslationEditor"), TEXT("UTranslationPickerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationPickerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
