// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/EditorLoadingSavingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLoadingSavingSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportWildcard();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingSavingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* ELoadLevelAtStartup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELoadLevelAtStartup"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELoadLevelAtStartup::Type>()
	{
		return ELoadLevelAtStartup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadLevelAtStartup(ELoadLevelAtStartup_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELoadLevelAtStartup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Hash() { return 646996353U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadLevelAtStartup"), 0, Get_Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadLevelAtStartup::None", (int64)ELoadLevelAtStartup::None },
				{ "ELoadLevelAtStartup::ProjectDefault", (int64)ELoadLevelAtStartup::ProjectDefault },
				{ "ELoadLevelAtStartup::LastOpened", (int64)ELoadLevelAtStartup::LastOpened },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELoadLevelAtStartup",
				"ELoadLevelAtStartup::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAutoReimportDirectoryConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig, Z_Construct_UPackage__Script_UnrealEd(), TEXT("AutoReimportDirectoryConfig"), sizeof(FAutoReimportDirectoryConfig), Get_Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAutoReimportDirectoryConfig>()
{
	return FAutoReimportDirectoryConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoReimportDirectoryConfig(FAutoReimportDirectoryConfig::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("AutoReimportDirectoryConfig"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportDirectoryConfig
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportDirectoryConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoReimportDirectoryConfig")),new UScriptStruct::TCppStructOps<FAutoReimportDirectoryConfig>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportDirectoryConfig;
	struct Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Wildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Auto reimport settings for a specific directory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoReimportDirectoryConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Include/Exclude Wildcards" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "(Optional) Specify a set of wildcards to include or exclude files from this auto-reimporter." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards = { "Wildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoReimportDirectoryConfig, Wildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_Inner = { "Wildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutoReimportWildcard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "(Optional) Specify a virtual mout point (e.g. /Game/) to map this directory to on disk. Doing so allows auto-creation of assets when a source content file is created in this folder (see below)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoReimportDirectoryConfig, MountPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Path to a virtual package path (eg /Game/ or /MyPlugin/), or absolute paths on disk where your source content files reside." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory = { "SourceDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoReimportDirectoryConfig, SourceDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AutoReimportDirectoryConfig",
		sizeof(FAutoReimportDirectoryConfig),
		alignof(FAutoReimportDirectoryConfig),
		Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoReimportDirectoryConfig"), sizeof(FAutoReimportDirectoryConfig), Get_Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Hash() { return 2426853621U; }
class UScriptStruct* FAutoReimportWildcard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FAutoReimportWildcard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoReimportWildcard, Z_Construct_UPackage__Script_UnrealEd(), TEXT("AutoReimportWildcard"), sizeof(FAutoReimportWildcard), Get_Z_Construct_UScriptStruct_FAutoReimportWildcard_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAutoReimportWildcard>()
{
	return FAutoReimportWildcard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoReimportWildcard(FAutoReimportWildcard::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("AutoReimportWildcard"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportWildcard
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportWildcard()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoReimportWildcard")),new UScriptStruct::TCppStructOps<FAutoReimportWildcard>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFAutoReimportWildcard;
	struct Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInclude_MetaData[];
#endif
		static void NewProp_bInclude_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInclude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wildcard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Wildcard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "A filter used by the auto reimport manager to explicitly include/exclude files matching the specified wildcard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoReimportWildcard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When true, files that match this wildcard will be included (if it doesn't fail any other filters), when false, matches will be excluded from the reimporter" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_SetBit(void* Obj)
	{
		((FAutoReimportWildcard*)Obj)->bInclude = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude = { "bInclude", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutoReimportWildcard), &Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The wildcard filter as a string. Files that match this wildcard will be included/excluded according to the bInclude member" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard = { "Wildcard", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoReimportWildcard, Wildcard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AutoReimportWildcard",
		sizeof(FAutoReimportWildcard),
		alignof(FAutoReimportWildcard),
		Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportWildcard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoReimportWildcard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoReimportWildcard"), sizeof(FAutoReimportWildcard), Get_Z_Construct_UScriptStruct_FAutoReimportWildcard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoReimportWildcard_Hash() { return 886805681U; }
	void UEditorLoadingSavingSettings::StaticRegisterNativesUEditorLoadingSavingSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister()
	{
		return UEditorLoadingSavingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDiffToolPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextDiffToolPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSCCUseGlobalSettings_MetaData[];
#endif
		static void NewProp_bSCCUseGlobalSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSCCUseGlobalSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSCCAutoAddNewFiles_MetaData[];
#endif
		static void NewProp_bSCCAutoAddNewFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSCCAutoAddNewFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPromptForCheckoutOnAssetModification_MetaData[];
#endif
		static void NewProp_bPromptForCheckoutOnAssetModification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPromptForCheckoutOnAssetModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData[];
#endif
		static void NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyCheckoutOnAssetModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSaveWarningInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoSaveWarningInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSaveTimeMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoSaveTimeMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveContent_MetaData[];
#endif
		static void NewProp_bAutoSaveContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveMaps_MetaData[];
#endif
		static void NewProp_bAutoSaveMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveMaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveEnable_MetaData[];
#endif
		static void NewProp_bAutoSaveEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirtyMigratedBlueprints_MetaData[];
#endif
		static void NewProp_bDirtyMigratedBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyMigratedBlueprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReimportCSV_MetaData[];
#endif
		static void NewProp_bAutoReimportCSV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReimportCSV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReimportTextures_MetaData[];
#endif
		static void NewProp_bAutoReimportTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReimportTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteSourceFilesWithAssets_MetaData[];
#endif
		static void NewProp_bDeleteSourceFilesWithAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteSourceFilesWithAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPromptBeforeAutoImporting_MetaData[];
#endif
		static void NewProp_bPromptBeforeAutoImporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPromptBeforeAutoImporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectChangesOnStartup_MetaData[];
#endif
		static void NewProp_bDetectChangesOnStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectChangesOnStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeleteAssets_MetaData[];
#endif
		static void NewProp_bAutoDeleteAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeleteAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateAssets_MetaData[];
#endif
		static void NewProp_bAutoCreateAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReimportThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoReimportThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReimportDirectorySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoReimportDirectorySettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoReimportDirectorySettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReimportDirectories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoReimportDirectories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutoReimportDirectories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMonitorContentDirectories_MetaData[];
#endif
		static void NewProp_bMonitorContentDirectories_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMonitorContentDirectories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSourceControlCompatabilityCheck_MetaData[];
#endif
		static void NewProp_bEnableSourceControlCompatabilityCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceControlCompatabilityCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestoreOpenAssetTabsOnRestart_MetaData[];
#endif
		static void NewProp_bRestoreOpenAssetTabsOnRestart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoreOpenAssetTabsOnRestart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceCompilationAtStartup_MetaData[];
#endif
		static void NewProp_bForceCompilationAtStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceCompilationAtStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadLevelAtStartup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadLevelAtStartup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AutoSave AutoReimport Blueprints" },
		{ "IncludePath", "Settings/EditorLoadingSavingSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Implements the Level Editor's loading and saving settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "DisplayName", "Tool for diffing text" },
		{ "FilePathFilter", "exe" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Specifies the file path to the tool to be used for diffing text files" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath = { "TextDiffToolPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, TextDiffToolPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "DisplayName", "Use Global Settings" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Use global source control login settings, rather than per-project. Changing this will require you to login again" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bSCCUseGlobalSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings = { "bSCCUseGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "DisplayName", "Add New Files when Modified" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Auto add files to source control" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bSCCAutoAddNewFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles = { "bSCCAutoAddNewFiles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically prompt for SCC checkout on asset modification" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bPromptForCheckoutOnAssetModification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification = { "bPromptForCheckoutOnAssetModification", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically checkout on asset modification" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutomaticallyCheckoutOnAssetModification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification = { "bAutomaticallyCheckoutOnAssetModification", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Warning in seconds" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The number of seconds warning before an autosave" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds = { "AutoSaveWarningInSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveWarningInSeconds), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Frequency in Minutes" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The time interval after which to auto save" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes = { "AutoSaveTimeMinutes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveTimeMinutes), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "DisplayName", "Save Content" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save content packages during an autosave" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent = { "bAutoSaveContent", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "DisplayName", "Save Maps" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save maps during an autosave" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps = { "bAutoSaveMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "DisplayName", "Enable AutoSave" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save after a time interval" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable = { "bAutoSaveEnable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "Dirty Migrated Blueprints" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to mark blueprints dirty if they are automatically migrated during loads" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDirtyMigratedBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints = { "bDirtyMigratedBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoReimportCSV_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV = { "bAutoReimportCSV", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Deprecated properties - we automatically monitor all source file types that are supported by in memory factories now" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoReimportTextures_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures = { "bAutoReimportTextures", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Internal setting to control whether we should ask the user whether we should automatically delete source files when their assets are deleted" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDeleteSourceFilesWithAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets = { "bDeleteSourceFilesWithAssets", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Prompt Before Action" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to prompt the user to import detected changes." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bPromptBeforeAutoImporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting = { "bPromptBeforeAutoImporting", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Detect Changes On Startup" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, changes to monitored directories since UE4 was closed will be detected on restart.\n(Not recommended when working in collaboration with others using source control)." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDetectChangesOnStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup = { "bDetectChangesOnStartup", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Auto Delete Assets" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, deleting a source content file will automatically prompt the deletion of any related assets." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoDeleteAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets = { "bAutoDeleteAssets", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Auto Create Assets" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, newly added source content files will be automatically imported into new assets." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoCreateAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets = { "bAutoCreateAssets", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ClampMax", "60" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Import Threshold Time" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Specifies an amount of time to wait before a specific file change is considered for auto reimport" },
		{ "Units", "Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold = { "AutoReimportThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportThreshold), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Directories to Monitor" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Lists every directory to monitor for content changes. Can be virtual package paths (eg /Game/ or /MyPlugin/), or absolute paths on disk.\nPaths should point to the locations of the source content files (e.g. *.fbx, *.png) you want to be eligible for auto-reimport." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings = { "AutoReimportDirectorySettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportDirectorySettings), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_Inner = { "AutoReimportDirectorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories = { "AutoReimportDirectories", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportDirectories_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_Inner = { "AutoReimportDirectories", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Monitor Content Directories" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, changes to made to source content files inside the content directories will automatically be reflected in the content browser.\nNote that source content files must reside in one of the monitored directories to be eligible for auto-reimport.\nAdvanced setup options are available below." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bMonitorContentDirectories = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories = { "bMonitorContentDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bEnableSourceControlCompatabilityCheck_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck = { "bEnableSourceControlCompatabilityCheck", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to restore previously open assets at startup" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bRestoreOpenAssetTabsOnRestart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart = { "bRestoreOpenAssetTabsOnRestart", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Force project compilation at startup" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bForceCompilationAtStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup = { "bForceCompilationAtStartup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to load a default example map at startup" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup = { "LoadLevelAtStartup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorLoadingSavingSettings, LoadLevelAtStartup), Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLoadingSavingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::ClassParams = {
		&UEditorLoadingSavingSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLoadingSavingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorLoadingSavingSettings, 2552475336);
	template<> UNREALED_API UClass* StaticClass<UEditorLoadingSavingSettings>()
	{
		return UEditorLoadingSavingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLoadingSavingSettings(Z_Construct_UClass_UEditorLoadingSavingSettings, &UEditorLoadingSavingSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorLoadingSavingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLoadingSavingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
