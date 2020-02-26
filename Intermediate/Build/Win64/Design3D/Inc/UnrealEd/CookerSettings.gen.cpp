// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/CookerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookerSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode();
	UNREALED_API UClass* Z_Construct_UClass_UCookerSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* EBlueprintComponentDataCookingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EBlueprintComponentDataCookingMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EBlueprintComponentDataCookingMethod>()
	{
		return EBlueprintComponentDataCookingMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintComponentDataCookingMethod(EBlueprintComponentDataCookingMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EBlueprintComponentDataCookingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod_Hash() { return 549010611U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintComponentDataCookingMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintComponentDataCookingMethod::Disabled", (int64)EBlueprintComponentDataCookingMethod::Disabled },
				{ "EBlueprintComponentDataCookingMethod::AllBlueprints", (int64)EBlueprintComponentDataCookingMethod::AllBlueprints },
				{ "EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly", (int64)EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllBlueprints.ToolTip", "Generate optimized component data for all Blueprint types. This option will require the most additional memory." },
				{ "Disabled.ToolTip", "Do not generate optimized component data. No additional memory will be used." },
				{ "EnabledBlueprintsOnly.ToolTip", "Generate optimized component data only for Blueprint types that have explicitly enabled this feature in the class settings." },
				{ "ModuleRelativePath", "Public/CookerSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EBlueprintComponentDataCookingMethod",
				"EBlueprintComponentDataCookingMethod",
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
	static UEnum* ECookProgressDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECookProgressDisplayMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECookProgressDisplayMode>()
	{
		return ECookProgressDisplayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECookProgressDisplayMode(ECookProgressDisplayMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ECookProgressDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode_Hash() { return 2558137173U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECookProgressDisplayMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECookProgressDisplayMode::Nothing", (int64)ECookProgressDisplayMode::Nothing },
				{ "ECookProgressDisplayMode::RemainingPackages", (int64)ECookProgressDisplayMode::RemainingPackages },
				{ "ECookProgressDisplayMode::PackageNames", (int64)ECookProgressDisplayMode::PackageNames },
				{ "ECookProgressDisplayMode::NamesAndRemainingPackages", (int64)ECookProgressDisplayMode::NamesAndRemainingPackages },
				{ "ECookProgressDisplayMode::Max", (int64)ECookProgressDisplayMode::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "Max.ToolTip", "MAX - invalid" },
				{ "ModuleRelativePath", "Public/CookerSettings.h" },
				{ "NamesAndRemainingPackages.ToolTip", "Display the number of remaining packages and package names" },
				{ "Nothing.ToolTip", "Don't display any progress messages" },
				{ "PackageNames.ToolTip", "Display names of cooked packages" },
				{ "RemainingPackages.ToolTip", "Display the number of remaining packages" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ECookProgressDisplayMode",
				"ECookProgressDisplayMode",
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
	void UCookerSettings::StaticRegisterNativesUCookerSettings()
	{
	}
	UClass* Z_Construct_UClass_UCookerSettings_NoRegister()
	{
		return UCookerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCookerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookBlueprintComponentTemplateData_MetaData[];
#endif
		static void NewProp_bCookBlueprintComponentTemplateData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookBlueprintComponentTemplateData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCookedDataInEditorBuilds_MetaData[];
#endif
		static void NewProp_bAllowCookedDataInEditorBuilds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCookedDataInEditorBuilds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultASTCQualityBySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultASTCQualityBySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultASTCQualityBySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultASTCQualityBySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPVRTCQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPVRTCQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionedIntRValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VersionedIntRValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionedIntRValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulesExcludedOnDedicatedClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModulesExcludedOnDedicatedClient;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModulesExcludedOnDedicatedClient_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassesExcludedOnDedicatedClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassesExcludedOnDedicatedClient;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassesExcludedOnDedicatedClient_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulesExcludedOnDedicatedServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModulesExcludedOnDedicatedServer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModulesExcludedOnDedicatedServer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassesExcludedOnDedicatedServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassesExcludedOnDedicatedServer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassesExcludedOnDedicatedServer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintComponentDataCookingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintComponentDataCookingMethod;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BlueprintComponentDataCookingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompileBlueprintsInDevelopmentMode_MetaData[];
#endif
		static void NewProp_bCompileBlueprintsInDevelopmentMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompileBlueprintsInDevelopmentMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData[];
#endif
		static void NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreScriptPackagesOutOfDateForIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData[];
#endif
		static void NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreIniSettingsOutOfDateForIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookProgressDisplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CookProgressDisplayMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookProgressDisplayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnTheFlyForLaunchOn_MetaData[];
#endif
		static void NewProp_bCookOnTheFlyForLaunchOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnTheFlyForLaunchOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIterativeCookingForFileCookContent_MetaData[];
#endif
		static void NewProp_bIterativeCookingForFileCookContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIterativeCookingForFileCookContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIterativeCookingForLaunchOn_MetaData[];
#endif
		static void NewProp_bIterativeCookingForLaunchOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIterativeCookingForLaunchOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBuildDDCInBackground_MetaData[];
#endif
		static void NewProp_bEnableBuildDDCInBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBuildDDCInBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCookOnTheSide_MetaData[];
#endif
		static void NewProp_bEnableCookOnTheSide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCookOnTheSide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cooker" },
		{ "IncludePath", "CookerSettings.h" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Various cooker settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Deprecated. Use BlueprintComponentDataCookingMethod instead." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCookBlueprintComponentTemplateData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData = { "bCookBlueprintComponentTemplateData", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConsoleVariable", "cook.AllowCookedDataInEditorBuilds" },
		{ "DisplayName", "Allow Cooked Content In The Editor" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "If true, the editor will be able to open cooked assets (limited to a subset of supported asset types)." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bAllowCookedDataInEditorBuilds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds = { "bAllowCookedDataInEditorBuilds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData[] = {
		{ "Category", "Textures" },
		{ "DisplayName", "ASTC Compression Quality vs Size (0-4, 0 is smallest)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Quality of 0 means smallest (12x12 block size), 4 means best (4x4 block size)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize = { "DefaultASTCQualityBySize", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, DefaultASTCQualityBySize), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData[] = {
		{ "Category", "Textures" },
		{ "DisplayName", "ASTC Compression Quality vs Speed (0-3, 0 is fastest)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Quality of 0 means fastest, 3 means best quality" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed = { "DefaultASTCQualityBySpeed", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, DefaultASTCQualityBySpeed), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultPVRTCQuality_MetaData[] = {
		{ "Category", "Textures" },
		{ "DisplayName", "PVRTC Compression Quality (0-4, 0 is fastest)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Quality of 0 means fastest, 4 means best quality" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultPVRTCQuality = { "DefaultPVRTCQuality", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, DefaultPVRTCQuality), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultPVRTCQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultPVRTCQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "r values that need to be versioned" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "List of r values that need to be versioned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues = { "VersionedIntRValues", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, VersionedIntRValues), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_Inner = { "VersionedIntRValues", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Modules excluded when cooking for dedicated client" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "List of module names to exclude when cooking for dedicated client" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient = { "ModulesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, ModulesExcludedOnDedicatedClient), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_Inner = { "ModulesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Classes excluded when cooking for dedicated client" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "List of class names to exclude when cooking for dedicated client" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient = { "ClassesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, ClassesExcludedOnDedicatedClient), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_Inner = { "ClassesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Modules excluded when cooking for dedicated server" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "List of module names to exclude when cooking for dedicated server" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer = { "ModulesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, ModulesExcludedOnDedicatedServer), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_Inner = { "ModulesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Classes excluded when cooking for dedicated server" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "List of class names to exclude when cooking for dedicated server" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer = { "ClassesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, ClassesExcludedOnDedicatedServer), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_Inner = { "ClassesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Generate optimized Blueprint component data" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Generate optimized component data to speed up Blueprint construction at runtime. This option can increase the overall Blueprint memory usage in a cooked build. Requires Event-Driven Loading (EDL), which is enabled by default." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod = { "BlueprintComponentDataCookingMethod", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, BlueprintComponentDataCookingMethod), Z_Construct_UEnum_UnrealEd_EBlueprintComponentDataCookingMethod, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Whether or not to compile Blueprints in development mode when cooking." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCompileBlueprintsInDevelopmentMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode = { "bCompileBlueprintsInDevelopmentMode", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Ignore native header file changes when doing iterative cooking, either in editor or out of editor" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIgnoreScriptPackagesOutOfDateForIteration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration = { "bIgnoreScriptPackagesOutOfDateForIteration", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Ignore ini changes when doing iterative cooking, either in editor or out of editor" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIgnoreIniSettingsOutOfDateForIteration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration = { "bIgnoreIniSettingsOutOfDateForIteration", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ConsoleVariable", "cook.displaymode" },
		{ "DisplayName", "Cooker Progress Display Mode" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Controls log output of the cooker" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode = { "CookProgressDisplayMode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerSettings, CookProgressDisplayMode), Z_Construct_UEnum_UnrealEd_ECookProgressDisplayMode, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Cooking on the fly when launching from the editor (launch on)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Enable -cookonthefly for launch on" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCookOnTheFlyForLaunchOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn = { "bCookOnTheFlyForLaunchOn", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Iterative cooking for the File->Cook Content menu item" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Enable -iterate for launch on" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIterativeCookingForFileCookContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent = { "bIterativeCookingForFileCookContent", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Iterative cooking for builds launched from the editor (launch on)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
		{ "ToolTip", "Enable -iterate for launch on" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIterativeCookingForLaunchOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn = { "bIterativeCookingForLaunchOn", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Generate DDC data in background for desired launch on platform (speeds up launch on)" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bEnableBuildDDCInBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground = { "bEnableBuildDDCInBackground", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable cooking via network in the background of the editor, launch on uses this setting, requires device to have network access to editor" },
		{ "ModuleRelativePath", "Public/CookerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bEnableCookOnTheSide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide = { "bEnableCookOnTheSide", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultPVRTCQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookerSettings_Statics::ClassParams = {
		&UCookerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCookerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookerSettings, 3525241717);
	template<> UNREALED_API UClass* StaticClass<UCookerSettings>()
	{
		return UCookerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookerSettings(Z_Construct_UClass_UCookerSettings, &UCookerSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCookerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
