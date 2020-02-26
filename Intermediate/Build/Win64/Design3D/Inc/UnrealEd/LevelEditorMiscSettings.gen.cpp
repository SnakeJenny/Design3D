// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/LevelEditorMiscSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorMiscSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorMiscSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorMiscSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
// End Cross Module References
	void ULevelEditorMiscSettings::StaticRegisterNativesULevelEditorMiscSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelEditorMiscSettings_NoRegister()
	{
		return ULevelEditorMiscSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorMiscSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorScreenshotSaveDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorScreenshotSaveDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLevelStreamingClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultLevelStreamingClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorSounds_MetaData[];
#endif
		static void NewProp_bEnableEditorSounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorVolumeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditorVolumeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRealTimeAudio_MetaData[];
#endif
		static void NewProp_bEnableRealTimeAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRealTimeAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowBackgroundAudio_MetaData[];
#endif
		static void NewProp_bAllowBackgroundAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBackgroundAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceRespectsScale_MetaData[];
#endif
		static void NewProp_bReplaceRespectsScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceRespectsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavigationAutoUpdate_MetaData[];
#endif
		static void NewProp_bNavigationAutoUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigationAutoUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoMoveBSPPivotOffset_MetaData[];
#endif
		static void NewProp_bAutoMoveBSPPivotOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoMoveBSPPivotOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBSPAutoUpdate_MetaData[];
#endif
		static void NewProp_bBSPAutoUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBSPAutoUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyLightingEnable_MetaData[];
#endif
		static void NewProp_bAutoApplyLightingEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyLightingEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorMiscSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Miscellaneous" },
		{ "IncludePath", "Settings/LevelEditorMiscSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "Configure miscellaneous settings for the Level Editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorScreenshotSaveDirectory_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "The save directory for newly created screenshots" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorScreenshotSaveDirectory = { "EditorScreenshotSaveDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorMiscSettings, EditorScreenshotSaveDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorScreenshotSaveDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorScreenshotSaveDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_DefaultLevelStreamingClass_MetaData[] = {
		{ "Category", "Levels" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "The default level streaming class to use when adding new streaming levels" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_DefaultLevelStreamingClass = { "DefaultLevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorMiscSettings, DefaultLevelStreamingClass), Z_Construct_UClass_ULevelStreaming_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_DefaultLevelStreamingClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_DefaultLevelStreamingClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "Enables audio feedback for certain operations in Unreal Editor, such as entering and exiting Play mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bEnableEditorSounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds = { "bEnableEditorSounds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorVolumeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "Global volume setting for the editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorVolumeLevel = { "EditorVolumeLevel", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorMiscSettings, EditorVolumeLevel), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorVolumeLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorVolumeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If true audio will be enabled in the editor. Does not affect PIE *" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bEnableRealTimeAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio = { "bEnableRealTimeAudio", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If checked audio playing in the editor will continue to play even if the editor is in the background" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bAllowBackgroundAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio = { "bAllowBackgroundAudio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale_MetaData[] = {
		{ "Category", "Editing" },
		{ "DisplayName", "Preserve Actor Scale on Replace" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If enabled, replacing actors will respect the scale of the original actor.  Otherwise, the replaced actors will have a scale of 1.0" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bReplaceRespectsScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale = { "bReplaceRespectsScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate_MetaData[] = {
		{ "Category", "Editing" },
		{ "DisplayName", "Update Navigation Automatically" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If true, Navigation will auto-update" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bNavigationAutoUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate = { "bNavigationAutoUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset_MetaData[] = {
		{ "Category", "Editing" },
		{ "DisplayName", "Move BSP Pivot Offset Automatically" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If true, the pivot offset for BSP will be automatically moved to stay centered on its vertices" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bAutoMoveBSPPivotOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset = { "bAutoMoveBSPPivotOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate_MetaData[] = {
		{ "Category", "Editing" },
		{ "DisplayName", "Update BSP Automatically" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If true, BSP will auto-update" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bBSPAutoUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate = { "bBSPAutoUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable_MetaData[] = {
		{ "Category", "Editing" },
		{ "DisplayName", "Apply Lighting Automatically" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorMiscSettings.h" },
		{ "ToolTip", "If checked lighting will be automatically applied to the level after a static lighting build is complete.\nOtherwise you will be prompted to apply it" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable_SetBit(void* Obj)
	{
		((ULevelEditorMiscSettings*)Obj)->bAutoApplyLightingEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable = { "bAutoApplyLightingEnable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorMiscSettings), &Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorMiscSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorScreenshotSaveDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_DefaultLevelStreamingClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableEditorSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_EditorVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bEnableRealTimeAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAllowBackgroundAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bReplaceRespectsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bNavigationAutoUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoMoveBSPPivotOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bBSPAutoUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorMiscSettings_Statics::NewProp_bAutoApplyLightingEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorMiscSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorMiscSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorMiscSettings_Statics::ClassParams = {
		&ULevelEditorMiscSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditorMiscSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorMiscSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorMiscSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditorMiscSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditorMiscSettings, 1601621346);
	template<> UNREALED_API UClass* StaticClass<ULevelEditorMiscSettings>()
	{
		return ULevelEditorMiscSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditorMiscSettings(Z_Construct_UClass_ULevelEditorMiscSettings, &ULevelEditorMiscSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelEditorMiscSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorMiscSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
