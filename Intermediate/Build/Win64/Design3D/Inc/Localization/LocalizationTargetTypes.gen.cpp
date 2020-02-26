// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/Public/LocalizationTargetTypes.h"
#include "Localization/Public/LocalizationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationTargetTypes() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy();
	UPackage* Z_Construct_UPackage__Script_Localization();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet();
// End Cross Module References
	static UEnum* ELocalizationTargetLoadingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetLoadingPolicy"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationTargetLoadingPolicy>()
	{
		return ELocalizationTargetLoadingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetLoadingPolicy(ELocalizationTargetLoadingPolicy_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetLoadingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Hash() { return 2392714851U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetLoadingPolicy"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizationTargetLoadingPolicy::Never", (int64)ELocalizationTargetLoadingPolicy::Never },
				{ "ELocalizationTargetLoadingPolicy::Always", (int64)ELocalizationTargetLoadingPolicy::Always },
				{ "ELocalizationTargetLoadingPolicy::Editor", (int64)ELocalizationTargetLoadingPolicy::Editor },
				{ "ELocalizationTargetLoadingPolicy::Game", (int64)ELocalizationTargetLoadingPolicy::Game },
				{ "ELocalizationTargetLoadingPolicy::PropertyNames", (int64)ELocalizationTargetLoadingPolicy::PropertyNames },
				{ "ELocalizationTargetLoadingPolicy::ToolTips", (int64)ELocalizationTargetLoadingPolicy::ToolTips },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.ToolTip", "This target's localization data will always be loaded automatically." },
				{ "Editor.ToolTip", "This target's localization data will only be loaded when running the editor. Use if this target localizes the editor." },
				{ "Game.ToolTip", "This target's localization data will only be loaded when running the game. Use if this target localizes your game." },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "Never.ToolTip", "This target's localization data will never be loaded automatically." },
				{ "PropertyNames.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized property names." },
				{ "ToolTips.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized tool tips." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocalizationTargetLoadingPolicy",
				"ELocalizationTargetLoadingPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELocalizationGatherPathRoot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationGatherPathRoot"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationGatherPathRoot>()
	{
		return ELocalizationGatherPathRoot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationGatherPathRoot(ELocalizationGatherPathRoot_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationGatherPathRoot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Hash() { return 1684232502U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationGatherPathRoot"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizationGatherPathRoot::Auto", (int64)ELocalizationGatherPathRoot::Auto },
				{ "ELocalizationGatherPathRoot::Engine", (int64)ELocalizationGatherPathRoot::Engine },
				{ "ELocalizationGatherPathRoot::Project", (int64)ELocalizationGatherPathRoot::Project },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.ToolTip", "Automatically select Engine or Project based on which set the target belongs to" },
				{ "Engine.ToolTip", "Path is relative to the Engine directory" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "Project.ToolTip", "Path is relative to the Project directory" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocalizationGatherPathRoot",
				"ELocalizationGatherPathRoot",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELocalizationTargetConflictStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetConflictStatus"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationTargetConflictStatus>()
	{
		return ELocalizationTargetConflictStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetConflictStatus(ELocalizationTargetConflictStatus_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetConflictStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Hash() { return 4256950921U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetConflictStatus"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizationTargetConflictStatus::Unknown", (int64)ELocalizationTargetConflictStatus::Unknown },
				{ "ELocalizationTargetConflictStatus::ConflictsPresent", (int64)ELocalizationTargetConflictStatus::ConflictsPresent },
				{ "ELocalizationTargetConflictStatus::Clear", (int64)ELocalizationTargetConflictStatus::Clear },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Clear.ToolTip", "The localization target is clear of conflicts." },
				{ "ConflictsPresent.ToolTip", "The are outstanding conflicts present in this localization target." },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "Unknown.ToolTip", "The status of conflicts in this localization target could not be determined." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocalizationTargetConflictStatus",
				"ELocalizationTargetConflictStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLocalizationTargetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationTargetSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationTargetSettings>()
{
	return FLocalizationTargetSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationTargetSettings(FLocalizationTargetSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationTargetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationTargetSettings")),new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings;
	struct Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedCulturesStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedCulturesStatistics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedCulturesStatistics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeCultureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NativeCultureIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportDialogueSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportDialogueSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompileSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExportSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromPackages_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromPackages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromTextFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromTextFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModuleNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredModuleNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequiredModuleNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalManifestDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalManifestDependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalManifestDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetDependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConflictStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConflictStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConflictStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_MetaData[] = {
		{ "Category", "Cultures" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Cultures for which the source text is being localized for." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics = { "SupportedCulturesStatistics", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, SupportedCulturesStatistics), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_Inner = { "SupportedCulturesStatistics", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCultureStatistics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex_MetaData[] = {
		{ "Category", "Cultures" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The index of the native culture among the supported cultures." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex = { "NativeCultureIndex", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, NativeCultureIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings_MetaData[] = {
		{ "Category", "Import Dialogue" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for importing dialogue from WAV files." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings = { "ImportDialogueSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ImportDialogueSettings), Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings_MetaData[] = {
		{ "Category", "Compile Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for compiling translations." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings = { "CompileSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, CompileSettings), Z_Construct_UScriptStruct_FLocalizationCompilationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings_MetaData[] = {
		{ "Category", "Export Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for exporting translations." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings = { "ExportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ExportSettings), Z_Construct_UScriptStruct_FLocalizationExportingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from metadata and how." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData = { "GatherFromMetaData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromMetaData), Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from packages and how." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages = { "GatherFromPackages", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromPackages), Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from text files and how." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles = { "GatherFromTextFiles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromTextFiles), Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The names of modules which must be loaded when gathering text. Use to gather from packages or metadata sourced from a module that isn't the primary game module." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames = { "RequiredModuleNames", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, RequiredModuleNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_Inner = { "RequiredModuleNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "FilePathFilter", "manifest" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text present in these manifests will not be duplicated in this target." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies = { "AdditionalManifestDependencies", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, AdditionalManifestDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_Inner = { "AdditionalManifestDependencies", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text present in these targets will not be duplicated in this target." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies = { "TargetDependencies", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, TargetDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_Inner = { "TargetDependencies", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Whether the target has outstanding conflicts that require resolution." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus = { "ConflictStatus", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ConflictStatus), Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Unique name for the target." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationTargetSettings, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"LocalizationTargetSettings",
		sizeof(FLocalizationTargetSettings),
		alignof(FLocalizationTargetSettings),
		Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_Hash() { return 1450462675U; }
class UScriptStruct* FCultureStatistics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCultureStatistics, Z_Construct_UPackage__Script_Localization(), TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FCultureStatistics>()
{
	return FCultureStatistics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCultureStatistics(FCultureStatistics::StaticStruct, TEXT("/Script/Localization"), TEXT("CultureStatistics"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics
{
	FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CultureStatistics")),new UScriptStruct::TCppStructOps<FCultureStatistics>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFCultureStatistics;
	struct Z_Construct_UScriptStruct_FCultureStatistics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WordCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WordCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CultureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCultureStatistics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCultureStatistics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The estimated number of words that have been localized for this culture." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount = { "WordCount", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCultureStatistics, WordCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName_MetaData[] = {
		{ "Category", "Culture" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The ISO name for this culture." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName = { "CultureName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCultureStatistics, CultureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"CultureStatistics",
		sizeof(FCultureStatistics),
		alignof(FCultureStatistics),
		Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCultureStatistics_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCultureStatistics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_Hash() { return 3223205983U; }
class UScriptStruct* FLocalizationImportDialogueSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationImportDialogueSettings>()
{
	return FLocalizationImportDialogueSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationImportDialogueSettings(FLocalizationImportDialogueSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationImportDialogueSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationImportDialogueSettings")),new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings;
	struct Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportNativeAsSource_MetaData[];
#endif
		static void NewProp_bImportNativeAsSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportNativeAsSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedDialogueFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportedDialogueFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawAudioPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawAudioPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should the dialogue for the native culture be imported as if it were source audio? If false, the native culture dialogue will be imported as localized data for the native culture." },
	};
#endif
	void Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_SetBit(void* Obj)
	{
		((FLocalizationImportDialogueSettings*)Obj)->bImportNativeAsSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource = { "bImportNativeAsSource", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocalizationImportDialogueSettings), &Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Folder in which to create the generated sound waves. This is relative to the root of the L10N culture folder (or the root content folder if importing native dialogue as source dialogue)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder = { "ImportedDialogueFolder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationImportDialogueSettings, ImportedDialogueFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Path to the folder to import the audio from. This folder is expected to contain culture sub-folders, which in turn contain the raw WAV files to import." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath = { "RawAudioPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationImportDialogueSettings, RawAudioPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"LocalizationImportDialogueSettings",
		sizeof(FLocalizationImportDialogueSettings),
		alignof(FLocalizationImportDialogueSettings),
		Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Hash() { return 800752022U; }
class UScriptStruct* FLocalizationCompilationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationCompilationSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationCompilationSettings>()
{
	return FLocalizationCompilationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationCompilationSettings(FLocalizationCompilationSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationCompilationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationCompilationSettings")),new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings;
	struct Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipSourceCheck_MetaData[];
#endif
		static void NewProp_SkipSourceCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipSourceCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we skip the source check when compiling translations? This will allow translations whose source no longer matches the active source to still be used by the game at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_SetBit(void* Obj)
	{
		((FLocalizationCompilationSettings*)Obj)->SkipSourceCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck = { "SkipSourceCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocalizationCompilationSettings), &Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"LocalizationCompilationSettings",
		sizeof(FLocalizationCompilationSettings),
		alignof(FLocalizationCompilationSettings),
		Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Hash() { return 2369337531U; }
class UScriptStruct* FLocalizationExportingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationExportingSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationExportingSettings>()
{
	return FLocalizationExportingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationExportingSettings(FLocalizationExportingSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationExportingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationExportingSettings")),new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings;
	struct Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldAddSourceLocationsAsComments_MetaData[];
#endif
		static void NewProp_ShouldAddSourceLocationsAsComments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldAddSourceLocationsAsComments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldPersistCommentsOnExport_MetaData[];
#endif
		static void NewProp_ShouldPersistCommentsOnExport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldPersistCommentsOnExport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapseMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollapseMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollapseMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_MetaData[] = {
		{ "Category", "Comments" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location." },
	};
#endif
	void Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_SetBit(void* Obj)
	{
		((FLocalizationExportingSettings*)Obj)->ShouldAddSourceLocationsAsComments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments = { "ShouldAddSourceLocationsAsComments", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocalizationExportingSettings), &Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_MetaData[] = {
		{ "Category", "Comments" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields." },
	};
#endif
	void Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_SetBit(void* Obj)
	{
		((FLocalizationExportingSettings*)Obj)->ShouldPersistCommentsOnExport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport = { "ShouldPersistCommentsOnExport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocalizationExportingSettings), &Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_MetaData[] = {
		{ "Category", "Collapsing" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "How should we collapse down text when exporting to PO?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode = { "CollapseMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationExportingSettings, CollapseMode), Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"LocalizationExportingSettings",
		sizeof(FLocalizationExportingSettings),
		alignof(FLocalizationExportingSettings),
		Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_Hash() { return 914061533U; }
class UScriptStruct* FGatherTextFromMetaDataConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromMetaDataConfiguration>()
{
	return FGatherTextFromMetaDataConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromMetaDataConfiguration(FGatherTextFromMetaDataConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromMetaDataConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromMetaDataConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration;
	struct Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[];
#endif
		static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySpecifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeySpecifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeySpecifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
	{
		((FGatherTextFromMetaDataConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromMetaDataConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_MetaData[] = {
		{ "Category", "MetaData" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Specifications for how to gather text from specific metadata keys." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications = { "KeySpecifications", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, KeySpecifications), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_Inner = { "KeySpecifications", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns will be excluded from gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, ExcludePathWildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, IncludePathWildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_Inner = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, metadata will be gathered according to this configuration." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FGatherTextFromMetaDataConfiguration*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromMetaDataConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextFromMetaDataConfiguration",
		sizeof(FGatherTextFromMetaDataConfiguration),
		alignof(FGatherTextFromMetaDataConfiguration),
		Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Hash() { return 3955241498U; }
class UScriptStruct* FMetaDataKeyGatherSpecification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataKeyGatherSpecification>()
{
	return FMetaDataKeyGatherSpecification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyGatherSpecification(FMetaDataKeyGatherSpecification::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyGatherSpecification"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyGatherSpecification")),new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification;
	struct Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextKeyPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextKeyPattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The pattern which will be formatted to form the localization key for the metadata value gathered as text.\n      Placeholder - Description\n      {FieldPath} - The fully qualified name of the object upon which the metadata resides.\n      {MetaDataValue} - The value associated with the metadata key." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern = { "TextKeyPattern", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextKeyPattern), Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The localization namespace in which the gathered text will be output." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace = { "TextNamespace", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The metadata key for which values will be gathered as text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, MetaDataKey), Z_Construct_UScriptStruct_FMetaDataKeyName, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"MetaDataKeyGatherSpecification",
		sizeof(FMetaDataKeyGatherSpecification),
		alignof(FMetaDataKeyGatherSpecification),
		Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Hash() { return 925581713U; }
class UScriptStruct* FMetaDataKeyName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyName, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataKeyName>()
{
	return FMetaDataKeyName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyName(FMetaDataKeyName::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyName"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyName")),new UScriptStruct::TCppStructOps<FMetaDataKeyName>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName;
	struct Z_Construct_UScriptStruct_FMetaDataKeyName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaDataKeyName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"MetaDataKeyName",
		sizeof(FMetaDataKeyName),
		alignof(FMetaDataKeyName),
		Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_Hash() { return 2578920007U; }
class UScriptStruct* FMetaDataTextKeyPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataTextKeyPattern>()
{
	return FMetaDataTextKeyPattern::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataTextKeyPattern(FMetaDataTextKeyPattern::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataTextKeyPattern"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataTextKeyPattern")),new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern;
	struct Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaDataTextKeyPattern, Pattern), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"MetaDataTextKeyPattern",
		sizeof(FMetaDataTextKeyPattern),
		alignof(FMetaDataTextKeyPattern),
		Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Hash() { return 3541429914U; }
class UScriptStruct* FGatherTextFromPackagesConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromPackagesConfiguration>()
{
	return FGatherTextFromPackagesConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromPackagesConfiguration(FGatherTextFromPackagesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromPackagesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromPackagesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration;
	struct Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipGatherCache_MetaData[];
#endif
		static void NewProp_SkipGatherCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipGatherCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[];
#endif
		static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Collections;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Collections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileExtensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we ignore the cached text in the package header and perform a full package load instead?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_SetBit(void* Obj)
	{
		((FGatherTextFromPackagesConfiguration*)Obj)->SkipGatherCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache = { "SkipGatherCache", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
	{
		((FGatherTextFromPackagesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages in these collections may be processed for gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, Collections), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose names match these wildcard patterns may be processed for text to gather." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions = { "FileExtensions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, FileExtensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_Inner = { "FileExtensions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose paths match these wildcard patterns will be excluded from gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, ExcludePathWildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, IncludePathWildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_Inner = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, text from packages will be gathered according to this configuration." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FGatherTextFromPackagesConfiguration*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextFromPackagesConfiguration",
		sizeof(FGatherTextFromPackagesConfiguration),
		alignof(FGatherTextFromPackagesConfiguration),
		Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Hash() { return 4173195579U; }
class UScriptStruct* FGatherTextFromTextFilesConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromTextFilesConfiguration>()
{
	return FGatherTextFromTextFilesConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromTextFilesConfiguration(FGatherTextFromTextFilesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromTextFilesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromTextFilesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration;
	struct Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[];
#endif
		static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileExtensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchDirectories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchDirectories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchDirectories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
	{
		((FGatherTextFromTextFilesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromTextFilesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text files whose names match these wildcard patterns may be parsed for text to gather." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions = { "FileExtensions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, FileExtensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_Inner = { "FileExtensions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text files whose paths match these wildcard patterns will be excluded from gathering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, ExcludePathWildcards), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories = { "SearchDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, SearchDirectories), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_Inner = { "SearchDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGatherTextSearchDirectory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, text from text files will be gathered according to this configuration." },
	};
#endif
	void Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FGatherTextFromTextFilesConfiguration*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGatherTextFromTextFilesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextFromTextFilesConfiguration",
		sizeof(FGatherTextFromTextFilesConfiguration),
		alignof(FGatherTextFromTextFilesConfiguration),
		Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Hash() { return 1701348870U; }
class UScriptStruct* FGatherTextFileExtension::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFileExtension, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFileExtension>()
{
	return FGatherTextFileExtension::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFileExtension(FGatherTextFileExtension::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFileExtension"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFileExtension")),new UScriptStruct::TCppStructOps<FGatherTextFileExtension>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension;
	struct Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFileExtension>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextFileExtension, Pattern), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextFileExtension",
		sizeof(FGatherTextFileExtension),
		alignof(FGatherTextFileExtension),
		Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_Hash() { return 924162979U; }
class UScriptStruct* FGatherTextExcludePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextExcludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextExcludePath>()
{
	return FGatherTextExcludePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextExcludePath(FGatherTextExcludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextExcludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextExcludePath")),new UScriptStruct::TCppStructOps<FGatherTextExcludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath;
	struct Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextExcludePath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextExcludePath, Pattern), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextExcludePath, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextExcludePath",
		sizeof(FGatherTextExcludePath),
		alignof(FGatherTextExcludePath),
		Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_Hash() { return 1433468432U; }
class UScriptStruct* FGatherTextIncludePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextIncludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextIncludePath>()
{
	return FGatherTextIncludePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextIncludePath(FGatherTextIncludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextIncludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextIncludePath")),new UScriptStruct::TCppStructOps<FGatherTextIncludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath;
	struct Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextIncludePath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextIncludePath, Pattern), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextIncludePath, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextIncludePath",
		sizeof(FGatherTextIncludePath),
		alignof(FGatherTextIncludePath),
		Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_Hash() { return 1962866467U; }
class UScriptStruct* FGatherTextSearchDirectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextSearchDirectory, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Hash());
	}
	return Singleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextSearchDirectory>()
{
	return FGatherTextSearchDirectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextSearchDirectory(FGatherTextSearchDirectory::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextSearchDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextSearchDirectory")),new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory;
	struct Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextSearchDirectory, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGatherTextSearchDirectory, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		&NewStructOps,
		"GatherTextSearchDirectory",
		sizeof(FGatherTextSearchDirectory),
		alignof(FGatherTextSearchDirectory),
		Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Hash() { return 2062099844U; }
	void ULocalizationTarget::StaticRegisterNativesULocalizationTarget()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister()
	{
		return ULocalizationTarget::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizationTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizationTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationTargetTypes.h" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationTarget, Settings), Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizationTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationTarget_Statics::ClassParams = {
		&ULocalizationTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizationTarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizationTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizationTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationTarget, 851655491);
	template<> LOCALIZATION_API UClass* StaticClass<ULocalizationTarget>()
	{
		return ULocalizationTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTarget(Z_Construct_UClass_ULocalizationTarget, &ULocalizationTarget::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTarget);
	void ULocalizationTargetSet::StaticRegisterNativesULocalizationTargetSet()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister()
	{
		return ULocalizationTargetSet::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizationTargetSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizationTargetSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationTargetSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationTargetTypes.h" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects = { "TargetObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalizationTargetSet, TargetObjects), METADATA_PARAMS(Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_Inner = { "TargetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULocalizationTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizationTargetSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationTargetSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationTargetSet_Statics::ClassParams = {
		&ULocalizationTargetSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizationTargetSet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizationTargetSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizationTargetSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationTargetSet, 1721038173);
	template<> LOCALIZATION_API UClass* StaticClass<ULocalizationTargetSet>()
	{
		return ULocalizationTargetSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTargetSet(Z_Construct_UClass_ULocalizationTargetSet, &ULocalizationTargetSet::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTargetSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTargetSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
