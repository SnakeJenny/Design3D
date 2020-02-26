// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/EditorPerformanceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPerformanceSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorPerformanceSettings::StaticRegisterNativesUEditorPerformanceSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorPerformanceSettings_NoRegister()
	{
		return UEditorPerformanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorPerformanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSharedDDCPerformanceNotifications_MetaData[];
#endif
		static void NewProp_bEnableSharedDDCPerformanceNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSharedDDCPerformanceNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDPIBasedEditorViewportScaling_MetaData[];
#endif
		static void NewProp_bOverrideDPIBasedEditorViewportScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDPIBasedEditorViewportScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMonitorEditorPerformance_MetaData[];
#endif
		static void NewProp_bMonitorEditorPerformance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMonitorEditorPerformance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bThrottleCPUWhenNotForeground_MetaData[];
#endif
		static void NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bThrottleCPUWhenNotForeground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFrameRateAndMemory_MetaData[];
#endif
		static void NewProp_bShowFrameRateAndMemory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFrameRateAndMemory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorPerformanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Performance" },
		{ "IncludePath", "Editor/EditorPerformanceSettings.h" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Settings to tweak the performance of the editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "DisplayName", "Enable Shared Data Cache Performance Notifications" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When enabled, Shared Data Cache performance notifications may be displayed when not connected to a shared cache" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bEnableSharedDDCPerformanceNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications = { "bEnableSharedDDCPerformanceNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "ConsoleVariable", "Editor.OverrideDPIBasedEditorViewportScaling" },
		{ "DisplayName", "Disable DPI Based Editor Viewport Scaling" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "By default the editor will adjust scene scaling (quality) for high DPI in order to ensure consistent performance with very large render targets.\nEnabling this will disable automatic adjusting and render at the full resolution of the viewport" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bOverrideDPIBasedEditorViewportScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling = { "bOverrideDPIBasedEditorViewportScaling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When turned on, the editor will constantly monitor performance and adjust scalability settings for you when performance drops (disabled in debug)" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bMonitorEditorPerformance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance = { "bMonitorEditorPerformance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "DisplayName", "Use Less CPU when in Background" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Lowers CPU usage when the editor is in the background and not the active application" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bThrottleCPUWhenNotForeground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground = { "bThrottleCPUWhenNotForeground", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When enabled, the application frame rate, memory and Unreal object count will be displayed in the main editor UI" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bShowFrameRateAndMemory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory = { "bShowFrameRateAndMemory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableSharedDDCPerformanceNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideDPIBasedEditorViewportScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorPerformanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorPerformanceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::ClassParams = {
		&UEditorPerformanceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorPerformanceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorPerformanceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorPerformanceSettings, 64357682);
	template<> UNREALED_API UClass* StaticClass<UEditorPerformanceSettings>()
	{
		return UEditorPerformanceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorPerformanceSettings(Z_Construct_UClass_UEditorPerformanceSettings, &UEditorPerformanceSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorPerformanceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPerformanceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
