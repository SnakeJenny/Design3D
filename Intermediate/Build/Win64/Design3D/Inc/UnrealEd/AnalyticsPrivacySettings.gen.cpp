// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Analytics/AnalyticsPrivacySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsPrivacySettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnalyticsPrivacySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
// End Cross Module References
	void UAnalyticsPrivacySettings::StaticRegisterNativesUAnalyticsPrivacySettings()
	{
	}
	UClass* Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister()
	{
		return UAnalyticsPrivacySettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsPrivacySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendUsageData_MetaData[];
#endif
		static void NewProp_bSendUsageData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendUsageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Analytics/AnalyticsPrivacySettings.h" },
		{ "ModuleRelativePath", "Classes/Analytics/AnalyticsPrivacySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Analytics/AnalyticsPrivacySettings.h" },
		{ "ToolTip", "Determines whether the editor sends usage information to Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties." },
	};
#endif
	void Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_SetBit(void* Obj)
	{
		((UAnalyticsPrivacySettings*)Obj)->bSendUsageData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData = { "bSendUsageData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnalyticsPrivacySettings), &Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UAnalyticsPrivacySettings, IImportantToggleSettingInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsPrivacySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::ClassParams = {
		&UAnalyticsPrivacySettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsPrivacySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnalyticsPrivacySettings, 2870732315);
	template<> UNREALED_API UClass* StaticClass<UAnalyticsPrivacySettings>()
	{
		return UAnalyticsPrivacySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnalyticsPrivacySettings(Z_Construct_UClass_UAnalyticsPrivacySettings, &UAnalyticsPrivacySettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAnalyticsPrivacySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsPrivacySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
