// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Settings/EditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UEditorSettings::StaticRegisterNativesUEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorSettings_NoRegister()
	{
		return UEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoScalabilityWorkScaleAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoScalabilityWorkScaleAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressSurveys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InProgressSurveys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InProgressSurveys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedSurveys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedSurveys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompletedSurveys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyStarterContentPreference_MetaData[];
#endif
		static void NewProp_bCopyStarterContentPreference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyStarterContentPreference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedProjectPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreatedProjectPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedProjectPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentlyOpenedProjectFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecentlyOpenedProjectFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecentlyOpenedProjectFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedDerivedDataCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedDerivedDataCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalDerivedDataCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalDerivedDataCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorAnalyticsEnabled_MetaData[];
#endif
		static void NewProp_bEditorAnalyticsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorAnalyticsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData[];
#endif
		static void NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/EditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount = { "AutoScalabilityWorkScaleAmount", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, AutoScalabilityWorkScaleAmount), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The id's of the surveys currently in-progress" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys = { "InProgressSurveys", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, InProgressSurveys), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_Inner = { "InProgressSurveys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The id's of the surveys completed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys = { "CompletedSurveys", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, CompletedSurveys), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_Inner = { "CompletedSurveys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bCopyStarterContentPreference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference = { "bCopyStarterContentPreference", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The paths of projects created with the new project wizard. This is used to populate the \"Path\" field of the new project dialog." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths = { "CreatedProjectPaths", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, CreatedProjectPaths), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_Inner = { "CreatedProjectPaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Game project files that were recently opened in the editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles = { "RecentlyOpenedProjectFiles", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, RecentlyOpenedProjectFiles), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_Inner = { "RecentlyOpenedProjectFiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData[] = {
		{ "Category", "DerivedData" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Path to a network share that can be used for sharing derived data (native textures, compiled shaders, etc...) with a team. Will not disabled if this directory cannot be accessed. The editor must be restarted for changes to take effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache = { "SharedDerivedDataCache", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, SharedDerivedDataCache), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData[] = {
		{ "Category", "DerivedData" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Directory to be used for caching derived data locally (native textures, compiled shaders, etc...). The editor must be restarted for changes to take effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache = { "LocalDerivedDataCache", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSettings, LocalDerivedDataCache), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Can the editor report usage analytics (types of assets being spawned, etc...) back to Epic in order for us to improve the editor user experience?  Note: The editor must be restarted for changes to take effect." },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bEditorAnalyticsEnabled_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled = { "bEditorAnalyticsEnabled", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "When checked, the most recently loaded project will be auto-loaded at editor startup if no other project was specified on the command line" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bLoadTheMostRecentlyLoadedProjectAtStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup = { "bLoadTheMostRecentlyLoadedProjectAtStartup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSettings_Statics::ClassParams = {
		&UEditorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSettings, 1525302905);
	template<> UNREALED_API UClass* StaticClass<UEditorSettings>()
	{
		return UEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSettings(Z_Construct_UClass_UEditorSettings, &UEditorSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
