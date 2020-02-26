// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidRuntimeSettings/Classes/AndroidRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidRuntimeSettings() {}
// Cross Module References
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger();
	UPackage* Z_Construct_UPackage__Script_AndroidRuntimeSettings();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRMode();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity();
	ANDROIDRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping();
	ANDROIDRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping();
	ANDROIDRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister();
	ANDROIDRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UAndroidRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
// End Cross Module References
	static UEnum* EAndroidGraphicsDebugger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidGraphicsDebugger"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidGraphicsDebugger::Type>()
	{
		return EAndroidGraphicsDebugger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidGraphicsDebugger(EAndroidGraphicsDebugger_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidGraphicsDebugger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Hash() { return 725280600U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidGraphicsDebugger"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidGraphicsDebugger::None", (int64)EAndroidGraphicsDebugger::None },
				{ "EAndroidGraphicsDebugger::Mali", (int64)EAndroidGraphicsDebugger::Mali },
				{ "EAndroidGraphicsDebugger::Adreno", (int64)EAndroidGraphicsDebugger::Adreno },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Adreno.DisplayName", "Adreno Profiler" },
				{ "Adreno.ToolTip", "Configure for Adreno Profiler." },
				{ "Mali.DisplayName", "Mali Graphics Debugger" },
				{ "Mali.ToolTip", "Configure for Mali Graphics Debugger." },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "None.DisplayName", "None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidGraphicsDebugger",
				"EAndroidGraphicsDebugger::Type",
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
	static UEnum* EGoogleVRCaps_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EGoogleVRCaps"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EGoogleVRCaps::Type>()
	{
		return EGoogleVRCaps_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGoogleVRCaps(EGoogleVRCaps_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EGoogleVRCaps"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps_Hash() { return 2126769986U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGoogleVRCaps"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGoogleVRCaps::Cardboard", (int64)EGoogleVRCaps::Cardboard },
				{ "EGoogleVRCaps::Daydream33", (int64)EGoogleVRCaps::Daydream33 },
				{ "EGoogleVRCaps::Daydream63", (int64)EGoogleVRCaps::Daydream63 },
				{ "EGoogleVRCaps::Daydream66", (int64)EGoogleVRCaps::Daydream66 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cardboard.DisplayName", "Cardboard" },
				{ "Cardboard.ToolTip", "Head orientation, no controller." },
				{ "Daydream33.DisplayName", "Daydream (3.3 DoF)" },
				{ "Daydream33.ToolTip", "Head orientation, controller orientation. Daydream without positional tracking." },
				{ "Daydream63.DisplayName", "Daydream (6.3 DoF)" },
				{ "Daydream63.ToolTip", "Head position and orientation, controller orientation. Daydream with positional tracking." },
				{ "Daydream66.DisplayName", "Daydream (6.6 DoF)" },
				{ "Daydream66.ToolTip", "Head position and orientation, 2 controllers with position and orientation. Daydream with positional tracking." },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EGoogleVRCaps",
				"EGoogleVRCaps::Type",
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
	static UEnum* EGoogleVRMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRMode, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EGoogleVRMode"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EGoogleVRMode::Type>()
	{
		return EGoogleVRMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGoogleVRMode(EGoogleVRMode_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EGoogleVRMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRMode_Hash() { return 807432823U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGoogleVRMode"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGoogleVRMode::Cardboard", (int64)EGoogleVRMode::Cardboard },
				{ "EGoogleVRMode::Daydream", (int64)EGoogleVRMode::Daydream },
				{ "EGoogleVRMode::DaydreamAndCardboard", (int64)EGoogleVRMode::DaydreamAndCardboard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cardboard.DisplayName", "Cardboard" },
				{ "Cardboard.ToolTip", "Configure GoogleVR to run in Cardboard-only mode." },
				{ "Daydream.DisplayName", "Daydream" },
				{ "Daydream.ToolTip", "Configure GoogleVR to run in Daydream-only mode. In this mode, app won't be able to run on Non Daydream-ready phone." },
				{ "DaydreamAndCardboard.DisplayName", "Daydream & Cardboard" },
				{ "DaydreamAndCardboard.ToolTip", "Configure GoogleVR to run in Daydream mode on Daydream-ready phone and fallback to Cardboard mode on Non Daydream-ready phone." },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EGoogleVRMode",
				"EGoogleVRMode::Type",
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
	static UEnum* EAndroidAudio_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidAudio"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidAudio::Type>()
	{
		return EAndroidAudio_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidAudio(EAndroidAudio_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidAudio"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Hash() { return 29216333U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidAudio"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidAudio::Default", (int64)EAndroidAudio::Default },
				{ "EAndroidAudio::OGG", (int64)EAndroidAudio::OGG },
				{ "EAndroidAudio::ADPCM", (int64)EAndroidAudio::ADPCM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADPCM.DisplayName", "ADPCM" },
				{ "ADPCM.ToolTip", "This option selects ADPCM lossless encoding." },
				{ "Default.DisplayName", "Default" },
				{ "Default.ToolTip", "This option selects the default encoder." },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "OGG.DisplayName", "Ogg Vorbis" },
				{ "OGG.ToolTip", "Selects Ogg Vorbis encoding." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidAudio",
				"EAndroidAudio::Type",
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
	static UEnum* EAndroidInstallLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidInstallLocation"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidInstallLocation::Type>()
	{
		return EAndroidInstallLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidInstallLocation(EAndroidInstallLocation_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidInstallLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Hash() { return 346564754U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidInstallLocation"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidInstallLocation::InternalOnly", (int64)EAndroidInstallLocation::InternalOnly },
				{ "EAndroidInstallLocation::PreferExternal", (int64)EAndroidInstallLocation::PreferExternal },
				{ "EAndroidInstallLocation::Auto", (int64)EAndroidInstallLocation::Auto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.ToolTip", "Internal storage is preferred over external, unless the interal storage is low on space" },
				{ "InternalOnly.ToolTip", "Install your app only on internal device storage" },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "PreferExternal.ToolTip", "Install your app on external storage when available" },
				{ "ToolTip", "The default install location for the application" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidInstallLocation",
				"EAndroidInstallLocation::Type",
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
	static UEnum* EAndroidDepthBufferPreference_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidDepthBufferPreference"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidDepthBufferPreference::Type>()
	{
		return EAndroidDepthBufferPreference_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidDepthBufferPreference(EAndroidDepthBufferPreference_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidDepthBufferPreference"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Hash() { return 1364120579U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidDepthBufferPreference"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidDepthBufferPreference::Default", (int64)EAndroidDepthBufferPreference::Default },
				{ "EAndroidDepthBufferPreference::Bits16", (int64)EAndroidDepthBufferPreference::Bits16 },
				{ "EAndroidDepthBufferPreference::Bits24", (int64)EAndroidDepthBufferPreference::Bits24 },
				{ "EAndroidDepthBufferPreference::Bits32", (int64)EAndroidDepthBufferPreference::Bits32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bits16.DisplayName", "16-bit" },
				{ "Bits24.DisplayName", "24-bit" },
				{ "Bits32.DisplayName", "32-bit" },
				{ "Default.DisplayName", "Default" },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "ToolTip", "Depth buffer precision preferences // IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertDepthBufferIniValue()!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidDepthBufferPreference",
				"EAndroidDepthBufferPreference::Type",
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
	static UEnum* EAndroidScreenOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidScreenOrientation"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidScreenOrientation::Type>()
	{
		return EAndroidScreenOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidScreenOrientation(EAndroidScreenOrientation_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidScreenOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Hash() { return 3278266325U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidScreenOrientation"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidScreenOrientation::Portrait", (int64)EAndroidScreenOrientation::Portrait },
				{ "EAndroidScreenOrientation::ReversePortrait", (int64)EAndroidScreenOrientation::ReversePortrait },
				{ "EAndroidScreenOrientation::SensorPortrait", (int64)EAndroidScreenOrientation::SensorPortrait },
				{ "EAndroidScreenOrientation::Landscape", (int64)EAndroidScreenOrientation::Landscape },
				{ "EAndroidScreenOrientation::ReverseLandscape", (int64)EAndroidScreenOrientation::ReverseLandscape },
				{ "EAndroidScreenOrientation::SensorLandscape", (int64)EAndroidScreenOrientation::SensorLandscape },
				{ "EAndroidScreenOrientation::Sensor", (int64)EAndroidScreenOrientation::Sensor },
				{ "EAndroidScreenOrientation::FullSensor", (int64)EAndroidScreenOrientation::FullSensor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FullSensor.ToolTip", "Use any orientation (including ones the device wouldn't choose in Sensor mode), based on the device orientation sensor." },
				{ "Landscape.ToolTip", "Landscape orientation (the display is wider than it is tall)." },
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "Portrait.ToolTip", "Portrait orientation (the display is taller than it is wide)." },
				{ "ReverseLandscape.ToolTip", "Landscape orientation rotated 180 degrees." },
				{ "ReversePortrait.ToolTip", "Portrait orientation rotated 180 degrees." },
				{ "Sensor.ToolTip", "Use any orientation the device normally supports, based on the device orientation sensor." },
				{ "SensorLandscape.ToolTip", "Use either landscape or reverse landscape orientation, based on the device orientation sensor." },
				{ "SensorPortrait.ToolTip", "Use either portrait or reverse portrait orientation, where supported by the device, based on the device orientation sensor." },
				{ "ToolTip", "IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertOrientationIniValue()!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidScreenOrientation",
				"EAndroidScreenOrientation::Type",
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
	static UEnum* EAndroidAntVerbosity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidAntVerbosity"));
		}
		return Singleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidAntVerbosity::Type>()
	{
		return EAndroidAntVerbosity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAndroidAntVerbosity(EAndroidAntVerbosity_StaticEnum, TEXT("/Script/AndroidRuntimeSettings"), TEXT("EAndroidAntVerbosity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity_Hash() { return 428611713U; }
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAndroidAntVerbosity"), 0, Get_Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAndroidAntVerbosity::Quiet", (int64)EAndroidAntVerbosity::Quiet },
				{ "EAndroidAntVerbosity::Normal", (int64)EAndroidAntVerbosity::Normal },
				{ "EAndroidAntVerbosity::Verbose", (int64)EAndroidAntVerbosity::Verbose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
				{ "Normal.ToolTip", "Normal logging (no options)" },
				{ "Quiet.ToolTip", "Extra quiet logging (-quiet), errors will be logged by second run at normal verbosity." },
				{ "Verbose.ToolTip", "Extra verbose logging (-verbose)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
				nullptr,
				"EAndroidAntVerbosity",
				"EAndroidAntVerbosity::Type",
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
class UScriptStruct* FGooglePlayLeaderboardMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANDROIDRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("GooglePlayLeaderboardMapping"), sizeof(FGooglePlayLeaderboardMapping), Get_Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Hash());
	}
	return Singleton;
}
template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FGooglePlayLeaderboardMapping>()
{
	return FGooglePlayLeaderboardMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGooglePlayLeaderboardMapping(FGooglePlayLeaderboardMapping::StaticStruct, TEXT("/Script/AndroidRuntimeSettings"), TEXT("GooglePlayLeaderboardMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayLeaderboardMapping
{
	FScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayLeaderboardMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GooglePlayLeaderboardMapping")),new UScriptStruct::TCppStructOps<FGooglePlayLeaderboardMapping>);
	}
} ScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayLeaderboardMapping;
	struct Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Holds the game-specific leaderboard name and corresponding ID from Google Play services." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGooglePlayLeaderboardMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The ID of the corresponding leaderboard, generated by the Google Play developer console." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID = { "LeaderboardID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGooglePlayLeaderboardMapping, LeaderboardID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The game-specific leaderboard name (the one passed in to WriteLeaderboards calls)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGooglePlayLeaderboardMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		&NewStructOps,
		"GooglePlayLeaderboardMapping",
		sizeof(FGooglePlayLeaderboardMapping),
		alignof(FGooglePlayLeaderboardMapping),
		Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GooglePlayLeaderboardMapping"), sizeof(FGooglePlayLeaderboardMapping), Get_Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Hash() { return 386467678U; }
class UScriptStruct* FGooglePlayAchievementMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANDROIDRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping, Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("GooglePlayAchievementMapping"), sizeof(FGooglePlayAchievementMapping), Get_Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Hash());
	}
	return Singleton;
}
template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FGooglePlayAchievementMapping>()
{
	return FGooglePlayAchievementMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGooglePlayAchievementMapping(FGooglePlayAchievementMapping::StaticStruct, TEXT("/Script/AndroidRuntimeSettings"), TEXT("GooglePlayAchievementMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayAchievementMapping
{
	FScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayAchievementMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GooglePlayAchievementMapping")),new UScriptStruct::TCppStructOps<FGooglePlayAchievementMapping>);
	}
} ScriptStruct_AndroidRuntimeSettings_StaticRegisterNativesFGooglePlayAchievementMapping;
	struct Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Holds the game-specific achievement name and corresponding ID from Google Play services." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGooglePlayAchievementMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The ID of the corresponding achievement, generated by the Google Play developer console." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGooglePlayAchievementMapping, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The game-specific achievement name (the one passed in to WriteAchievement calls)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGooglePlayAchievementMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		&NewStructOps,
		"GooglePlayAchievementMapping",
		sizeof(FGooglePlayAchievementMapping),
		alignof(FGooglePlayAchievementMapping),
		Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GooglePlayAchievementMapping"), sizeof(FGooglePlayAchievementMapping), Get_Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Hash() { return 1184909456U; }
	void UAndroidRuntimeSettings::StaticRegisterNativesUAndroidRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister()
	{
		return UAndroidRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDKAPILevelOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NDKAPILevelOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SDKAPILevelOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SDKAPILevelOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ASTC_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ASTC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ATC_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ATC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_PVRTC_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_PVRTC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_DXT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_DXT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ETC2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ETC2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ETC1a_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ETC1a;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ETC1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ETC1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ASTC_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ASTC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ASTC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ATC_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ATC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ATC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_PVRTC_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_PVRTC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_PVRTC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_DXT_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_DXT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_DXT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ETC2_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ETC2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ETC2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ETC1a_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ETC1a_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ETC1a;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ETC1_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ETC1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ETC1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaliGraphicsDebuggerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaliGraphicsDebuggerPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidGraphicsDebugger_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AndroidGraphicsDebugger;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AndroidAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockAndroidKeysOnControllers_MetaData[];
#endif
		static void NewProp_bBlockAndroidKeysOnControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockAndroidKeysOnControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowControllers_MetaData[];
#endif
		static void NewProp_bAllowControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowIMU_MetaData[];
#endif
		static void NewProp_bAllowIMU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowIMU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLaunchImage_MetaData[];
#endif
		static void NewProp_bShowLaunchImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLaunchImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GCMClientSenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GCMClientSenderID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GooglePlayLicenseKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GooglePlayLicenseKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdMobAdUnitIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdMobAdUnitIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdMobAdUnitIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdMobAdUnitID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdMobAdUnitID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportAdMob_MetaData[];
#endif
		static void NewProp_bSupportAdMob_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportAdMob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapshots_MetaData[];
#endif
		static void NewProp_bEnableSnapshots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapshots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AchievementMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamesAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GamesAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGetAccounts_MetaData[];
#endif
		static void NewProp_bUseGetAccounts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGetAccounts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGooglePlaySupport_MetaData[];
#endif
		static void NewProp_bEnableGooglePlaySupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGooglePlaySupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveSymbols_MetaData[];
#endif
		static void NewProp_bSaveSymbols_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveSymbols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildWithHiddenSymbolVisibility_MetaData[];
#endif
		static void NewProp_bBuildWithHiddenSymbolVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildWithHiddenSymbolVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectVulkanByDefault_MetaData[];
#endif
		static void NewProp_bDetectVulkanByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectVulkanByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsVulkan_MetaData[];
#endif
		static void NewProp_bSupportsVulkan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsVulkan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildForES31_MetaData[];
#endif
		static void NewProp_bBuildForES31_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildForES31;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildForES2_MetaData[];
#endif
		static void NewProp_bBuildForES2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildForES2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildForX8664_MetaData[];
#endif
		static void NewProp_bBuildForX8664_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildForX8664;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildForArm64_MetaData[];
#endif
		static void NewProp_bBuildForArm64_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildForArm64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildForArmV7_MetaData[];
#endif
		static void NewProp_bBuildForArmV7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildForArmV7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyStorePassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyStorePassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyAlias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyAlias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGoogleVRSustainedPerformance_MetaData[];
#endif
		static void NewProp_bGoogleVRSustainedPerformance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGoogleVRSustainedPerformance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoogleVRCaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoogleVRCaps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GoogleVRCaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveOSIG_MetaData[];
#endif
		static void NewProp_bRemoveOSIG_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveOSIG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPackageForGearVR_MetaData[];
#endif
		static void NewProp_bPackageForGearVR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPackageForGearVR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAndroidVoiceEnabled_MetaData[];
#endif
		static void NewProp_bAndroidVoiceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAndroidVoiceEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraPermissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraPermissions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraPermissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraActivitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraActivitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraActivityNodeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraActivityNodeTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraActivityNodeTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraApplicationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraApplicationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraApplicationNodeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraApplicationNodeTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraApplicationNodeTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraManifestNodeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraManifestNodeTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraManifestNodeTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidateTextureFormats_MetaData[];
#endif
		static void NewProp_bValidateTextureFormats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidateTextureFormats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthBufferPreference_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthBufferPreference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNewKeyboard_MetaData[];
#endif
		static void NewProp_bEnableNewKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNewKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullScreen_MetaData[];
#endif
		static void NewProp_bFullScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntVerbosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AntVerbosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDisplayCutout_MetaData[];
#endif
		static void NewProp_bUseDisplayCutout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDisplayCutout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExternalFilesDir_MetaData[];
#endif
		static void NewProp_bUseExternalFilesDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExternalFilesDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLargeOBBFiles_MetaData[];
#endif
		static void NewProp_bAllowLargeOBBFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLargeOBBFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableVerifyOBBOnStartUp_MetaData[];
#endif
		static void NewProp_bDisableVerifyOBBOnStartUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableVerifyOBBOnStartUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateAllPlatformsInstall_MetaData[];
#endif
		static void NewProp_bCreateAllPlatformsInstall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateAllPlatformsInstall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPackageDataInsideApk_MetaData[];
#endif
		static void NewProp_bPackageDataInsideApk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPackageDataInsideApk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLint_MetaData[];
#endif
		static void NewProp_bEnableLint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGradle_MetaData[];
#endif
		static void NewProp_bEnableGradle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGradle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstallLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSDKVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSDKVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSDKVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinSDKVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StoreVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Android runtime platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData[] = {
		{ "Category", "Project SDK Override" },
		{ "DisplayName", "NDK API Level (specific version or 'latest' - see tooltip)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride = { "NDKAPILevelOverride", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, NDKAPILevelOverride), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData[] = {
		{ "Category", "Project SDK Override" },
		{ "DisplayName", "SDK API Level (specific version, 'latest', or 'matchndk' - see tooltip)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride = { "SDKAPILevelOverride", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, SDKAPILevelOverride), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "ASTC texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ASTC texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.9." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC = { "TextureFormatPriority_ASTC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ASTC), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ATC_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "ATC texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ATC texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.5." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ATC = { "TextureFormatPriority_ATC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ATC), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ATC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ATC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_PVRTC_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "PVRTC texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the PVRTC texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.8." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_PVRTC = { "TextureFormatPriority_PVRTC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_PVRTC), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_PVRTC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_PVRTC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "DXT texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the DXT texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.6." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT = { "TextureFormatPriority_DXT", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_DXT), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "ETC2 texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ETC2 texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.2." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2 = { "TextureFormatPriority_ETC2", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ETC2), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1a_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "ETC1 - alpha texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ETC1a texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.2." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1a = { "TextureFormatPriority_ETC1a", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ETC1a), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1a_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1a_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "DisplayName", "ETC1 texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ETC1 texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1 = { "TextureFormatPriority_ETC1", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ETC1), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include ASTC textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ASTC textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ASTC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC = { "bMultiTargetFormat_ASTC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include ATC textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ATC textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ATC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC = { "bMultiTargetFormat_ATC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include PVRTC textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include PVRTC textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_PVRTC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC = { "bMultiTargetFormat_PVRTC", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include DXT textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include DXT textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_DXT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT = { "bMultiTargetFormat_DXT", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include ETC2 textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ETC2 textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ETC2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2 = { "bMultiTargetFormat_ETC2", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include ETC1 - alpha textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ETC1a textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ETC1a = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a = { "bMultiTargetFormat_ETC1a", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "DisplayName", "Include ETC1 textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ETC1 textures when packaging with the Android (Multi) variant. ETC1 will be included if no other formats are selected." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ETC1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1 = { "bMultiTargetFormat_ETC1", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData[] = {
		{ "Category", "GraphicsDebugger" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The path to your Mali Graphics Debugger installation (eg C:/Program Files/ARM/Mali Developer Tools/Mali Graphics Debugger v4.2.0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath = { "MaliGraphicsDebuggerPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MaliGraphicsDebuggerPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData[] = {
		{ "Category", "GraphicsDebugger" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Several Android graphics debuggers require configuration changes to be made to your application in order to operate. Choosing an option from this menu will configure your project to work with that graphics debugger." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger = { "AndroidGraphicsDebugger", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AndroidGraphicsDebugger), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "DisplayName", "Stream All Soundwaves Longer Than:" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold = { "AutoStreamingThreshold", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AutoStreamingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier = { "CompressionQualityModifier", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, CompressionQualityModifier), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Min" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate = { "MinSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MinSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Low" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate = { "LowSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, LowSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Medium" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate = { "MedSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MedSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "High" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate = { "HighSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, HighSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Max" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of which sample rates are used for each sample rate quality for a specific platform." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate = { "MaxSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bResampleForDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice = { "bResampleForDevice", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Various overrides for how this platform should handle compression and decompression" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides = { "CompressionOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, CompressionOverrides), Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Source Workers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers = { "AudioNumSourceWorkers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioNumSourceWorkers), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Channels" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels = { "AudioMaxChannels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioMaxChannels), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "2" },
		{ "DisplayName", "Number of Buffers To Enqueue" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms." },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue = { "AudioNumBuffersToEnqueue", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioNumBuffersToEnqueue), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "512" },
		{ "DisplayName", "Callback Buffer Size" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize = { "AudioCallbackBufferFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioCallbackBufferFrameSize), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Audio Mixer Sample Rate" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Sample rate to run the audio mixer with." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Encoding Format" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Android encoding options." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio = { "AndroidAudio", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AndroidAudio), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Block Android system keys being sent from controllers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, controllers will not send Android_Back and Android_Menu events that might cause unnecce" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBlockAndroidKeysOnControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers = { "bBlockAndroidKeysOnControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Allow Bluetooth controllers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, Bluetooth connected controllers will send input" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers = { "bAllowControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData[] = {
		{ "Category", "Input" },
		{ "DisplayName", "Allow IMU Sampling" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Allows accelerometer, magnetometer, and gyroscope event handling, disabling may improve performance." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowIMU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU = { "bAllowIMU", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData[] = {
		{ "Category", "LaunchImages" },
		{ "DisplayName", "Show launch image" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Show the launch image as a startup slash screen" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bShowLaunchImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage = { "bShowLaunchImage", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "Google Cloud Messaging Sender ID" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The sender id obtained from Firebase Console, leave blank to disable (associate this with your app in Google Player Developer Console)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID = { "GCMClientSenderID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, GCMClientSenderID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The unique identifier for this application (needed for IAP)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey = { "GooglePlayLicenseKey", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, GooglePlayLicenseKey), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Identifiers for ads obtained from AdMob" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs = { "AdMobAdUnitIDs", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AdMobAdUnitIDs), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_Inner = { "AdMobAdUnitIDs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The unique identifier for the ad obtained from AdMob." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID = { "AdMobAdUnitID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AdMobAdUnitID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "Include AdMob support for ads" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this includes the AdMob SDK and will be detected by Google Play Console on upload of APK.  Disable if you do not need ads to remove this warning." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSupportAdMob = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob = { "bSupportAdMob", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "Enable Snapshots on Google Play login [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this requests snapshots support for saved games during Google Play login." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableSnapshots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots = { "bEnableSnapshots", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of game leaderboard names to IDs generated by Google Play." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, LeaderboardMap), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of game achievement names to IDs generated by Google Play." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap = { "AchievementMap", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AchievementMap), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_Inner = { "AchievementMap", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGooglePlayAchievementMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The app id obtained from the Google Play Developer Console" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID = { "GamesAppID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, GamesAppID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "Request Access Token On Connect" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this adds GET_ACCOUNTS to manifest and user must give permission.  Required for reset achievements." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseGetAccounts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts = { "bUseGetAccounts", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should Google Play support be enabled?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableGooglePlaySupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport = { "bEnableGooglePlaySupport", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "DisplayName", "Always save a copy of the libUE4.so with symbols. [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Always save .so file with symbols allowing use of addr2line on raw callstack addresses." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSaveSymbols = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols = { "bSaveSymbols", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "DisplayName", "Build with hidden symbol visibility in shipping config. [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Build the shipping config with hidden visibility by default. Results in smaller .so file but will also removes symbols used to display callstack dumps." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildWithHiddenSymbolVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility = { "bBuildWithHiddenSymbolVisibility", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Detect Vulkan device support" },
		{ "EditCondition", "bSupportsVulkan" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Whether to detect Vulkan device support by default, if the project is packaged with Vulkan support. If unchecked, the -detectvulkan commandline will enable Vulkan detection." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDetectVulkanByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault = { "bDetectVulkanByDefault", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support Vulkan" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable Vulkan rendering support?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSupportsVulkan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan = { "bSupportsVulkan", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support OpenGL ES3.1" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable ES3.1 support?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForES31 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31 = { "bBuildForES31", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support OpenGL ES2" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable ES2 support?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForES2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2 = { "bBuildForES2", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support x86_64 [aka x64]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable x86-64 support? [CURRENTLY FOR FULL SOURCE GAMES ONLY]" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForX8664 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664 = { "bBuildForX8664", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support arm64 [aka arm64-v8a]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable Arm64 support?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForArm64 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64 = { "bBuildForArm64", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support armv7 [aka armeabi-v7a]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable ArmV7 support? (this will be used if all type are unchecked)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForArmV7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7 = { "bBuildForArmV7", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "DisplayName", "Key Password (leave blank to use Key Store Password)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the password for the key that you may have specified with keytool, if it's different from the keystore password. Leave blank to use same as Keystore" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword = { "KeyPassword", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyPassword), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "DisplayName", "Key Store Password (-storepass parameter to keytool)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the password that you specified FOR THE KEYSTORE NOT THE KEY, when running keytool (either with -storepass or by typing it in)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword = { "KeyStorePassword", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyStorePassword), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "DisplayName", "Key Alias (-alias parameter to keytool)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the name of the key that you specified with the -alias parameter to keytool" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias = { "KeyAlias", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyAlias), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "DisplayName", "Key Store (output of keytool, placed in <Project>/Build/Android)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the file that keytool outputs, specified with the -keystore parameter (file should be in <Project>/Build/Android)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore = { "KeyStore", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyStore), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Configure GoogleVR for sustained-performance mode" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Configure the Android to run in sustained performance with lower max speeds, but no FPS fluctuations due to temperature" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bGoogleVRSustainedPerformance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance = { "bGoogleVRSustainedPerformance", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Configure GoogleVR to support specific hardware configurations" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Configure AndroidManifest.xml to support specific hardward configurations, position and orientation of the head and controller." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps = { "GoogleVRCaps", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, GoogleVRCaps), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps_Inner = { "GoogleVRCaps", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AndroidRuntimeSettings_EGoogleVRCaps, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Remove Oculus Signature Files from Distribution APK" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Removes Oculus Signature Files (osig) from APK if Gear VR APK signed for distribution and enables entitlement checker" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bRemoveOSIG = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG = { "bRemoveOSIG", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Configure the AndroidManifest for deployment to Oculus Mobile" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Configure AndroidManifest.xml for Oculus Mobile" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bPackageForGearVR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR = { "bPackageForGearVR", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Add permissions to support Voice chat (RECORD_AUDIO)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Add required permission to support Voice chat" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAndroidVoiceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled = { "bAndroidVoiceEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Permissions (e.g. 'android.permission.INTERNET')" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra permissions your app needs (an optional file <Project>/Build/Android/ManifestRequirementsAdditions.txt will also be included,\nor an optional file <Project>/Build/Android/ManifestRequirementsOverride.txt will replace the entire <!-- Requirements --> section)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions = { "ExtraPermissions", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraPermissions), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_Inner = { "ExtraPermissions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Settings for <activity> section (\\n to separate lines)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra settings for the main <activity> section (an optional file <Project>/Build/Android/ManifestApplicationActivtyAdditions.txt will also be included)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings = { "ExtraActivitySettings", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraActivitySettings), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Tags for UE4.GameActivity <activity> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags = { "ExtraActivityNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraActivityNodeTags), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_Inner = { "ExtraActivityNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Settings for <application> section (\\n to separate lines)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the com.epicgames.UE4.GameActivity <activity> node\nAny extra settings for the <application> section (an optional file <Project>/Build/Android/ManifestApplicationAdditions.txt will also be included)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings = { "ExtraApplicationSettings", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraApplicationSettings), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Tags for <application> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the <application> node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags = { "ExtraApplicationNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraApplicationNodeTags), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_Inner = { "ExtraApplicationNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Tags for <manifest> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the <manifest> node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags = { "ExtraManifestNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraManifestNodeTags), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_Inner = { "ExtraManifestNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Validate texture formats" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Verifies the device supports at least one of the cooked texture formats at runtime" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bValidateTextureFormats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats = { "bValidateTextureFormats", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Preferred Depth Buffer format" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The preferred depth buffer bitcount for Android" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference = { "DepthBufferPreference", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, DepthBufferPreference), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Enable improved virtual keyboard" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableNewKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard = { "bEnableNewKeyboard", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Enable FullScreen Immersive on KitKat and above devices." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should the software navigation buttons be hidden or not" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bFullScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen = { "bFullScreen", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AntVerbosity_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Level of verbosity to use during packaging with Ant" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AntVerbosity = { "AntVerbosity", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, AntVerbosity), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAntVerbosity, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AntVerbosity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AntVerbosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Use display cutout region?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enables use of the display cutout area on Android 9+" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseDisplayCutout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout = { "bUseDisplayCutout", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Maximum supported aspect ratio." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Maximum supported aspect ratio (width / height). Android will automatically letterbox application on devices with bigger aspect ratio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The permitted orientation of the application on the device" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, Orientation), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Use ExternalFilesDir for UE4Game files?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, UE4Game files will be placed in ExternalFilesDir which is removed on uninstall.\nYou should also check this if you need to save you game progress without requesting runtime WRITE_EXTERNAL_STORAGE permission in android api 23+" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseExternalFilesDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir = { "bUseExternalFilesDir", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Allow large OBB files." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, OBB is not limited to 2 GiB allowed by Google Play Store (still limited to 4 GiB ZIP limit)." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowLargeOBBFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles = { "bAllowLargeOBBFiles", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Disable verify OBB on first start/update." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Disable the verification of an OBB file when it is downloaded or on first start when in a distribution build." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDisableVerifyOBBOnStartUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp = { "bDisableVerifyOBBOnStartUp", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Generate install files for all platforms" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, both batch (.bat) files and shell script (.command) files will be generated, otherwise only done for the current system (default)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bCreateAllPlatformsInstall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall = { "bCreateAllPlatformsInstall", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Package game data inside .apk?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should the data be placed into the .apk file instead of a separate .obb file. Amazon requires this to be enabled, but Google Play Store will not allow .apk files larger than 100MB, so only small games will work with this enabled." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bPackageDataInsideApk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk = { "bPackageDataInsideApk", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Enable Lint depreciation checks" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable -Xlint:unchecked and -Xlint:depreciation for Java compiling (Gradle only)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableLint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint = { "bEnableLint", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Enable Gradle instead of Ant" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Use Gradle instead of Ant for Java compiling and APK generation" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableGradle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle = { "bEnableGradle", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Preferred install location for the application" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation = { "InstallLocation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, InstallLocation), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Target SDK Version (9=Gingerbread, 14=Ice Cream Sandwich, 21=Lollipop)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "What OS version the app is expected to run on (do not set this lower than 9, set to 19 for Gear VR)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion = { "TargetSDKVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, TargetSDKVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Minimum SDK Version (9=Gingerbread, 14=Ice Cream Sandwich, 21=Lollipop)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "What OS version the app is allowed to be installed on (do not set this lower than 9)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion = { "MinSDKVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, MinSDKVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Version Display Name (usually x.y)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The visual version displayed for end users" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName = { "VersionDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, VersionDisplayName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Application Display Name (app_name), project name if blank" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The visual application name displayed for end users" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName = { "ApplicationDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, ApplicationDisplayName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "ClampMax", "2147483647" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Store Version (1-2147483647)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The version number used to indicate newer versions in the Store" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion = { "StoreVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, StoreVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Android Package Name ('com.Company.Project', [PROJECT] is replaced with project name)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The official name of the product (same as the name you use on the Play Store web site). Note: Must have at least 2 sections separated by a period and be unique!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidRuntimeSettings, PackageName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ATC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_PVRTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ATC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_PVRTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArmV7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bGoogleVRSustainedPerformance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GoogleVRCaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageForGearVR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AntVerbosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGradle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::ClassParams = {
		&UAndroidRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidRuntimeSettings, 1294544460);
	template<> ANDROIDRUNTIMESETTINGS_API UClass* StaticClass<UAndroidRuntimeSettings>()
	{
		return UAndroidRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidRuntimeSettings(Z_Construct_UClass_UAndroidRuntimeSettings, &UAndroidRuntimeSettings::StaticClass, TEXT("/Script/AndroidRuntimeSettings"), TEXT("UAndroidRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
