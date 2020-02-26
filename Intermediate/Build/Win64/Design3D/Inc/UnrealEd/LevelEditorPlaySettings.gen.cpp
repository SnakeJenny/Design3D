// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/LevelEditorPlaySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorPlaySettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayNetMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeLocations();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELaunchModeType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELabelAnchorMode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPlayScreenResolution();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorPlaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static UEnum* EPlayOnLaunchConfiguration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayOnLaunchConfiguration"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayOnLaunchConfiguration>()
	{
		return EPlayOnLaunchConfiguration_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayOnLaunchConfiguration(EPlayOnLaunchConfiguration_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPlayOnLaunchConfiguration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Hash() { return 2362670844U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayOnLaunchConfiguration"), 0, Get_Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LaunchConfig_Default", (int64)LaunchConfig_Default },
				{ "LaunchConfig_Debug", (int64)LaunchConfig_Debug },
				{ "LaunchConfig_Development", (int64)LaunchConfig_Development },
				{ "LaunchConfig_Test", (int64)LaunchConfig_Test },
				{ "LaunchConfig_Shipping", (int64)LaunchConfig_Shipping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LaunchConfig_Debug.DisplayName", "Debug" },
				{ "LaunchConfig_Debug.ToolTip", "Launch on device with a Debug build configuration." },
				{ "LaunchConfig_Default.DisplayName", "Same as Editor" },
				{ "LaunchConfig_Default.ToolTip", "Launch on device with the same build configuration as the editor." },
				{ "LaunchConfig_Development.DisplayName", "Development" },
				{ "LaunchConfig_Development.ToolTip", "Launch on device with a Development build configuration." },
				{ "LaunchConfig_Shipping.DisplayName", "Shipping" },
				{ "LaunchConfig_Shipping.ToolTip", "Launch on device with a Shipping build configuration." },
				{ "LaunchConfig_Test.DisplayName", "Test" },
				{ "LaunchConfig_Test.ToolTip", "Launch on device with a Test build configuration." },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "ToolTip", "Configuration to use when launching on device." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPlayOnLaunchConfiguration",
				"EPlayOnLaunchConfiguration",
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
	static UEnum* EPlayOnBuildMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayOnBuildMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayOnBuildMode>()
	{
		return EPlayOnBuildMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayOnBuildMode(EPlayOnBuildMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPlayOnBuildMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Hash() { return 832209323U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayOnBuildMode"), 0, Get_Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayOnBuild_Always", (int64)PlayOnBuild_Always },
				{ "PlayOnBuild_Never", (int64)PlayOnBuild_Never },
				{ "PlayOnBuild_Default", (int64)PlayOnBuild_Default },
				{ "PlayOnBuild_IfEditorBuiltLocally", (int64)PlayOnBuild_IfEditorBuiltLocally },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "PlayOnBuild_Always.DisplayName", "Always" },
				{ "PlayOnBuild_Always.ToolTip", "Always build." },
				{ "PlayOnBuild_Default.DisplayName", "If project has code, or running a locally built editor" },
				{ "PlayOnBuild_Default.ToolTip", "Build based on project type." },
				{ "PlayOnBuild_IfEditorBuiltLocally.DisplayName", "If running a locally built editor" },
				{ "PlayOnBuild_IfEditorBuiltLocally.ToolTip", "Build if we're using a locally built (ie. non-promoted) editor." },
				{ "PlayOnBuild_Never.DisplayName", "Never" },
				{ "PlayOnBuild_Never.ToolTip", "Never build." },
				{ "ToolTip", "Determines whether to build the executable when launching on device. Note the equivalence between these settings and EProjectPackagingBuild." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPlayOnBuildMode",
				"EPlayOnBuildMode",
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
	static UEnum* EPlayNetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayNetMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayNetMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayNetMode>()
	{
		return EPlayNetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayNetMode(EPlayNetMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPlayNetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPlayNetMode_Hash() { return 3676190999U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayNetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayNetMode"), 0, Get_Z_Construct_UEnum_UnrealEd_EPlayNetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PIE_Standalone", (int64)PIE_Standalone },
				{ "PIE_ListenServer", (int64)PIE_ListenServer },
				{ "PIE_Client", (int64)PIE_Client },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "PIE_Client.DisplayName", "Play As Client" },
				{ "PIE_ListenServer.DisplayName", "Play As Listen Server" },
				{ "PIE_Standalone.DisplayName", "Play Offline" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPlayNetMode",
				"EPlayNetMode",
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
	static UEnum* EPlayModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayModeType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayModeType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayModeType>()
	{
		return EPlayModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayModeType(EPlayModeType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPlayModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPlayModeType_Hash() { return 988475963U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayModeType"), 0, Get_Z_Construct_UEnum_UnrealEd_EPlayModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayMode_InViewPort", (int64)PlayMode_InViewPort },
				{ "PlayMode_InEditorFloating", (int64)PlayMode_InEditorFloating },
				{ "PlayMode_InMobilePreview", (int64)PlayMode_InMobilePreview },
				{ "PlayMode_InTargetedMobilePreview", (int64)PlayMode_InTargetedMobilePreview },
				{ "PlayMode_InVulkanPreview", (int64)PlayMode_InVulkanPreview },
				{ "PlayMode_InNewProcess", (int64)PlayMode_InNewProcess },
				{ "PlayMode_InVR", (int64)PlayMode_InVR },
				{ "PlayMode_Simulate", (int64)PlayMode_Simulate },
				{ "PlayMode_Count", (int64)PlayMode_Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "PlayMode_Count.ToolTip", "The number of different Play Modes." },
				{ "PlayMode_InEditorFloating.ToolTip", "Runs in a new window." },
				{ "PlayMode_InMobilePreview.ToolTip", "Runs a mobile preview in a new process." },
				{ "PlayMode_InNewProcess.ToolTip", "Runs in a new process." },
				{ "PlayMode_InTargetedMobilePreview.ToolTip", "Runs a mobile preview targeted to a particular device in a new process." },
				{ "PlayMode_InViewPort.ToolTip", "Runs from within the editor." },
				{ "PlayMode_InVR.ToolTip", "Runs in VR." },
				{ "PlayMode_InVulkanPreview.ToolTip", "Runs a vulkan preview in a new process." },
				{ "PlayMode_Simulate.ToolTip", "Simulates in viewport without possessing the player." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPlayModeType",
				"EPlayModeType",
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
	static UEnum* EPlayModeLocations_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayModeLocations, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayModeLocations"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayModeLocations>()
	{
		return EPlayModeLocations_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayModeLocations(EPlayModeLocations_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPlayModeLocations"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Hash() { return 3599832570U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeLocations()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayModeLocations"), 0, Get_Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayLocation_CurrentCameraLocation", (int64)PlayLocation_CurrentCameraLocation },
				{ "PlayLocation_DefaultPlayerStart", (int64)PlayLocation_DefaultPlayerStart },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "PlayLocation_CurrentCameraLocation.ToolTip", "Spawns the player at the current camera location." },
				{ "PlayLocation_DefaultPlayerStart.ToolTip", "Spawns the player from the default player start." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPlayModeLocations",
				"EPlayModeLocations",
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
	static UEnum* ELaunchModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELaunchModeType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELaunchModeType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELaunchModeType>()
	{
		return ELaunchModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELaunchModeType(ELaunchModeType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELaunchModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELaunchModeType_Hash() { return 578174987U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELaunchModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELaunchModeType"), 0, Get_Z_Construct_UEnum_UnrealEd_ELaunchModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LaunchMode_OnDevice", (int64)LaunchMode_OnDevice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LaunchMode_OnDevice.ToolTip", "Runs the map on a specified device." },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELaunchModeType",
				"ELaunchModeType",
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
	static UEnum* ELabelAnchorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELabelAnchorMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELabelAnchorMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELabelAnchorMode>()
	{
		return ELabelAnchorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELabelAnchorMode(ELabelAnchorMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELabelAnchorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Hash() { return 2675404987U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELabelAnchorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELabelAnchorMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LabelAnchorMode_TopLeft", (int64)LabelAnchorMode_TopLeft },
				{ "LabelAnchorMode_TopCenter", (int64)LabelAnchorMode_TopCenter },
				{ "LabelAnchorMode_TopRight", (int64)LabelAnchorMode_TopRight },
				{ "LabelAnchorMode_CenterLeft", (int64)LabelAnchorMode_CenterLeft },
				{ "LabelAnchorMode_Centered", (int64)LabelAnchorMode_Centered },
				{ "LabelAnchorMode_CenterRight", (int64)LabelAnchorMode_CenterRight },
				{ "LabelAnchorMode_BottomLeft", (int64)LabelAnchorMode_BottomLeft },
				{ "LabelAnchorMode_BottomCenter", (int64)LabelAnchorMode_BottomCenter },
				{ "LabelAnchorMode_BottomRight", (int64)LabelAnchorMode_BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LabelAnchorMode_BottomCenter.DisplayName", "Bottom Center" },
				{ "LabelAnchorMode_BottomLeft.DisplayName", "Bottom Left" },
				{ "LabelAnchorMode_BottomRight.DisplayName", "Bottom Right" },
				{ "LabelAnchorMode_Centered.DisplayName", "Centered" },
				{ "LabelAnchorMode_CenterLeft.DisplayName", "Center Left" },
				{ "LabelAnchorMode_CenterRight.DisplayName", "Center Right" },
				{ "LabelAnchorMode_TopCenter.DisplayName", "Top Center" },
				{ "LabelAnchorMode_TopLeft.DisplayName", "Top Left" },
				{ "LabelAnchorMode_TopRight.DisplayName", "Top Right" },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
				{ "ToolTip", "Enumerates label anchor modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELabelAnchorMode",
				"ELabelAnchorMode",
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
class UScriptStruct* FPlayScreenResolution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FPlayScreenResolution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayScreenResolution, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PlayScreenResolution"), sizeof(FPlayScreenResolution), Get_Z_Construct_UScriptStruct_FPlayScreenResolution_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPlayScreenResolution>()
{
	return FPlayScreenResolution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayScreenResolution(FPlayScreenResolution::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("PlayScreenResolution"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFPlayScreenResolution
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFPlayScreenResolution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayScreenResolution")),new UScriptStruct::TCppStructOps<FPlayScreenResolution>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFPlayScreenResolution;
	struct Z_Construct_UScriptStruct_FPlayScreenResolution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSwapAspectRatio_MetaData[];
#endif
		static void NewProp_bCanSwapAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSwapAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Holds information about a screen resolution to be used for playing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayScreenResolution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the device profile this links to" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayScreenResolution, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not this device supports both landscape and portrait modes" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_SetBit(void* Obj)
	{
		((FPlayScreenResolution*)Obj)->bCanSwapAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio = { "bCanSwapAspectRatio", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayScreenResolution), &Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's aspect ratio (as a string)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayScreenResolution, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's height (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayScreenResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's width (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayScreenResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "FText" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayScreenResolution, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PlayScreenResolution",
		sizeof(FPlayScreenResolution),
		alignof(FPlayScreenResolution),
		Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayScreenResolution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayScreenResolution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayScreenResolution"), sizeof(FPlayScreenResolution), Get_Z_Construct_UScriptStruct_FPlayScreenResolution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayScreenResolution_Hash() { return 2448880627U; }
	void ULevelEditorPlaySettings::StaticRegisterNativesULevelEditorPlaySettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister()
	{
		return ULevelEditorPlaySettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomUnsafeZoneDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomUnsafeZoneDimensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomUnsafeZoneDimensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomUnsafeZoneStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomUnsafeZoneStarts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomUnsafeZoneStarts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIESafeZoneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PIESafeZoneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceToEmulate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceToEmulate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelevisionScreenResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TelevisionScreenResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TelevisionScreenResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabletScreenResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabletScreenResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabletScreenResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneScreenResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhoneScreenResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhoneScreenResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorScreenResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MonitorScreenResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MonitorScreenResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaptopScreenResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaptopScreenResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaptopScreenResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPIEPreviewDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastExecutedPIEPreviewDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPlayModeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastExecutedPlayModeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPlayModeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastExecutedPlayModeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchModeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastExecutedLaunchModeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastExecutedLaunchName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastExecutedLaunchDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleInstancePositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultipleInstancePositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultipleInstancePositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleInstanceLastWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultipleInstanceLastWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleInstanceLastHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultipleInstanceLastHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalLaunchOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalLaunchOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalServerGameOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalServerGameOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientWindowHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientWindowHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAudioDeviceForEveryPlayer_MetaData[];
#endif
		static void NewProp_CreateAudioDeviceForEveryPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateAudioDeviceForEveryPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RouteGamepadToSecondWindow_MetaData[];
#endif
		static void NewProp_RouteGamepadToSecondWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RouteGamepadToSecondWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoConnectToServer_MetaData[];
#endif
		static void NewProp_AutoConnectToServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoConnectToServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientWindowWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientWindowWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayNumberOfClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayNumberOfClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayNetDedicated_MetaData[];
#endif
		static void NewProp_PlayNetDedicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayNetDedicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunUnderOneProcess_MetaData[];
#endif
		static void NewProp_RunUnderOneProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RunUnderOneProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayNetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayNetMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCompileBlueprintsOnLaunch_MetaData[];
#endif
		static void NewProp_bAutoCompileBlueprintsOnLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCompileBlueprintsOnLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaunchConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildGameBeforeLaunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuildGameBeforeLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalLaunchParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalLaunchParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableStandaloneSound_MetaData[];
#endif
		static void NewProp_DisableStandaloneSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableStandaloneSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIEAlwaysOnTop_MetaData[];
#endif
		static void NewProp_PIEAlwaysOnTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PIEAlwaysOnTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterNewWindow_MetaData[];
#endif
		static void NewProp_CenterNewWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CenterNewWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWindowPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWindowPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWindowHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewWindowHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWindowWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewWindowWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreferToStreamLevelsInPIE_MetaData[];
#endif
		static void NewProp_bPreferToStreamLevelsInPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferToStreamLevelsInPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData[];
#endif
		static void NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyLoadVisibleLevelsInPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInEditorSoundQualityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayInEditorSoundQualityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnablePIEEnterAndExitSounds_MetaData[];
#endif
		static void NewProp_EnablePIEEnterAndExitSounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnablePIEEnterAndExitSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGameSound_MetaData[];
#endif
		static void NewProp_EnableGameSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGameSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRecompileBlueprints_MetaData[];
#endif
		static void NewProp_AutoRecompileBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoRecompileBlueprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldMinimizeEditorOnVRPIE_MetaData[];
#endif
		static void NewProp_ShouldMinimizeEditorOnVRPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldMinimizeEditorOnVRPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportGetsHMDControl_MetaData[];
#endif
		static void NewProp_ViewportGetsHMDControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ViewportGetsHMDControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseControlLabelPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MouseControlLabelPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMouseControlLabel_MetaData[];
#endif
		static void NewProp_ShowMouseControlLabel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMouseControlLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMouseForTouch_MetaData[];
#endif
		static void NewProp_UseMouseForTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseMouseForTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameGetsMouseControl_MetaData[];
#endif
		static void NewProp_GameGetsMouseControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GameGetsMouseControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFromHerePlayerStartClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFromHerePlayerStartClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorPlaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/LevelEditorPlaySettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Implements the Editor's play settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions = { "CustomUnsafeZoneDimensions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, CustomUnsafeZoneDimensions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_Inner = { "CustomUnsafeZoneDimensions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts = { "CustomUnsafeZoneStarts", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, CustomUnsafeZoneStarts), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_Inner = { "CustomUnsafeZoneStarts", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride = { "PIESafeZoneOverride", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PIESafeZoneOverride), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate = { "DeviceToEmulate", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, DeviceToEmulate), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on television screens." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions = { "TelevisionScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, TelevisionScreenResolutions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_Inner = { "TelevisionScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on tablet devices." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions = { "TabletScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, TabletScreenResolutions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_Inner = { "TabletScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on mobile phones." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions = { "PhoneScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PhoneScreenResolutions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_Inner = { "PhoneScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on desktop monitors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions = { "MonitorScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, MonitorScreenResolutions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_Inner = { "MonitorScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on mobile phones." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions = { "LaptopScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LaptopScreenResolutions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_Inner = { "LaptopScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last device that the user ran a play session on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice = { "LastExecutedPIEPreviewDevice", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPIEPreviewDevice), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play session the user ran." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType = { "LastExecutedPlayModeType", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPlayModeType), Z_Construct_UEnum_UnrealEd_EPlayModeType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play location the user ran." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation = { "LastExecutedPlayModeLocation", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPlayModeLocation), Z_Construct_UEnum_UnrealEd_EPlayModeLocations, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play-on session the user ran." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType = { "LastExecutedLaunchModeType", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchModeType), Z_Construct_UEnum_UnrealEd_ELaunchModeType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last device that the user ran a play session on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName = { "LastExecutedLaunchName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchName), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last platform that the user ran a play session on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice = { "LastExecutedLaunchDevice", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchDevice), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last known screen positions of multiple instance windows (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions = { "MultipleInstancePositions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, MultipleInstancePositions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_Inner = { "MultipleInstancePositions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last used width for multiple instance windows (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastWidth = { "MultipleInstanceLastWidth", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, MultipleInstanceLastWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last used height for multiple instance windows (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastHeight = { "MultipleInstanceLastHeight", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, MultipleInstanceLastHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Additional command line options that will be passed to standalone game instances, for example -debug" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions = { "AdditionalLaunchOptions", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalLaunchOptions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Additional options that will be passed to the server as URL parameters, in the format ?bIsLanMatch=1?listen - any additional command line switches should be passed in the Command Line Arguments field below." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions = { "AdditionalServerGameOptions", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalServerGameOptions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Height to use when spawning additional windows." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight = { "ClientWindowHeight", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "EditCondition", "EnableGameSound" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "If checked, a separate audio device is created for every player.\n\nIf unchecked, a separate audio device is created for only the first two players and uses the main audio device for more than 2 players.\n\nEnabling this will allow rendering accurate audio from every player's perspective but will use more CPU. Keep this disabled on lower-perf machines." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->CreateAudioDeviceForEveryPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer = { "CreateAudioDeviceForEveryPlayer", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "When running multiple player windows in a single process, this option determines how the game pad input gets routed.\n\nIf unchecked (default) then the 1st game pad is attached to the 1st window, 2nd to the 2nd window, and so on.\n\nIf it is checked, the 1st game pad goes the 2nd window. The 1st window can then be controlled by keyboard/mouse, which is convenient if two people are testing on the same computer." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->RouteGamepadToSecondWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow = { "RouteGamepadToSecondWindow", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "When running multiple players or a dedicated server the client need to connect to the server, this option sets how they connect\n\nIf this is checked, the clients will automatically connect to the launched server, if false they will launch into the map and wait" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->AutoConnectToServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer = { "AutoConnectToServer", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Width to use when spawning additional windows." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth = { "ClientWindowWidth", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "What port used by the server for simple networking" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerPort), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The editor and listen server count as players, a dedicated server will not. Clients make up the remainder." },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients = { "PlayNumberOfClients", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNumberOfClients), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "If checked, a separate dedicated server will be launched. Otherwise the first player will act as a listen server that all other players connect to." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->PlayNetDedicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated = { "PlayNetDedicated", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Spawn multiple player windows in a single instance of UE4. This will load much faster, but has potential to have more issues." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->RunUnderOneProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess = { "RunUnderOneProcess", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData[] = {
		{ "Category", "MultiplayerOptions" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "NetMode to use for Play In Editor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode = { "PlayNetMode", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNetMode), Z_Construct_UEnum_UnrealEd_EPlayNetMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to automatically recompile dirty Blueprints before launching" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bAutoCompileBlueprintsOnLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch = { "bAutoCompileBlueprintsOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Which build configuration to use when launching on device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration = { "LaunchConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, LaunchConfiguration), Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to build the game before launching on device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch = { "BuildGameBeforeLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, BuildGameBeforeLaunch), Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData[] = {
		{ "Category", "PlayInStandaloneGame" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Extra parameters to be include as part of the command line for the standalone game." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters = { "AdditionalLaunchParameters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalLaunchParameters), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData[] = {
		{ "Category", "PlayInStandaloneGame" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether sound should be disabled when playing standalone games." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->DisableStandaloneSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound = { "DisableStandaloneSound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData[] = {
		{ "Category", "PlayInNewWindow" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Always have the PIE window on top of the parent windows." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->PIEAlwaysOnTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop = { "PIEAlwaysOnTop", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether the new window should be centered on the screen." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->CenterNewWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow = { "CenterNewWindow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The position of the new view port window on the screen in pixels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition = { "NewWindowPosition", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The height of the new view port window in pixels (0 = use the desktop's screen resolution)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight = { "NewWindowHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The width of the new view port window in pixels (0 = use the desktop's screen resolution)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth = { "NewWindowWidth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "DisplayName", "Stream Sub-Levels during Play in Editor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Prefer to stream sub-levels from the disk instead of duplicating editor sub-levels" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bPreferToStreamLevelsInPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE = { "bPreferToStreamLevelsInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "True if Play In Editor should only load currently-visible levels in PIE." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bOnlyLoadVisibleLevelsInPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE = { "bOnlyLoadVisibleLevelsInPIE", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Which quality level to use when playing in editor" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel = { "PlayInEditorSoundQualityLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayInEditorSoundQualityLevel), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "DisplayName", "Enable PIE Enter and Exit Sounds" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to play a sound when entering and exiting PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->EnablePIEEnterAndExitSounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds = { "EnablePIEEnterAndExitSounds", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to play sounds when in a Play In Editor session" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->EnableGameSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound = { "EnableGameSound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Automatically recompile blueprints used by the current level when initiating a Play In Editor session" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->AutoRecompileBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints = { "AutoRecompileBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not the editor is minimized on VR PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ShouldMinimizeEditorOnVRPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE = { "ShouldMinimizeEditorOnVRPIE", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not HMD orientation should be used when playing in viewport" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ViewportGetsHMDControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl = { "ViewportGetsHMDControl", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Location on screen to anchor the mouse control label when in PIE mode." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition = { "MouseControlLabelPosition", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, MouseControlLabelPosition), Z_Construct_UEnum_UnrealEd_ELabelAnchorMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to show a label for mouse control gestures in the PIE view." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ShowMouseControlLabel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel = { "ShowMouseControlLabel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "While using the game viewport, it sends mouse movement and clicks as touch events, instead of as mouse events." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->UseMouseForTouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch = { "UseMouseForTouch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Give the game mouse control when PIE starts or require a click in the viewport first" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->GameGetsMouseControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl = { "GameGetsMouseControl", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The PlayerStart class used when spawning the player at the current camera location." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName = { "PlayFromHerePlayerStartClassName", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayFromHerePlayerStartClassName), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstanceLastHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorPlaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorPlaySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::ClassParams = {
		&ULevelEditorPlaySettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorPlaySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditorPlaySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditorPlaySettings, 1216418824);
	template<> UNREALED_API UClass* StaticClass<ULevelEditorPlaySettings>()
	{
		return ULevelEditorPlaySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditorPlaySettings(Z_Construct_UClass_ULevelEditorPlaySettings, &ULevelEditorPlaySettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelEditorPlaySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorPlaySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
