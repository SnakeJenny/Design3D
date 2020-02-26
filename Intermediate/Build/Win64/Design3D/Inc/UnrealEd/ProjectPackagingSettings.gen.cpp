// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/ProjectPackagingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPackagingSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations();
	UNREALED_API UClass* Z_Construct_UClass_UProjectPackagingSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UProjectPackagingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* EProjectPackagingBlueprintNativizationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EProjectPackagingBlueprintNativizationMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingBlueprintNativizationMethod>()
	{
		return EProjectPackagingBlueprintNativizationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProjectPackagingBlueprintNativizationMethod(EProjectPackagingBlueprintNativizationMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EProjectPackagingBlueprintNativizationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod_Hash() { return 2664473016U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProjectPackagingBlueprintNativizationMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProjectPackagingBlueprintNativizationMethod::Disabled", (int64)EProjectPackagingBlueprintNativizationMethod::Disabled },
				{ "EProjectPackagingBlueprintNativizationMethod::Inclusive", (int64)EProjectPackagingBlueprintNativizationMethod::Inclusive },
				{ "EProjectPackagingBlueprintNativizationMethod::Exclusive", (int64)EProjectPackagingBlueprintNativizationMethod::Exclusive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disabled.ToolTip", "Disable Blueprint nativization (default)." },
				{ "Exclusive.ToolTip", "Enable nativization for selected Blueprint assets only." },
				{ "Inclusive.ToolTip", "Enable nativization for all Blueprint assets." },
				{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
				{ "ToolTip", "Enumerates the available methods for Blueprint nativization during project packaging." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EProjectPackagingBlueprintNativizationMethod",
				"EProjectPackagingBlueprintNativizationMethod",
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
	static UEnum* EProjectPackagingBuild_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EProjectPackagingBuild"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingBuild>()
	{
		return EProjectPackagingBuild_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProjectPackagingBuild(EProjectPackagingBuild_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EProjectPackagingBuild"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild_Hash() { return 3562416687U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProjectPackagingBuild"), 0, Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProjectPackagingBuild::Always", (int64)EProjectPackagingBuild::Always },
				{ "EProjectPackagingBuild::Never", (int64)EProjectPackagingBuild::Never },
				{ "EProjectPackagingBuild::IfProjectHasCode", (int64)EProjectPackagingBuild::IfProjectHasCode },
				{ "EProjectPackagingBuild::IfEditorWasBuiltLocally", (int64)EProjectPackagingBuild::IfEditorWasBuiltLocally },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.DisplayName", "Always" },
				{ "Always.ToolTip", "Always build." },
				{ "IfEditorWasBuiltLocally.DisplayName", "If running a locally built editor" },
				{ "IfEditorWasBuiltLocally.ToolTip", "If we're not packaging from a promoted build." },
				{ "IfProjectHasCode.DisplayName", "If project has code, or running a locally built editor" },
				{ "IfProjectHasCode.ToolTip", "Default (if the Never build." },
				{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
				{ "Never.DisplayName", "Never" },
				{ "Never.ToolTip", "Never build." },
				{ "ToolTip", "Determines whether to build the executable when packaging. Note the equivalence between these settings and EPlayOnBuildMode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EProjectPackagingBuild",
				"EProjectPackagingBuild",
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
	static UEnum* EProjectPackagingInternationalizationPresets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EProjectPackagingInternationalizationPresets"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingInternationalizationPresets>()
	{
		return EProjectPackagingInternationalizationPresets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProjectPackagingInternationalizationPresets(EProjectPackagingInternationalizationPresets_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EProjectPackagingInternationalizationPresets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets_Hash() { return 810188958U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProjectPackagingInternationalizationPresets"), 0, Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProjectPackagingInternationalizationPresets::English", (int64)EProjectPackagingInternationalizationPresets::English },
				{ "EProjectPackagingInternationalizationPresets::EFIGS", (int64)EProjectPackagingInternationalizationPresets::EFIGS },
				{ "EProjectPackagingInternationalizationPresets::EFIGSCJK", (int64)EProjectPackagingInternationalizationPresets::EFIGSCJK },
				{ "EProjectPackagingInternationalizationPresets::CJK", (int64)EProjectPackagingInternationalizationPresets::CJK },
				{ "EProjectPackagingInternationalizationPresets::All", (int64)EProjectPackagingInternationalizationPresets::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "All known cultures." },
				{ "CJK.ToolTip", "Chinese, Japanese, Korean." },
				{ "EFIGS.ToolTip", "English, French, Italian, German, Spanish." },
				{ "EFIGSCJK.ToolTip", "English, French, Italian, German, Spanish, Chinese, Japanese, Korean." },
				{ "English.ToolTip", "English only." },
				{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
				{ "ToolTip", "Enumerates the available internationalization data presets for project packaging." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EProjectPackagingInternationalizationPresets",
				"EProjectPackagingInternationalizationPresets",
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
	static UEnum* EProjectPackagingBuildConfigurations_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EProjectPackagingBuildConfigurations"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingBuildConfigurations>()
	{
		return EProjectPackagingBuildConfigurations_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProjectPackagingBuildConfigurations(EProjectPackagingBuildConfigurations_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EProjectPackagingBuildConfigurations"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations_Hash() { return 3050522931U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProjectPackagingBuildConfigurations"), 0, Get_Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PPBC_DebugGame", (int64)PPBC_DebugGame },
				{ "PPBC_DebugGameClient", (int64)PPBC_DebugGameClient },
				{ "PPBC_Development", (int64)PPBC_Development },
				{ "PPBC_DevelopmentClient", (int64)PPBC_DevelopmentClient },
				{ "PPBC_Shipping", (int64)PPBC_Shipping },
				{ "PPBC_ShippingClient", (int64)PPBC_ShippingClient },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
				{ "PPBC_DebugGame.DisplayName", "DebugGame" },
				{ "PPBC_DebugGame.ToolTip", "Debug configuration." },
				{ "PPBC_DebugGameClient.DisplayName", "DebugGame Client" },
				{ "PPBC_DebugGameClient.ToolTip", "Debug Client configuration." },
				{ "PPBC_Development.DisplayName", "Development" },
				{ "PPBC_Development.ToolTip", "Development configuration." },
				{ "PPBC_DevelopmentClient.DisplayName", "Development Client" },
				{ "PPBC_DevelopmentClient.ToolTip", "Development Client configuration." },
				{ "PPBC_Shipping.DisplayName", "Shipping" },
				{ "PPBC_Shipping.ToolTip", "Shipping configuration." },
				{ "PPBC_ShippingClient.DisplayName", "Shipping Client" },
				{ "PPBC_ShippingClient.ToolTip", "Shipping Client configuration." },
				{ "ToolTip", "Enumerates the available build configurations for project packaging." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EProjectPackagingBuildConfigurations",
				"EProjectPackagingBuildConfigurations",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UProjectPackagingSettings::StaticRegisterNativesUProjectPackagingSettings()
	{
	}
	UClass* Z_Construct_UClass_UProjectPackagingSettings_NoRegister()
	{
		return UProjectPackagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProjectPackagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNativizeOnlySelectedBlueprints_MetaData[];
#endif
		static void NewProp_bNativizeOnlySelectedBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNativizeOnlySelectedBlueprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNativizeBlueprintAssets_MetaData[];
#endif
		static void NewProp_bNativizeBlueprintAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNativizeBlueprintAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFSServer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsUFSServer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFS;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsUFS_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsUFS;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsUFS_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToNeverCook_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToNeverCook;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToNeverCook_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysCook_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysCook;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysCook_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapsToCook_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapsToCook;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapsToCook_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyDownloaderPakFileFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EarlyDownloaderPakFileFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyDownloaderPakFileFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedChunkWildcard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompressedChunkWildcard;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompressedChunkWildcard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonUFSMovies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonUFSMovies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NonUFSMovies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UFSMovies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UFSMovies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UFSMovies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipMovies_MetaData[];
#endif
		static void NewProp_bSkipMovies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipMovies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipEditorContent_MetaData[];
#endif
		static void NewProp_bSkipEditorContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEditorContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateEarlyDownloaderPakFile_MetaData[];
#endif
		static void NewProp_GenerateEarlyDownloaderPakFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateEarlyDownloaderPakFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEncryptPakIndex_MetaData[];
#endif
		static void NewProp_bEncryptPakIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEncryptPakIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEncryptIniFiles_MetaData[];
#endif
		static void NewProp_bEncryptIniFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEncryptIniFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[];
#endif
		static void NewProp_bCompressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookMapsOnly_MetaData[];
#endif
		static void NewProp_bCookMapsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookMapsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookAll_MetaData[];
#endif
		static void NewProp_bCookAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookAll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CulturesToStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CulturesToStage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CulturesToStage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternationalizationPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InternationalizationPreset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InternationalizationPreset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeCrashReporter_MetaData[];
#endif
		static void NewProp_IncludeCrashReporter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeCrashReporter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplocalPrerequisitesDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplocalPrerequisitesDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedMaterialNativeLibraries_MetaData[];
#endif
		static void NewProp_bSharedMaterialNativeLibraries_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedMaterialNativeLibraries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShareMaterialShaderCode_MetaData[];
#endif
		static void NewProp_bShareMaterialShaderCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShareMaterialShaderCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeAppLocalPrerequisites_MetaData[];
#endif
		static void NewProp_IncludeAppLocalPrerequisites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeAppLocalPrerequisites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePrerequisites_MetaData[];
#endif
		static void NewProp_IncludePrerequisites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludePrerequisites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HttpChunkInstallDataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HttpChunkInstallDataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakFileAdditionalCompressionOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileAdditionalCompressionOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakFileCompressionFormats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileCompressionFormats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HttpChunkInstallDataDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HttpChunkInstallDataDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildHttpChunkInstallData_MetaData[];
#endif
		static void NewProp_bBuildHttpChunkInstallData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildHttpChunkInstallData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MaxChunkSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceOneChunkPerFile_MetaData[];
#endif
		static void NewProp_bForceOneChunkPerFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceOneChunkPerFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChunkHardReferencesOnly_MetaData[];
#endif
		static void NewProp_bChunkHardReferencesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChunkHardReferencesOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNoChunks_MetaData[];
#endif
		static void NewProp_bGenerateNoChunks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNoChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateChunks_MetaData[];
#endif
		static void NewProp_bGenerateChunks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePakFile_MetaData[];
#endif
		static void NewProp_UsePakFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePakFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData[];
#endif
		static void NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeMonolithicEngineHeadersInNativizedCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData[];
#endif
		static void NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeNativizedAssetsInProjectGeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativizeBlueprintAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NativizeBlueprintAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativizeBlueprintAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintNativizationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintNativizationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintNativizationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeDebugFiles_MetaData[];
#endif
		static void NewProp_IncludeDebugFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeDebugFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForDistribution_MetaData[];
#endif
		static void NewProp_ForDistribution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullRebuild_MetaData[];
#endif
		static void NewProp_FullRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StagingDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StagingDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Build_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Build;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Build_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectPackagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/ProjectPackagingSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bNativizeOnlySelectedBlueprints_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints = { "bNativizeOnlySelectedBlueprints", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bNativizeBlueprintAssets_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets = { "bNativizeBlueprintAssets", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Additional Non-Asset Directories To Copy for dedicated server only" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be copied when packaging your project for a dedicated server, but are not supposed to be part of the .pak file\nThis is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer = { "DirectoriesToAlwaysStageAsNonUFSServer", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsNonUFSServer), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner = { "DirectoriesToAlwaysStageAsNonUFSServer", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Additional Non-Asset Directories to Package for dedicated server only" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be added to the .pak file for a dedicated server (if using a .pak file; otherwise they're copied as individual files)\nThis is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer = { "DirectoriesToAlwaysStageAsUFSServer", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsUFSServer), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner = { "DirectoriesToAlwaysStageAsUFSServer", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Additional Non-Asset Directories To Copy" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be copied when packaging your project, but are not supposed to be part of the .pak file\nThis is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS = { "DirectoriesToAlwaysStageAsNonUFS", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsNonUFS), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner = { "DirectoriesToAlwaysStageAsNonUFS", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Additional Non-Asset Directories to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\nThis is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS = { "DirectoriesToAlwaysStageAsUFS", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsUFS), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_Inner = { "DirectoriesToAlwaysStageAsUFS", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Directories to never cook" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Directories containing .uasset files that should never be cooked even if they are referenced by your project\nThese paths are stored relative to the project root so they can start with /game, /engine, or /pluginname" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook = { "DirectoriesToNeverCook", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToNeverCook), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_Inner = { "DirectoriesToNeverCook", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Additional Asset Directories to Cook" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Directories containing .uasset files that should always be cooked regardless of whether they're referenced by anything in your project\nThese paths are stored relative to the project root so they can start with /game, /engine, or /pluginname" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook = { "DirectoriesToAlwaysCook", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysCook), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_Inner = { "DirectoriesToAlwaysCook", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "List of maps to include in a packaged build" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of maps to include when no other map list is specified on commandline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook = { "MapsToCook", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, MapsToCook), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_Inner = { "MapsToCook", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "List of specific files to include with GenerateEarlyDownloaderPakFile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles = { "EarlyDownloaderPakFileFiles", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, EarlyDownloaderPakFileFiles_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_Inner = { "EarlyDownloaderPakFileFiles", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If set, only these specific pak files will be compressed. This should take the form of \"*pakchunk0*\"\nThis can be set in a platform-specific ini file" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard = { "CompressedChunkWildcard", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, CompressedChunkWildcard), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_Inner = { "CompressedChunkWildcard", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Specific movies to Copy" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If SkipMovies is true, these specific movies will be copied when packaging your project, but are not supposed to be part of the .pak file\nThis should be the name with no extension" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies = { "NonUFSMovies", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, NonUFSMovies), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_Inner = { "NonUFSMovies", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Specific movies to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If SkipMovies is true, these specific movies will still be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\nThis should be the name with no extension" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies = { "UFSMovies", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, UFSMovies), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_Inner = { "UFSMovies", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Exclude movie files when staging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Don't include movies by default when staging/packaging\nSpecific movies can be specified below, and this can be in a platform ini" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSkipMovies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies = { "bSkipMovies", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Exclude editor content when cooking" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Don't include content in any editor folders when cooking.  This can cause issues with missing content in cooked games if the content is being used." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSkipEditorContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent = { "bSkipEditorContent", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Enable the early downloader pak file pakearly.txt\nThis has been superseded by the functionality in DefaultPakFileRules.ini" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->GenerateEarlyDownloaderPakFile_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile = { "GenerateEarlyDownloaderPakFile", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Encrypt the pak index\nNOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bEncryptPakIndex_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex = { "bEncryptPakIndex", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Encrypt ini files inside of the pak file\nNOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bEncryptIniFiles_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles = { "bEncryptIniFiles", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Create compressed cooked packages" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Create compressed cooked packages (decreased deployment size)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCompressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Cook only maps (this only affects cookall)" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cook only maps (this only affects the cookall flag)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCookMapsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly = { "bCookMapsOnly", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Cook everything in the project content directory (ignore list of maps below)" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cook all things in the project content directory" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCookAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll = { "bCookAll", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Localizations to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cultures whose data should be cooked, staged, and packaged." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage = { "CulturesToStage", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, CulturesToStage), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_Inner = { "CulturesToStage", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Internationalization Support" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Predefined sets of culture whose internationalization data should be packaged." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset = { "InternationalizationPreset", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, InternationalizationPreset), Z_Construct_UEnum_UnrealEd_EProjectPackagingInternationalizationPresets, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include the crash reporter in the packaged project.\nThis is included by default for Blueprint based projects, but can optionally be disabled." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeCrashReporter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter = { "IncludeCrashReporter", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A directory containing additional prerequisite packages that should be staged in the executable directory. Can be relative to $(EngineDir) or $(ProjectDir)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory = { "ApplocalPrerequisitesDirectory", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, ApplocalPrerequisitesDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bShareMaterialShaderCode" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "By default shader shader code gets saved into individual platform agnostic files,\nenabling this option will use the platform-specific library format if and only if one is available\nThis will reduce overall package size but might increase loading time" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSharedMaterialNativeLibraries = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries = { "bSharedMaterialNativeLibraries", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "By default shader code gets saved inline inside material assets,\nenabling this option will store only shader code once as individual files\nThis will reduce overall package size but might increase loading time" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bShareMaterialShaderCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode = { "bShareMaterialShaderCode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "DisplayName", "Include app-local prerequisites" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include prerequisites alongside the game executable." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeAppLocalPrerequisites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites = { "IncludeAppLocalPrerequisites", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "DisplayName", "Include prerequisites installer" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include an installer for prerequisites of packaged games, such as redistributable operating system components, on platforms that support it." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludePrerequisites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites = { "IncludePrerequisites", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Version name for HTTP Chunk Install Data." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion = { "HttpChunkInstallDataVersion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, HttpChunkInstallDataVersion), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileAdditionalCompressionOptions_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Pak File Compression Commandline Options" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A generic setting for allowing a project to control compression settings during .pak file compression. For instance, if using the Oodle plugin, you could use -oodlemethod=Selkie -oodlelevel=Optimal1" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileAdditionalCompressionOptions = { "PakFileAdditionalCompressionOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, PakFileAdditionalCompressionOptions), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileAdditionalCompressionOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileAdditionalCompressionOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileCompressionFormats_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Pak File Compression Format(s)" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A comma separated list of formats to use for .pak file compression. If more than one is specified, the list is in order of priority, with fallbacks to other formats\nin case of errors or unavailability of the format (plugin not enabled, etc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileCompressionFormats = { "PakFileCompressionFormats", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, PakFileCompressionFormats), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileCompressionFormats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileCompressionFormats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "When \"Build HTTP Chunk Install Data\" is enabled this is the directory where the data will be build to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory = { "HttpChunkInstallDataDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, HttpChunkInstallDataDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, will generate data for HTTP Chunk Installer. This data can be hosted on webserver to be installed at runtime. Requires \"Generate Chunks\" enabled." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bBuildHttpChunkInstallData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData = { "bBuildHttpChunkInstallData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If > 0 this sets a maximum size per chunk. Chunks larger than this size will be split into multiple pak files such as pakchunk0_s1\nThis can be set in platform specific game.ini files" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize = { "MaxChunkSize", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, MaxChunkSize), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If true, individual files are only allowed to be in a single chunk and it will assign it to the lowest number requested\nIf false, it may end up in multiple chunks if requested by the cooker" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bForceOneChunkPerFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile = { "bForceOneChunkPerFile", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Normally during chunk generation all dependencies of a package in a chunk will be pulled into that package's chunk.\nIf this is enabled then only hard dependencies are pulled in. Soft dependencies stay in their original chunk." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bChunkHardReferencesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly = { "bChunkHardReferencesOnly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, no platform will generate chunks, regardless of settings in platform-specific ini files." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bGenerateNoChunks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks = { "bGenerateNoChunks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, will generate pak file chunks.  Assets can be assigned to chunks in the editor or via a delegate (See ShooterGameDelegates.cpp).\nCan be used for streaming installs (PS4 Playgo, XboxOne Streaming Install, etc)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bGenerateChunks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks = { "bGenerateChunks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, all content will be put into a one or more .pak files instead of many individual files (default = enabled)." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->UsePakFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile = { "UsePakFile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Whether or not to exclude monolithic engine headers (e.g. Engine.h) in the generated code when nativizing Blueprint assets. This may improve C++ compiler performance if your game code does not depend on monolithic engine headers to build." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bExcludeMonolithicEngineHeadersInNativizedCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode = { "bExcludeMonolithicEngineHeadersInNativizedCode", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, the nativized assets code plugin will be added to the Visual Studio solution if it exists when regenerating the game project. Intended primarily to assist with debugging the target platform after cooking with nativization turned on." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bIncludeNativizedAssetsInProjectGeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration = { "bIncludeNativizedAssetsInProjectGeneration", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "List of Blueprint assets to nativize" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of Blueprints to include for nativization when using the exclusive method." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets = { "NativizeBlueprintAssets", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, NativizeBlueprintAssets), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_Inner = { "NativizeBlueprintAssets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, then the project's Blueprint assets (including structs and enums) will be intermediately converted into C++ and used in the packaged project (in place of the .uasset files)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod = { "BlueprintNativizationMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, BlueprintNativizationMethod), Z_Construct_UEnum_UnrealEd_EProjectPackagingBlueprintNativizationMethod, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, debug files will be included in the packaged game" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeDebugFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles = { "IncludeDebugFiles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, a distribution build will be created and the shipping configuration will be used\nIf disabled, a development build will be created\nDistribution builds are for publishing to the App Store" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->ForDistribution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution = { "ForDistribution", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, a full rebuild will be enforced each time the project is being packaged.\nIf disabled, only modified files will be built, which can improve iteration time.\nUnless you iterate on packaging, we recommend full rebuilds when packaging." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->FullRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild = { "FullRebuild", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_StagingDirectory_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The directory to which the packaged project will be copied." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_StagingDirectory = { "StagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, StagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_StagingDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_StagingDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The build configuration for which the project is packaged." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration = { "BuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, BuildConfiguration), Z_Construct_UEnum_UnrealEd_EProjectPackagingBuildConfigurations, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to build the game executable during packaging." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build = { "Build", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectPackagingSettings, Build), Z_Construct_UEnum_UnrealEd_EProjectPackagingBuild, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeOnlySelectedBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bNativizeBlueprintAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileAdditionalCompressionOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PakFileCompressionFormats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_StagingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectPackagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectPackagingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectPackagingSettings_Statics::ClassParams = {
		&UProjectPackagingSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectPackagingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectPackagingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectPackagingSettings, 22878264);
	template<> UNREALED_API UClass* StaticClass<UProjectPackagingSettings>()
	{
		return UProjectPackagingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectPackagingSettings(Z_Construct_UClass_UProjectPackagingSettings, &UProjectPackagingSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UProjectPackagingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectPackagingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
