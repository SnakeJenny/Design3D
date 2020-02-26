// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuminRuntimeSettings/Classes/LuminRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminRuntimeSettings() {}
// Cross Module References
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege();
	UPackage* Z_Construct_UPackage__Script_LuminRuntimeSettings();
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint();
	LUMINRUNTIMESETTINGS_API UClass* Z_Construct_UClass_ULuminRuntimeSettings_NoRegister();
	LUMINRUNTIMESETTINGS_API UClass* Z_Construct_UClass_ULuminRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* ELuminPrivilege_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminPrivilege"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminPrivilege>()
	{
		return ELuminPrivilege_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminPrivilege(ELuminPrivilege_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminPrivilege"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege_Hash() { return 57690972U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminPrivilege"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminPrivilege::Invalid", (int64)ELuminPrivilege::Invalid },
				{ "ELuminPrivilege::AudioRecognizer", (int64)ELuminPrivilege::AudioRecognizer },
				{ "ELuminPrivilege::BatteryInfo", (int64)ELuminPrivilege::BatteryInfo },
				{ "ELuminPrivilege::CameraCapture", (int64)ELuminPrivilege::CameraCapture },
				{ "ELuminPrivilege::WorldReconstruction", (int64)ELuminPrivilege::WorldReconstruction },
				{ "ELuminPrivilege::InAppPurchase", (int64)ELuminPrivilege::InAppPurchase },
				{ "ELuminPrivilege::AudioCaptureMic", (int64)ELuminPrivilege::AudioCaptureMic },
				{ "ELuminPrivilege::DrmCertificates", (int64)ELuminPrivilege::DrmCertificates },
				{ "ELuminPrivilege::Occlusion", (int64)ELuminPrivilege::Occlusion },
				{ "ELuminPrivilege::LowLatencyLightwear", (int64)ELuminPrivilege::LowLatencyLightwear },
				{ "ELuminPrivilege::Internet", (int64)ELuminPrivilege::Internet },
				{ "ELuminPrivilege::IdentityRead", (int64)ELuminPrivilege::IdentityRead },
				{ "ELuminPrivilege::BackgroundDownload", (int64)ELuminPrivilege::BackgroundDownload },
				{ "ELuminPrivilege::BackgroundUpload", (int64)ELuminPrivilege::BackgroundUpload },
				{ "ELuminPrivilege::MediaDrm", (int64)ELuminPrivilege::MediaDrm },
				{ "ELuminPrivilege::Media", (int64)ELuminPrivilege::Media },
				{ "ELuminPrivilege::MediaMetadata", (int64)ELuminPrivilege::MediaMetadata },
				{ "ELuminPrivilege::PowerInfo", (int64)ELuminPrivilege::PowerInfo },
				{ "ELuminPrivilege::LocalAreaNetwork", (int64)ELuminPrivilege::LocalAreaNetwork },
				{ "ELuminPrivilege::VoiceInput", (int64)ELuminPrivilege::VoiceInput },
				{ "ELuminPrivilege::Documents", (int64)ELuminPrivilege::Documents },
				{ "ELuminPrivilege::ConnectBackgroundMusicService", (int64)ELuminPrivilege::ConnectBackgroundMusicService },
				{ "ELuminPrivilege::RegisterBackgroundMusicService", (int64)ELuminPrivilege::RegisterBackgroundMusicService },
				{ "ELuminPrivilege::PwFoundObjRead", (int64)ELuminPrivilege::PwFoundObjRead },
				{ "ELuminPrivilege::NormalNotificationsUsage", (int64)ELuminPrivilege::NormalNotificationsUsage },
				{ "ELuminPrivilege::MusicService", (int64)ELuminPrivilege::MusicService },
				{ "ELuminPrivilege::ControllerPose", (int64)ELuminPrivilege::ControllerPose },
				{ "ELuminPrivilege::ScreensProvider", (int64)ELuminPrivilege::ScreensProvider },
				{ "ELuminPrivilege::GesturesSubscribe", (int64)ELuminPrivilege::GesturesSubscribe },
				{ "ELuminPrivilege::GesturesConfig", (int64)ELuminPrivilege::GesturesConfig },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminPrivilege",
				"ELuminPrivilege",
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
	static UEnum* ELuminFrameTimingHint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminFrameTimingHint"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminFrameTimingHint>()
	{
		return ELuminFrameTimingHint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminFrameTimingHint(ELuminFrameTimingHint_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminFrameTimingHint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint_Hash() { return 197976712U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminFrameTimingHint"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminFrameTimingHint::Unspecified", (int64)ELuminFrameTimingHint::Unspecified },
				{ "ELuminFrameTimingHint::Maximum", (int64)ELuminFrameTimingHint::Maximum },
				{ "ELuminFrameTimingHint::FPS_60", (int64)ELuminFrameTimingHint::FPS_60 },
				{ "ELuminFrameTimingHint::FPS_120", (int64)ELuminFrameTimingHint::FPS_120 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FPS_120.ToolTip", "Run at a specified rate of 120Hz (i.e. one frame every ~8.33 ms)." },
				{ "FPS_60.ToolTip", "Run at a specified rate of 60Hz (i.e. one frame every ~16.67 ms)." },
				{ "Maximum.ToolTip", "Run at the maximum rate allowed by the system." },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
				{ "Unspecified.ToolTip", "Default rate is unspecified, adjusted based on system conditions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminFrameTimingHint",
				"ELuminFrameTimingHint",
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
	void ULuminRuntimeSettings::StaticRegisterNativesULuminRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_ULuminRuntimeSettings_NoRegister()
	{
		return ULuminRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULuminRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDebugInfo_MetaData[];
#endif
		static void NewProp_bRemoveDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDebugInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraComponentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraComponentNodes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraComponentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraApplicationNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraApplicationNodes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraApplicationNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppPrivileges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppPrivileges;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppPrivileges_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppPrivileges_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAPILevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumAPILevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPortalPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconPortalPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconModelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconModelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Certificate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Certificate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildWithNvTegraGfxDebugger_MetaData[];
#endif
		static void NewProp_bBuildWithNvTegraGfxDebugger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildWithNvTegraGfxDebugger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVulkan_MetaData[];
#endif
		static void NewProp_bUseVulkan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVulkan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMobileRendering_MetaData[];
#endif
		static void NewProp_bUseMobileRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMobileRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProtectedContent_MetaData[];
#endif
		static void NewProp_bProtectedContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProtectedContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTimingHint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameTimingHint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameTimingHint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreensApp_MetaData[];
#endif
		static void NewProp_bIsScreensApp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreensApp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuminRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Lumin runtime platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "DisplayName", "Strip debug symbols from packaged builds even if they aren't shipping builds" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Strip debug symbols from packaged builds even if they aren't shipping builds." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bRemoveDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo = { "bRemoveDebugInfo", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "DisplayName", "Extra nodes under the <component> node" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Extra nodes under the <component> node like <mime-type>, <schema> etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes = { "ExtraComponentNodes", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ExtraComponentNodes), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes_Inner = { "ExtraComponentNodes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "DisplayName", "Extra nodes under the <application> node" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Extra nodes under the <application> node." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes = { "ExtraApplicationNodes", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ExtraApplicationNodes), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes_Inner = { "ExtraApplicationNodes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "DisplayName", "App Privileges" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Any privileges your app needs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges = { "AppPrivileges", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, AppPrivileges), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner = { "AppPrivileges", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "ClampMin", "2" },
		{ "DisplayName", "Minimum API Level" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Minimum API level required based on which APIs have been integrated into the base engine. Developers can set higher API levels if they are implementing newer APIs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel = { "MinimumAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, MinimumAPILevel), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Version Code" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Used as an internal version number. This number is used only to determine whether one version is more recent than another, with higher numbers indicating more recent versions. This is not the version number shown to users." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode = { "VersionCode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, VersionCode), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData[] = {
		{ "Category", "Magic Leap App Tile" },
		{ "DisplayName", "Icon Portal" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon portal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath = { "IconPortalPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, IconPortalPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData[] = {
		{ "Category", "Magic Leap App Tile" },
		{ "DisplayName", "Icon Model" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon model." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath = { "IconModelPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, IconModelPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData[] = {
		{ "Category", "Distribution Signing" },
		{ "DisplayName", "Certificate File Path" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Certificate File used to sign builds for distribution." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate = { "Certificate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, Certificate), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support NVIDIA Tegra Graphics Debugger" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Enable support for NVIDIA Tegra Graphics Debugger [FOR FULL SOURCE GAMES ONLY]." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bBuildWithNvTegraGfxDebugger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger = { "bBuildWithNvTegraGfxDebugger", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData[] = {
		{ "DisplayName", "Use Vulkan (otherwise, OpenGL)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bUseVulkan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan = { "bUseVulkan", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Use Mobile Rendering.  Otherwise, Desktop Rendering" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "If checked, use Mobile Rendering. Otherwise, use Desktop Rendering [FOR FULL SOURCE GAMES ONLY]." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bUseMobileRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering = { "bUseMobileRendering", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Protected Content" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Content for this app is protected and should not be recorded or captured outside the graphics system." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bProtectedContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent = { "bProtectedContent", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Frame timing hint" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Indicates to the Lumin OS what the application's target framerate is, to improve prediction and reprojection" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint = { "FrameTimingHint", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, FrameTimingHint), Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Is Screens App" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Is a Screens type (Magic TV) app." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bIsScreensApp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp = { "bIsScreensApp", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData[] = {
		{ "Category", "MPK Packaging" },
		{ "DisplayName", "Application Display Name (project name if blank)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "The visual application name displayed for end users." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName = { "ApplicationDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ApplicationDisplayName), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "MPK Packaging" },
		{ "DisplayName", "Magic Leap Package Name ('com.Company.Project', [PROJECT] is replaced with project name)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "The official name of the project. Note: Must have at least 2 sections separated by a period and be unique!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, PackageName), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraApplicationNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bBuildWithNvTegraGfxDebugger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bIsScreensApp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::ClassParams = {
		&ULuminRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminRuntimeSettings, 413257195);
	template<> LUMINRUNTIMESETTINGS_API UClass* StaticClass<ULuminRuntimeSettings>()
	{
		return ULuminRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminRuntimeSettings(Z_Construct_UClass_ULuminRuntimeSettings, &ULuminRuntimeSettings::StaticClass, TEXT("/Script/LuminRuntimeSettings"), TEXT("ULuminRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
