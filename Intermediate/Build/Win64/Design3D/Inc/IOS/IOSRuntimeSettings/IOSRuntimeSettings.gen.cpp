// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOSRuntimeSettings/Classes/IOSRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOSRuntimeSettings() {}
// Cross Module References
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy();
	UPackage* Z_Construct_UPackage__Script_IOSRuntimeSettings();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock();
	IOSRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory();
	IOSRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath();
	IOSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UIOSRuntimeSettings_NoRegister();
	IOSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UIOSRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
// End Cross Module References
	static UEnum* EIOSCloudKitSyncStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSCloudKitSyncStrategy"));
		}
		return Singleton;
	}
	template<> IOSRUNTIMESETTINGS_API UEnum* StaticEnum<EIOSCloudKitSyncStrategy>()
	{
		return EIOSCloudKitSyncStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSCloudKitSyncStrategy(EIOSCloudKitSyncStrategy_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSCloudKitSyncStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy_Hash() { return 1386295463U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSCloudKitSyncStrategy"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSCloudKitSyncStrategy::None", (int64)EIOSCloudKitSyncStrategy::None },
				{ "EIOSCloudKitSyncStrategy::OnlyAtGameStart", (int64)EIOSCloudKitSyncStrategy::OnlyAtGameStart },
				{ "EIOSCloudKitSyncStrategy::Always", (int64)EIOSCloudKitSyncStrategy::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.DisplayName", "Always (whenever LoadGame is called)" },
				{ "Always.ToolTip", "Always" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "None.DisplayName", "Never (do not use iCloud for Load/Save Game)" },
				{ "None.ToolTip", "Only at game start" },
				{ "OnlyAtGameStart.DisplayName", "At game start only (iOS)" },
				{ "OnlyAtGameStart.ToolTip", "Only at game start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				"EIOSCloudKitSyncStrategy",
				"EIOSCloudKitSyncStrategy",
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
	static UEnum* EIOSLandscapeOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSLandscapeOrientation"));
		}
		return Singleton;
	}
	template<> IOSRUNTIMESETTINGS_API UEnum* StaticEnum<EIOSLandscapeOrientation>()
	{
		return EIOSLandscapeOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSLandscapeOrientation(EIOSLandscapeOrientation_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSLandscapeOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation_Hash() { return 642804003U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSLandscapeOrientation"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSLandscapeOrientation::LandscapeLeft", (int64)EIOSLandscapeOrientation::LandscapeLeft },
				{ "EIOSLandscapeOrientation::LandscapeRight", (int64)EIOSLandscapeOrientation::LandscapeRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LandscapeLeft.DisplayName", "Landscape (left home button)" },
				{ "LandscapeLeft.ToolTip", "Landscape Left" },
				{ "LandscapeRight.DisplayName", "Landscape (right home button)" },
				{ "LandscapeRight.ToolTip", "Landscape Right" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				"EIOSLandscapeOrientation",
				"EIOSLandscapeOrientation",
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
	static UEnum* EIOSMetalShaderStandard_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSMetalShaderStandard"));
		}
		return Singleton;
	}
	template<> IOSRUNTIMESETTINGS_API UEnum* StaticEnum<EIOSMetalShaderStandard>()
	{
		return EIOSMetalShaderStandard_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSMetalShaderStandard(EIOSMetalShaderStandard_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSMetalShaderStandard"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard_Hash() { return 3660623184U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSMetalShaderStandard"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_1_2", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_1_2 },
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_2_0", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_2_0 },
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_2_1", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_2_1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IOSMetalSLStandard_1_2.DisplayName", "Metal v1.2 (iOS 10.0/tvOS 10.0)" },
				{ "IOSMetalSLStandard_1_2.ToolTip", "Metal Shaders Compatible With iOS 10.0/tvOS 10.0 or later (std=ios-metal1.2)" },
				{ "IOSMetalSLStandard_2_0.DisplayName", "Metal v2.0 (iOS 11.0/tvOS 11.0)" },
				{ "IOSMetalSLStandard_2_0.ToolTip", "Metal Shaders Compatible With iOS 11.0/tvOS 11.0 or later (std=ios-metal2.0)" },
				{ "IOSMetalSLStandard_2_1.DisplayName", "Metal v2.1 (iOS 12.0/tvOS 12.0)" },
				{ "IOSMetalSLStandard_2_1.ToolTip", "Metal Shaders Compatible With iOS 12.0/tvOS 12.0 or later (std=ios-metal2.1)" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				"EIOSMetalShaderStandard",
				"EIOSMetalShaderStandard",
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
	static UEnum* EIOSVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSVersion"));
		}
		return Singleton;
	}
	template<> IOSRUNTIMESETTINGS_API UEnum* StaticEnum<EIOSVersion>()
	{
		return EIOSVersion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSVersion(EIOSVersion_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion_Hash() { return 1782173893U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSVersion"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSVersion::IOS_61", (int64)EIOSVersion::IOS_61 },
				{ "EIOSVersion::IOS_7", (int64)EIOSVersion::IOS_7 },
				{ "EIOSVersion::IOS_8", (int64)EIOSVersion::IOS_8 },
				{ "EIOSVersion::IOS_9", (int64)EIOSVersion::IOS_9 },
				{ "EIOSVersion::IOS_10", (int64)EIOSVersion::IOS_10 },
				{ "EIOSVersion::IOS_11", (int64)EIOSVersion::IOS_11 },
				{ "EIOSVersion::IOS_12", (int64)EIOSVersion::IOS_12 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IOS_10.DisplayName", "10.0" },
				{ "IOS_10.ToolTip", "iOS 10" },
				{ "IOS_11.DisplayName", "11.0" },
				{ "IOS_11.ToolTip", "iOS 11" },
				{ "IOS_12.DisplayName", "12.0" },
				{ "IOS_12.ToolTip", "iOS 12" },
				{ "IOS_61.Hidden", "" },
				{ "IOS_61.ToolTip", "iOS 6.1" },
				{ "IOS_7.Hidden", "" },
				{ "IOS_7.ToolTip", "iOS 7" },
				{ "IOS_8.Hidden", "" },
				{ "IOS_8.ToolTip", "iOS 8" },
				{ "IOS_9.Hidden", "" },
				{ "IOS_9.ToolTip", "iOS 9" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				"EIOSVersion",
				"EIOSVersion",
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
	static UEnum* EPowerUsageFrameRateLock_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EPowerUsageFrameRateLock"));
		}
		return Singleton;
	}
	template<> IOSRUNTIMESETTINGS_API UEnum* StaticEnum<EPowerUsageFrameRateLock>()
	{
		return EPowerUsageFrameRateLock_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPowerUsageFrameRateLock(EPowerUsageFrameRateLock_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EPowerUsageFrameRateLock"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock_Hash() { return 726495770U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPowerUsageFrameRateLock"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPowerUsageFrameRateLock::PUFRL_None", (int64)EPowerUsageFrameRateLock::PUFRL_None },
				{ "EPowerUsageFrameRateLock::PUFRL_20", (int64)EPowerUsageFrameRateLock::PUFRL_20 },
				{ "EPowerUsageFrameRateLock::PUFRL_30", (int64)EPowerUsageFrameRateLock::PUFRL_30 },
				{ "EPowerUsageFrameRateLock::PUFRL_60", (int64)EPowerUsageFrameRateLock::PUFRL_60 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "PUFRL_20.DisplayName", "20 FPS" },
				{ "PUFRL_20.ToolTip", "Frame rate is limited to a maximum of 20 frames per second." },
				{ "PUFRL_30.DisplayName", "30 FPS" },
				{ "PUFRL_30.ToolTip", "Frame rate is limited to a maximum of 30 frames per second." },
				{ "PUFRL_60.DisplayName", "60 FPS" },
				{ "PUFRL_60.ToolTip", "Frame rate is limited to a maximum of 60 frames per second." },
				{ "PUFRL_None.DisplayName", "None" },
				{ "PUFRL_None.ToolTip", "Frame rate is not limited." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				"EPowerUsageFrameRateLock",
				"EPowerUsageFrameRateLock",
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
class UScriptStruct* FIOSBuildResourceDirectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IOSRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("IOSBuildResourceDirectory"), sizeof(FIOSBuildResourceDirectory), Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Hash());
	}
	return Singleton;
}
template<> IOSRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FIOSBuildResourceDirectory>()
{
	return FIOSBuildResourceDirectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSBuildResourceDirectory(FIOSBuildResourceDirectory::StaticStruct, TEXT("/Script/IOSRuntimeSettings"), TEXT("IOSBuildResourceDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory
{
	FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSBuildResourceDirectory")),new UScriptStruct::TCppStructOps<FIOSBuildResourceDirectory>);
	}
} ScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory;
	struct Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "IOS Build resource file struct, used to serialize Directorys to the configs for use in the build system," },
	};
#endif
	void* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSBuildResourceDirectory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Directory" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The path to the file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSBuildResourceDirectory, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
		nullptr,
		&NewStructOps,
		"IOSBuildResourceDirectory",
		sizeof(FIOSBuildResourceDirectory),
		alignof(FIOSBuildResourceDirectory),
		Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSBuildResourceDirectory"), sizeof(FIOSBuildResourceDirectory), Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Hash() { return 361802522U; }
class UScriptStruct* FIOSBuildResourceFilePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IOSRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("IOSBuildResourceFilePath"), sizeof(FIOSBuildResourceFilePath), Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Hash());
	}
	return Singleton;
}
template<> IOSRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FIOSBuildResourceFilePath>()
{
	return FIOSBuildResourceFilePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSBuildResourceFilePath(FIOSBuildResourceFilePath::StaticStruct, TEXT("/Script/IOSRuntimeSettings"), TEXT("IOSBuildResourceFilePath"), false, nullptr, nullptr);
static struct FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath
{
	FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSBuildResourceFilePath")),new UScriptStruct::TCppStructOps<FIOSBuildResourceFilePath>);
	}
} ScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath;
	struct Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "IOS Build resource file struct, used to serialize filepaths to the configs for use in the build system," },
	};
#endif
	void* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSBuildResourceFilePath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "FilePath" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The path to the file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSBuildResourceFilePath, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::NewProp_FilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
		nullptr,
		&NewStructOps,
		"IOSBuildResourceFilePath",
		sizeof(FIOSBuildResourceFilePath),
		alignof(FIOSBuildResourceFilePath),
		Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSBuildResourceFilePath"), sizeof(FIOSBuildResourceFilePath), Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Hash() { return 2456611734U; }
	void UIOSRuntimeSettings::StaticRegisterNativesUIOSRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UIOSRuntimeSettings_NoRegister()
	{
		return UIOSRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UIOSRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoStreamingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoStreamingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQualityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQualityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResampleForDevice_MetaData[];
#endif
		static void NewProp_bResampleForDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResampleForDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompressionOverrides;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNumSourceWorkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNumSourceWorkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioMaxChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioMaxChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNumBuffersToEnqueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNumBuffersToEnqueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCallbackBufferFrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioCallbackBufferFrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIntegratedKeyboard_MetaData[];
#endif
		static void NewProp_bUseIntegratedKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIntegratedKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMathOptimisations_MetaData[];
#endif
		static void NewProp_EnableMathOptimisations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMathOptimisations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFloats_MetaData[];
#endif
		static void NewProp_ForceFloats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceFloats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFastIntrinsics_MetaData[];
#endif
		static void NewProp_UseFastIntrinsics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFastIntrinsics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShaderLanguageVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxShaderLanguageVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableHTTPS_MetaData[];
#endif
		static void NewProp_bDisableHTTPS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableHTTPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSTeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSTeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticSigning_MetaData[];
#endif
		static void NewProp_bAutomaticSigning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticSigning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SigningCertificate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SigningCertificate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileProvision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MobileProvision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFacebookSupport_MetaData[];
#endif
		static void NewProp_bEnableFacebookSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFacebookSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalPlistData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsIPhone_MetaData[];
#endif
		static void NewProp_bSupportsIPhone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsIPhone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsIPad_MetaData[];
#endif
		static void NewProp_bSupportsIPad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsIPad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumiOSVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinimumiOSVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinimumiOSVersion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRateLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameRateLock;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameRateLock_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredLandscapeOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreferredLandscapeOrientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreferredLandscapeOrientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsITunesFileSharing_MetaData[];
#endif
		static void NewProp_bSupportsITunesFileSharing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsITunesFileSharing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsLandscapeRightOrientation_MetaData[];
#endif
		static void NewProp_bSupportsLandscapeRightOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsLandscapeRightOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsLandscapeLeftOrientation_MetaData[];
#endif
		static void NewProp_bSupportsLandscapeLeftOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsLandscapeLeftOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsUpsideDownOrientation_MetaData[];
#endif
		static void NewProp_bSupportsUpsideDownOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsUpsideDownOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsPortraitOrientation_MetaData[];
#endif
		static void NewProp_bSupportsPortraitOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsPortraitOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowControllers_MetaData[];
#endif
		static void NewProp_bAllowControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteAbsoluteDpadValues_MetaData[];
#endif
		static void NewProp_bUseRemoteAbsoluteDpadValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteAbsoluteDpadValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteAsVirtualJoystick_MetaData[];
#endif
		static void NewProp_bUseRemoteAsVirtualJoystick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteAsVirtualJoystick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRemoteRotation_MetaData[];
#endif
		static void NewProp_bAllowRemoteRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatRemoteAsSeparateController_MetaData[];
#endif
		static void NewProp_bTreatRemoteAsSeparateController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatRemoteAsSeparateController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSHPrivateKeyOverridePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSHPrivateKeyOverridePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSHPrivateKeyLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSHPrivateKeyLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaCopyInstallPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaCopyInstallPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSyncUsername_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RSyncUsername;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRSync_MetaData[];
#endif
		static void NewProp_bUseRSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteServerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalShippingLinkerFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalShippingLinkerFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalLinkerFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalLinkerFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdvertisingIdentifier_MetaData[];
#endif
		static void NewProp_bEnableAdvertisingIdentifier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdvertisingIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForBitcode_MetaData[];
#endif
		static void NewProp_bShipForBitcode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForBitcode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArmV7S_MetaData[];
#endif
		static void NewProp_bShipForArmV7S_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArmV7S;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArm64_MetaData[];
#endif
		static void NewProp_bShipForArm64_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArm64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArmV7_MetaData[];
#endif
		static void NewProp_bShipForArmV7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArmV7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArmV7S_MetaData[];
#endif
		static void NewProp_bDevForArmV7S_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArmV7S;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArm64_MetaData[];
#endif
		static void NewProp_bDevForArm64_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArm64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArmV7_MetaData[];
#endif
		static void NewProp_bDevForArmV7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArmV7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateXCArchive_MetaData[];
#endif
		static void NewProp_bGenerateXCArchive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateXCArchive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateCrashReportSymbols_MetaData[];
#endif
		static void NewProp_bGenerateCrashReportSymbols_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateCrashReportSymbols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedSYMBundle_MetaData[];
#endif
		static void NewProp_bGeneratedSYMBundle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedSYMBundle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedSYMFile_MetaData[];
#endif
		static void NewProp_bGeneratedSYMFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedSYMFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRemoteShaderCompile_MetaData[];
#endif
		static void NewProp_EnableRemoteShaderCompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRemoteShaderCompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsOpenGLES2_MetaData[];
#endif
		static void NewProp_bSupportsOpenGLES2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsOpenGLES2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookASTCTextures_MetaData[];
#endif
		static void NewProp_bCookASTCTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookASTCTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookPVRTCTextures_MetaData[];
#endif
		static void NewProp_bCookPVRTCTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookPVRTCTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMetalMRT_MetaData[];
#endif
		static void NewProp_bSupportsMetalMRT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMetalMRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMetal_MetaData[];
#endif
		static void NewProp_bSupportsMetal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMetal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBackgroundFetch_MetaData[];
#endif
		static void NewProp_bEnableBackgroundFetch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBackgroundFetch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemoteNotificationsSupport_MetaData[];
#endif
		static void NewProp_bEnableRemoteNotificationsSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemoteNotificationsSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSCloudKitSyncStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IOSCloudKitSyncStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IOSCloudKitSyncStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCloudKitSupport_MetaData[];
#endif
		static void NewProp_bEnableCloudKitSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCloudKitSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGameCenterSupport_MetaData[];
#endif
		static void NewProp_bEnableGameCenterSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGameCenterSupport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOSRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IOSRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the iOS target platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "DisplayName", "Stream All Soundwaves Longer Than:" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AutoStreamingThreshold = { "AutoStreamingThreshold", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AutoStreamingThreshold), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionQualityModifier = { "CompressionQualityModifier", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, CompressionQualityModifier), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Min" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinSampleRate = { "MinSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MinSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Low" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_LowSampleRate = { "LowSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, LowSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Medium" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MedSampleRate = { "MedSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MedSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "High" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_HighSampleRate = { "HighSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, HighSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Max" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Mapping of which sample rates are used for each sample rate quality for a specific platform." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxSampleRate = { "MaxSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MaxSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bResampleForDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice = { "bResampleForDevice", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Various overrides for how this platform should handle compression and decompression" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionOverrides = { "CompressionOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, CompressionOverrides), Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Source Workers" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers = { "AudioNumSourceWorkers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AudioNumSourceWorkers), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Channels" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioMaxChannels = { "AudioMaxChannels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AudioMaxChannels), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Buffers To Enqueue" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue = { "AudioNumBuffersToEnqueue", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AudioNumBuffersToEnqueue), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "512" },
		{ "DisplayName", "Callback Buffer Size" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize = { "AudioCallbackBufferFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AudioCallbackBufferFrameSize), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Audio Mixer Sample Rate" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Sample rate to run the audio mixer with." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AudioSampleRate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not the keyboard should be usable on it's own without a UITextField" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bUseIntegratedKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard = { "bUseIntegratedKeyboard", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Fast-Math optimisations" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether to use of Metal shader-compiler's -ffast-math optimisations.\nFast-Math performs algebraic-equivalent & reassociative optimisations not permitted by the floating point arithmetic standard (IEEE-754).\nThese can improve shader performance at some cost to precision and can lead to NaN/INF propagation as they rely on\nshader inputs or variables not containing NaN/INF values. By default fast-math is enabled for performance." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->EnableMathOptimisations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations = { "EnableMathOptimisations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Force 32bit Floating Point Precision" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether to force Metal shaders to use 32bit floating point precision even when the shader uses half floats.\nHalf floats are much more efficient when they are availble but have less accuracy over large ranges,\nas such some projects may need to use 32bit floats to ensure correct rendering." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->ForceFloats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats = { "ForceFloats", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Fast-Math intrinsics" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether to use the Metal shading language's \"fast\" intrinsics.\nFast intrinsics assume that no NaN or INF value will be provided as input,\nso are more efficient. However, they will produce undefined results if NaN/INF\nis present in the argument/s." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->UseFastIntrinsics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics = { "UseFastIntrinsics", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxShaderLanguageVersion_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Max. Metal Shader Standard To Target" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The maximum supported Metal shader langauge version.\nThis defines what features may be used and OS versions supported." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxShaderLanguageVersion = { "MaxShaderLanguageVersion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MaxShaderLanguageVersion), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxShaderLanguageVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxShaderLanguageVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS_MetaData[] = {
		{ "Category", "Online" },
		{ "DisplayName", "Allow web connections to non-HTTPS websites" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether the app supports HTTPS" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bDisableHTTPS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS = { "bDisableHTTPS", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSTeamID_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The team ID of the apple developer account to be used to autmatically sign IOS builds" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSTeamID = { "IOSTeamID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, IOSTeamID), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSTeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSTeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether to use automatic signing through Xcode" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bAutomaticSigning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning = { "bAutomaticSigning", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SigningCertificate_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Signing certificate to utilize when signing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SigningCertificate = { "SigningCertificate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, SigningCertificate), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SigningCertificate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SigningCertificate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MobileProvision_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Mobile provision to utilize when signing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MobileProvision = { "MobileProvision", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MobileProvision), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MobileProvision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MobileProvision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FacebookAppID_MetaData[] = {
		{ "Category", "Online" },
		{ "EditCondition", "bEnableFacebookSupport" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Facebook App ID obtained from Facebook's Developer Centre" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FacebookAppID = { "FacebookAppID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, FacebookAppID), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FacebookAppID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FacebookAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether the app supports Facebook" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableFacebookSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport = { "bEnableFacebookSupport", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalPlistData_MetaData[] = {
		{ "Category", "ExtraData" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Any additional plist key/value data utilizing \\n for a new line" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalPlistData = { "AdditionalPlistData", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalPlistData), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalPlistData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalPlistData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone_MetaData[] = {
		{ "Category", "DeviceUsage" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to add support for iPhone devices" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsIPhone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone = { "bSupportsIPhone", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad_MetaData[] = {
		{ "Category", "DeviceUsage" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to add support for iPad devices" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsIPad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad = { "bSupportsIPad", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion_MetaData[] = {
		{ "Category", "OSInfo" },
		{ "DisplayName", "Minimum iOS Version" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Minimum iOS version this game supports" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion = { "MinimumiOSVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, MinimumiOSVersion), Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock_MetaData[] = {
		{ "Category", "PowerUsage" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Set the maximum frame rate to save on power consumption" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock = { "FrameRateLock", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, FrameRateLock), Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_VersionInfo_MetaData[] = {
		{ "Category", "BundleInformation" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Specifies the version for the application." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_VersionInfo = { "VersionInfo", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, VersionInfo), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_VersionInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_VersionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleIdentifier_MetaData[] = {
		{ "Category", "BundleInformation" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Specifies the bundle identifier for the application." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleIdentifier = { "BundleIdentifier", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, BundleIdentifier), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleName_MetaData[] = {
		{ "Category", "BundleInformation" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Specifies the the name of the application bundle. This is the short name for the application bundle." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleName = { "BundleName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, BundleName), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleDisplayName_MetaData[] = {
		{ "Category", "BundleInformation" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Specifies the the display name for the application. This will be displayed under the icon on the device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleDisplayName = { "BundleDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, BundleDisplayName), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation_MetaData[] = {
		{ "Category", "DeviceOrientations" },
		{ "DisplayName", "Preferred Landscape Orientation" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The Preferred Orientation will be used as the initial orientation at launch when both Landscape Left and Landscape Right orientations are to be supported." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation = { "PreferredLandscapeOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, PreferredLandscapeOrientation), Z_Construct_UEnum_IOSRuntimeSettings_EIOSLandscapeOrientation, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsITunesFileSharing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing = { "bSupportsITunesFileSharing", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation_MetaData[] = {
		{ "Category", "DeviceOrientations" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Supports right landscape orientation. Portrait will not be supported." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsLandscapeRightOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation = { "bSupportsLandscapeRightOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation_MetaData[] = {
		{ "Category", "DeviceOrientations" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Supports left landscape orientation. Portrait will not be supported." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsLandscapeLeftOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation = { "bSupportsLandscapeLeftOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation_MetaData[] = {
		{ "Category", "DeviceOrientations" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Supports upside down portrait orientation. Landscape will not be supported." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsUpsideDownOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation = { "bSupportsUpsideDownOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation_MetaData[] = {
		{ "Category", "DeviceOrientations" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Supports default portrait orientation. Landscape will not be supported." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsPortraitOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation = { "bSupportsPortraitOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Allow MFi (Bluetooth) controllers" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "If checked, Bluetooth connected controllers will send input" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bAllowControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers = { "bAllowControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Use AppleTV Remote absolute trackpad values" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "If checked, the center of the trackpad is 0,0 (center) for the virtual joystick. If unchecked, the location the user taps becomes 0,0" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bUseRemoteAbsoluteDpadValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues = { "bUseRemoteAbsoluteDpadValues", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Use AppleTV trackpad as virtual joystick" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "If checked, the trackpad is a virtual joystick (acts like the left stick of a controller). If unchecked, the trackpad will send touch events" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bUseRemoteAsVirtualJoystick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick = { "bUseRemoteAsVirtualJoystick", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Allow AppleTV Remote landscape mode" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "If checked, the Siri Remote can be rotated to landscape view" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bAllowRemoteRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation = { "bAllowRemoteRotation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Treat AppleTV Remote as separate controller" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "If checked, the Siri Remote will act as a separate controller Id from any connected controllers. If unchecked, the remote and the first connected controller will share an ID (and control the same player)" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bTreatRemoteAsSeparateController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController = { "bTreatRemoteAsSeparateController", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyOverridePath_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Override existing SSH permissions file" },
		{ "EditCondition", "bUseRSync" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The path of the ssh permissions key to be used when connecting to the remote server." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyOverridePath = { "SSHPrivateKeyOverridePath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, SSHPrivateKeyOverridePath), Z_Construct_UScriptStruct_FIOSBuildResourceFilePath, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyOverridePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyOverridePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyLocation_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Found Existing SSH permissions file" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The existing location of an SSH Key found by UE4." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyLocation = { "SSHPrivateKeyLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, SSHPrivateKeyLocation), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_DeltaCopyInstallPath_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "EditCondition", "bUseRSync" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The install directory of DeltaCopy." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_DeltaCopyInstallPath = { "DeltaCopyInstallPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, DeltaCopyInstallPath), Z_Construct_UScriptStruct_FIOSBuildResourceDirectory, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_DeltaCopyInstallPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_DeltaCopyInstallPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RSyncUsername_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Username on Remote Server." },
		{ "EditCondition", "bUseRSync" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The mac users name which matches the SSH Private Key, for remote builds using RSync." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RSyncUsername = { "RSyncUsername", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, RSyncUsername), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RSyncUsername_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RSyncUsername_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use RSync for building IOS" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable the use of RSync for remote builds on a mac" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bUseRSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync = { "bUseRSync", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RemoteServerName_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "The name or ip address of the remote mac which will be used to build IOS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RemoteServerName = { "RemoteServerName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, RemoteServerName), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RemoteServerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RemoteServerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalShippingLinkerFlags_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Additional Shipping Linker Flags" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Any additional linker flags to pass to the linker in shipping builds" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalShippingLinkerFlags = { "AdditionalShippingLinkerFlags", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalShippingLinkerFlags), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalShippingLinkerFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalShippingLinkerFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalLinkerFlags_MetaData[] = {
		{ "Category", "Build" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Additional Non-Shipping Linker Flags" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Any additional linker flags to pass to the linker in non-shipping builds" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalLinkerFlags = { "AdditionalLinkerFlags", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalLinkerFlags), METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalLinkerFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalLinkerFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable Advertising Identified (IDFA)" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable Advertising Identified" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableAdvertisingIdentifier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier = { "bEnableAdvertisingIdentifier", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support bitcode in Shipping" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable bitcode compiling?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bShipForBitcode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode = { "bShipForBitcode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable ArmV7s support?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bShipForArmV7S = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S = { "bShipForArmV7S", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable Arm64 support?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bShipForArm64 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64 = { "bShipForArm64", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable ArmV7 support? (this will be used if all type are unchecked)" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bShipForArmV7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7 = { "bShipForArmV7", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable ArmV7s support?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bDevForArmV7S = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S = { "bDevForArmV7S", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable Arm64 support?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bDevForArm64 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64 = { "bDevForArm64", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable ArmV7 support? (this will be used if all type are unchecked)" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bDevForArmV7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7 = { "bDevForArmV7", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Generate xcode archive package" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable generation of xcode archive package" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bGenerateXCArchive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive = { "bGenerateXCArchive", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Generate .udebugsymbols file" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable generation of a .udebugsymbols file, which allows offline, platform-independent symbolication for the Malloc Profiler or external crash reporting tools. Requires a dSYM file or bundle." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bGenerateCrashReportSymbols = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols = { "bGenerateCrashReportSymbols", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Generate dSYM bundle for third party crash tools" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable generation of dSYM bundle" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bGeneratedSYMBundle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle = { "bGeneratedSYMBundle", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Generate dSYM file for code debugging and profiling" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Enable generation of dSYM file" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bGeneratedSYMFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile = { "bGeneratedSYMFile", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Remotely compile shaders offline" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->EnableRemoteShaderCompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile = { "EnableRemoteShaderCompile", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to add support for OpenGL ES2 (if this is false, then your game should specify minimum IOS8 version)" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsOpenGLES2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2 = { "bSupportsOpenGLES2", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Cook ASTC texture data for Metal on A8 or later devices" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to add support for ASTC textures" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bCookASTCTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures = { "bCookASTCTextures", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Cook PVRTC texture data for OpenGL ES or Metal on A7 and earlier devices" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to add support for PVRTC textures" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bCookPVRTCTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures = { "bCookPVRTCTextures", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Metal Desktop Renderer" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to compile iOS Metal shaders for the desktop renderer (requires iOS 10+ and an A10 processor)" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsMetalMRT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT = { "bSupportsMetalMRT", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Metal Mobile Renderer" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to compile iOS Metal shaders for the Mobile renderer (requires iOS 8+ and an A7 processor)." },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bSupportsMetal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal = { "bSupportsMetal", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Should background fetch support be enabled?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableBackgroundFetch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch = { "bEnableBackgroundFetch", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Should push/remote notifications support (iOS Online Subsystem) be enabled?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableRemoteNotificationsSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport = { "bEnableRemoteNotificationsSupport", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy_MetaData[] = {
		{ "Category", "Online" },
		{ "DisplayName", "iCloud save files sync strategy" },
		{ "EditCondition", "bEnableCloudKitSupport" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "iCloud Read stategy" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy = { "IOSCloudKitSyncStrategy", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIOSRuntimeSettings, IOSCloudKitSyncStrategy), Z_Construct_UEnum_IOSRuntimeSettings_EIOSCloudKitSyncStrategy, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Should Cloud Kit support (iOS Online Subsystem) be enabled?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableCloudKitSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport = { "bEnableCloudKitSupport", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport_MetaData[] = {
		{ "Category", "Online" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
		{ "ToolTip", "Should Game Center support (iOS Online Subsystem) be enabled?" },
	};
#endif
	void Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport_SetBit(void* Obj)
	{
		((UIOSRuntimeSettings*)Obj)->bEnableGameCenterSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport = { "bEnableGameCenterSupport", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIOSRuntimeSettings), &Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOSRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AutoStreamingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionQualityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_LowSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MedSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_HighSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bResampleForDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_CompressionOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioMaxChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AudioSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseIntegratedKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableMathOptimisations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_ForceFloats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_UseFastIntrinsics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MaxShaderLanguageVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDisableHTTPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSTeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAutomaticSigning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SigningCertificate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MobileProvision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FacebookAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableFacebookSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalPlistData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPhone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsIPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_MinimumiOSVersion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_FrameRateLock_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_VersionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_BundleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_PreferredLandscapeOrientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsITunesFileSharing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeRightOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsLandscapeLeftOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsUpsideDownOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsPortraitOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAbsoluteDpadValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRemoteAsVirtualJoystick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bAllowRemoteRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bTreatRemoteAsSeparateController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyOverridePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_SSHPrivateKeyLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_DeltaCopyInstallPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RSyncUsername,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bUseRSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_RemoteServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalShippingLinkerFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_AdditionalLinkerFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableAdvertisingIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForBitcode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7S,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArm64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bShipForArmV7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7S,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArm64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bDevForArmV7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateXCArchive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGenerateCrashReportSymbols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMBundle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bGeneratedSYMFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_EnableRemoteShaderCompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsOpenGLES2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookASTCTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bCookPVRTCTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetalMRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bSupportsMetal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableBackgroundFetch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableRemoteNotificationsSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_IOSCloudKitSyncStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableCloudKitSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOSRuntimeSettings_Statics::NewProp_bEnableGameCenterSupport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOSRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOSRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIOSRuntimeSettings_Statics::ClassParams = {
		&UIOSRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIOSRuntimeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UIOSRuntimeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIOSRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIOSRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIOSRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIOSRuntimeSettings, 2022967981);
	template<> IOSRUNTIMESETTINGS_API UClass* StaticClass<UIOSRuntimeSettings>()
	{
		return UIOSRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIOSRuntimeSettings(Z_Construct_UClass_UIOSRuntimeSettings, &UIOSRuntimeSettings::StaticClass, TEXT("/Script/IOSRuntimeSettings"), TEXT("UIOSRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOSRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
