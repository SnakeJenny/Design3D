// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Tests/AutomationTestSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FLaunchOnTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchOnTestSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LaunchOnTestSettings"), sizeof(FLaunchOnTestSettings), Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLaunchOnTestSettings>()
{
	return FLaunchOnTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLaunchOnTestSettings(FLaunchOnTestSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LaunchOnTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LaunchOnTestSettings")),new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings;
	struct Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchOnTestmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchOnTestmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor Launch On With Map Iterations test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the device to be used for launch on. Example: WindowsNoEditor, Android, IOS, Linux" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchOnTestSettings, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Launch On test *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap = { "LaunchOnTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchOnTestSettings, LaunchOnTestmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LaunchOnTestSettings",
		sizeof(FLaunchOnTestSettings),
		alignof(FLaunchOnTestSettings),
		Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LaunchOnTestSettings"), sizeof(FLaunchOnTestSettings), Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_Hash() { return 1261439427U; }
class UScriptStruct* FEditorMapPerformanceTestDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorMapPerformanceTestDefinition"), sizeof(FEditorMapPerformanceTestDefinition), Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorMapPerformanceTestDefinition>()
{
	return FEditorMapPerformanceTestDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorMapPerformanceTestDefinition(FEditorMapPerformanceTestDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorMapPerformanceTestDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorMapPerformanceTestDefinition")),new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition;
	struct Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceTestmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceTestmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the length of time in seconds that this test will run for before stopping." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer = { "TestTimer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, TestTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Performance Capture *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap = { "PerformanceTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, PerformanceTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorMapPerformanceTestDefinition",
		sizeof(FEditorMapPerformanceTestDefinition),
		alignof(FEditorMapPerformanceTestDefinition),
		Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorMapPerformanceTestDefinition"), sizeof(FEditorMapPerformanceTestDefinition), Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Hash() { return 3254208735U; }
class UScriptStruct* FBuildPromotionTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionTestSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionTestSettings"), sizeof(FBuildPromotionTestSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionTestSettings>()
{
	return FBuildPromotionTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionTestSettings(FBuildPromotionTestSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionTestSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings;
	struct Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceControlMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceControlMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProjectSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportWorkflow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportWorkflow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStaticMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultStaticMeshAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material to modify for the content browser step *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial = { "SourceControlMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, SourceControlMaterial), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "New project settings *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings = { "NewProjectSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, NewProjectSettings), Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Open assets settings *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets = { "OpenAssets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, OpenAssets), Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import workflow settings *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow = { "ImportWorkflow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, ImportWorkflow), Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default static mesh asset to apply materials to *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset = { "DefaultStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, DefaultStaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionTestSettings",
		sizeof(FBuildPromotionTestSettings),
		alignof(FBuildPromotionTestSettings),
		Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionTestSettings"), sizeof(FBuildPromotionTestSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Hash() { return 622625678U; }
class UScriptStruct* FBlueprintEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintEditorPromotionSettings"), sizeof(FBlueprintEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintEditorPromotionSettings>()
{
	return FBlueprintEditorPromotionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintEditorPromotionSettings(FBlueprintEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings;
	struct Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondMeshPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstMeshPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the blueprint editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The mesh to set on the blueprint after the delay *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath = { "SecondMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, SecondMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The starting mesh for the blueprint *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath = { "FirstMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, FirstMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintEditorPromotionSettings",
		sizeof(FBlueprintEditorPromotionSettings),
		alignof(FBlueprintEditorPromotionSettings),
		Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintEditorPromotionSettings"), sizeof(FBlueprintEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Hash() { return 4214406881U; }
class UScriptStruct* FParticleEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEditorPromotionSettings"), sizeof(FParticleEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEditorPromotionSettings>()
{
	return FParticleEditorPromotionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEditorPromotionSettings(FParticleEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings;
	struct Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the particle editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEditorPromotionSettings",
		sizeof(FParticleEditorPromotionSettings),
		alignof(FParticleEditorPromotionSettings),
		Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEditorPromotionSettings"), sizeof(FParticleEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Hash() { return 2658300161U; }
class UScriptStruct* FMaterialEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialEditorPromotionSettings"), sizeof(FMaterialEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialEditorPromotionSettings>()
{
	return FMaterialEditorPromotionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialEditorPromotionSettings(FMaterialEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings;
	struct Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNormalTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultNormalTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the material editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture = { "DefaultNormalTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultNormalTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture = { "DefaultDiffuseTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultDiffuseTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset = { "DefaultMaterialAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultMaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialEditorPromotionSettings",
		sizeof(FMaterialEditorPromotionSettings),
		alignof(FMaterialEditorPromotionSettings),
		Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialEditorPromotionSettings"), sizeof(FMaterialEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Hash() { return 276842417U; }
class UScriptStruct* FBuildPromotionNewProjectSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionNewProjectSettings"), sizeof(FBuildPromotionNewProjectSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionNewProjectSettings>()
{
	return FBuildPromotionNewProjectSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionNewProjectSettings(FBuildPromotionNewProjectSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionNewProjectSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionNewProjectSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings;
	struct Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewProjectNameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectFolderOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProjectFolderOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the new project stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the project *" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride = { "NewProjectNameOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The path for the new project" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride = { "NewProjectFolderOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectFolderOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionNewProjectSettings",
		sizeof(FBuildPromotionNewProjectSettings),
		alignof(FBuildPromotionNewProjectSettings),
		Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionNewProjectSettings"), sizeof(FBuildPromotionNewProjectSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Hash() { return 3089723314U; }
class UScriptStruct* FBuildPromotionOpenAssetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionOpenAssetSettings"), sizeof(FBuildPromotionOpenAssetSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionOpenAssetSettings>()
{
	return FBuildPromotionOpenAssetSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionOpenAssetSettings(FBuildPromotionOpenAssetSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionOpenAssetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionOpenAssetSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings;
	struct Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSystemAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the open assets stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The texture asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset = { "TextureAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, TextureAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The static mesh asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, StaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The skeletal mesh asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The particle system asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, ParticleSystemAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The material asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset = { "MaterialAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, MaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The blueprint asset to open" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset = { "BlueprintAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, BlueprintAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionOpenAssetSettings",
		sizeof(FBuildPromotionOpenAssetSettings),
		alignof(FBuildPromotionOpenAssetSettings),
		Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionOpenAssetSettings"), sizeof(FBuildPromotionOpenAssetSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Hash() { return 3229523837U; }
class UScriptStruct* FBuildPromotionImportWorkflowSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionImportWorkflowSettings"), sizeof(FBuildPromotionImportWorkflowSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionImportWorkflowSettings>()
{
	return FBuildPromotionImportWorkflowSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionImportWorkflowSettings(FBuildPromotionImportWorkflowSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionImportWorkflowSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionImportWorkflowSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings;
	struct Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherAssetsToImport_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherAssetsToImport;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherAssetsToImport_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurroundSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurroundSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MorphMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendShapeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReimportStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffuse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Diffuse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the import workflow stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for any other assets you may want to import" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the surround sound (Select any of the channels.  It will auto import the rest)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound = { "SurroundSound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SurroundSound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the sound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Sound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Animation), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SkeletalMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the morph mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh = { "MorphMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, MorphMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the blend shape" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh = { "BlendShapeMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, BlendShapeMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh to re-import" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh = { "ReimportStaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, StaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Normalmap texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Normal), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Diffuse texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse = { "Diffuse", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Diffuse), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionImportWorkflowSettings",
		sizeof(FBuildPromotionImportWorkflowSettings),
		alignof(FBuildPromotionImportWorkflowSettings),
		Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionImportWorkflowSettings"), sizeof(FBuildPromotionImportWorkflowSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Hash() { return 1315663945U; }
class UScriptStruct* FEditorImportWorkflowDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportWorkflowDefinition"), sizeof(FEditorImportWorkflowDefinition), Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportWorkflowDefinition>()
{
	return FEditorImportWorkflowDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorImportWorkflowDefinition(FEditorImportWorkflowDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorImportWorkflowDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorImportWorkflowDefinition")),new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition;
	struct Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import workflow test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorImportWorkflowDefinition, FactorySettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorImportWorkflowDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorImportWorkflowDefinition",
		sizeof(FEditorImportWorkflowDefinition),
		alignof(FEditorImportWorkflowDefinition),
		Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorImportWorkflowDefinition"), sizeof(FEditorImportWorkflowDefinition), Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Hash() { return 2197559109U; }
class UScriptStruct* FEditorImportExportTestDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportExportTestDefinition"), sizeof(FEditorImportExportTestDefinition), Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportExportTestDefinition>()
{
	return FEditorImportExportTestDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorImportExportTestDefinition(FEditorImportExportTestDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorImportExportTestDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorImportExportTestDefinition")),new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition;
	struct Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipExport_MetaData[];
#endif
		static void NewProp_bSkipExport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipExport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportFileExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportFileExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, FactorySettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If true, the export step will be skipped" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit(void* Obj)
	{
		((FEditorImportExportTestDefinition*)Obj)->bSkipExport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport = { "bSkipExport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorImportExportTestDefinition), &Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file extension to use when exporting this asset.  Used to find a supporting exporter" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension = { "ExportFileExtension", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, ExportFileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorImportExportTestDefinition",
		sizeof(FEditorImportExportTestDefinition),
		alignof(FEditorImportExportTestDefinition),
		Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorImportExportTestDefinition"), sizeof(FEditorImportExportTestDefinition), Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Hash() { return 3313924706U; }
class UScriptStruct* FImportFactorySettingValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportFactorySettingValues, Z_Construct_UPackage__Script_Engine(), TEXT("ImportFactorySettingValues"), sizeof(FImportFactorySettingValues), Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportFactorySettingValues>()
{
	return FImportFactorySettingValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportFactorySettingValues(FImportFactorySettingValues::StaticStruct, TEXT("/Script/Engine"), TEXT("ImportFactorySettingValues"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues
{
	FScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportFactorySettingValues")),new UScriptStruct::TCppStructOps<FImportFactorySettingValues>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues;
	struct Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds UProperty names and values to customize factory settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportFactorySettingValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Value to import for the specified property." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportFactorySettingValues, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Name of the property to change.  Nested settings can be modified using \"Outer.Property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportFactorySettingValues, SettingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ImportFactorySettingValues",
		sizeof(FImportFactorySettingValues),
		alignof(FImportFactorySettingValues),
		Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportFactorySettingValues"), sizeof(FImportFactorySettingValues), Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_Hash() { return 539000566U; }
class UScriptStruct* FExternalToolDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalToolDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("ExternalToolDefinition"), sizeof(FExternalToolDefinition), Get_Z_Construct_UScriptStruct_FExternalToolDefinition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExternalToolDefinition>()
{
	return FExternalToolDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternalToolDefinition(FExternalToolDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("ExternalToolDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternalToolDefinition")),new UScriptStruct::TCppStructOps<FExternalToolDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition;
	struct Z_Construct_UScriptStruct_FExternalToolDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkingDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandLineOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandLineOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Structure for defining an external tool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalToolDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "If the ScriptExtension is set, look here for the script files." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory = { "ScriptDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, ScriptDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If set, look for scripts with this extension." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension = { "ScriptExtension", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, ScriptExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The working directory for the new process." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, WorkingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The command line options to pass to the executable." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions = { "CommandLineOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, CommandLineOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The executable to run." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, ExecutablePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the tool / test." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalToolDefinition, ToolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExternalToolDefinition",
		sizeof(FExternalToolDefinition),
		alignof(FExternalToolDefinition),
		Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternalToolDefinition"), sizeof(FExternalToolDefinition), Get_Z_Construct_UScriptStruct_FExternalToolDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_Hash() { return 3513430438U; }
	void UAutomationTestSettings::StaticRegisterNativesUAutomationTestSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister()
	{
		return UAutomationTestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationTestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenshotResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultScreenshotResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchOnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaunchOnSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchOnSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportExportTestDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportExportTestDefinitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportExportTestDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalTools;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestLevelFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestLevelFolders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestLevelFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintEditorPromotionTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintEditorPromotionTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleEditorPromotionTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleEditorPromotionTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialEditorPromotionTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialEditorPromotionTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildPromotionTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildPromotionTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToOpen;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsToOpen_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPerformanceTestMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorPerformanceTestMaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorPerformanceTestMaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomationTestmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutomationTestmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTestModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorTestModules;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditorTestModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTestModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineTestModules;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineTestModules_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationTestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/AutomationTestSettings.h" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The default resolution to take all automation screenshots at." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution = { "DefaultScreenshotResolution", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, DefaultScreenshotResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map and device type to be used for the editor Launch On With Map Iterations test." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, LaunchOnSettings), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaunchOnTestSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset import / Export test settings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, ImportExportTestDefinitions), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "External executables and scripts to run as part of automation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools = { "ExternalTools", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, ExternalTools), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner = { "ExternalTools", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternalToolDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData[] = {
		{ "Category", "MiscAutomationSetups" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Folders containing levels to exclude from automated tests" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, TestLevelFolders), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Blueprint editor promotion test settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest = { "BlueprintEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, BlueprintEditorPromotionTest), Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Particle editor promotion test settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest = { "ParticleEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, ParticleEditorPromotionTest), Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material editor promotion test settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest = { "MaterialEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, MaterialEditorPromotionTest), Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Editor build promotion test settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest = { "BuildPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, BuildPromotionTest), Z_Construct_UScriptStruct_FBuildPromotionTestSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData[] = {
		{ "Category", "Open Asset Tests" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset to test for open in automation process" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, AssetsToOpen), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map to be used for the editor performance capture tool." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, EditorPerformanceTestMaps), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The automation test map to be used for several of the automation tests." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap = { "AutomationTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, AutomationTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have editor tests" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules = { "EditorTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, EditorTestModules), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner = { "EditorTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have engine tests" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules = { "EngineTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomationTestSettings, EngineTestModules), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner = { "EngineTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationTestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams = {
		&UAutomationTestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationTestSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationTestSettings, 3531062642);
	template<> ENGINE_API UClass* StaticClass<UAutomationTestSettings>()
	{
		return UAutomationTestSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationTestSettings(Z_Construct_UClass_UAutomationTestSettings, &UAutomationTestSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAutomationTestSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
