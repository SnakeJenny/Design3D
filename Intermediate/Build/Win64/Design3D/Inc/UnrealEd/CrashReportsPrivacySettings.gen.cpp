// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Analytics/CrashReportsPrivacySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashReportsPrivacySettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCrashReportsPrivacySettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCrashReportsPrivacySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
// End Cross Module References
	void UCrashReportsPrivacySettings::StaticRegisterNativesUCrashReportsPrivacySettings()
	{
	}
	UClass* Z_Construct_UClass_UCrashReportsPrivacySettings_NoRegister()
	{
		return UCrashReportsPrivacySettings::StaticClass();
	}
	struct Z_Construct_UClass_UCrashReportsPrivacySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendUnattendedBugReports_MetaData[];
#endif
		static void NewProp_bSendUnattendedBugReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendUnattendedBugReports;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Analytics/CrashReportsPrivacySettings.h" },
		{ "ModuleRelativePath", "Classes/Analytics/CrashReportsPrivacySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Analytics/CrashReportsPrivacySettings.h" },
		{ "ToolTip", "Determines whether the editor automatically sends some bug reports Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties." },
	};
#endif
	void Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports_SetBit(void* Obj)
	{
		((UCrashReportsPrivacySettings*)Obj)->bSendUnattendedBugReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports = { "bSendUnattendedBugReports", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrashReportsPrivacySettings), &Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::NewProp_bSendUnattendedBugReports,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UCrashReportsPrivacySettings, IImportantToggleSettingInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrashReportsPrivacySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::ClassParams = {
		&UCrashReportsPrivacySettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrashReportsPrivacySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrashReportsPrivacySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrashReportsPrivacySettings, 1226207248);
	template<> UNREALED_API UClass* StaticClass<UCrashReportsPrivacySettings>()
	{
		return UCrashReportsPrivacySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrashReportsPrivacySettings(Z_Construct_UClass_UCrashReportsPrivacySettings, &UCrashReportsPrivacySettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCrashReportsPrivacySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrashReportsPrivacySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
