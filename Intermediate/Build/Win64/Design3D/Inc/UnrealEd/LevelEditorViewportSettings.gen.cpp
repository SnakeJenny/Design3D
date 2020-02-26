// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/LevelEditorViewportSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorViewportSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EScrollGestureDirection();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EWASDType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ERotationGridMode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSnapToSurfaceSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorViewportSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
// End Cross Module References
	static UEnum* EScrollGestureDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EScrollGestureDirection"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EScrollGestureDirection>()
	{
		return EScrollGestureDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScrollGestureDirection(EScrollGestureDirection_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EScrollGestureDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Hash() { return 2566142126U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EScrollGestureDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScrollGestureDirection"), 0, Get_Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScrollGestureDirection::UseSystemSetting", (int64)EScrollGestureDirection::UseSystemSetting },
				{ "EScrollGestureDirection::Standard", (int64)EScrollGestureDirection::Standard },
				{ "EScrollGestureDirection::Natural", (int64)EScrollGestureDirection::Natural },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
				{ "Natural.DisplayName", "Natural" },
				{ "Standard.DisplayName", "Standard" },
				{ "ToolTip", "Scroll gesture direction" },
				{ "UseSystemSetting.DisplayName", "Use system setting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EScrollGestureDirection",
				"EScrollGestureDirection",
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
	static UEnum* EMeasuringToolUnits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMeasuringToolUnits"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMeasuringToolUnits>()
	{
		return EMeasuringToolUnits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeasuringToolUnits(EMeasuringToolUnits_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EMeasuringToolUnits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Hash() { return 1490153265U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeasuringToolUnits"), 0, Get_Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MeasureUnits_Centimeters", (int64)MeasureUnits_Centimeters },
				{ "MeasureUnits_Meters", (int64)MeasureUnits_Meters },
				{ "MeasureUnits_Kilometers", (int64)MeasureUnits_Kilometers },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MeasureUnits_Centimeters.DisplayName", "Centimeters" },
				{ "MeasureUnits_Kilometers.DisplayName", "Kilometers" },
				{ "MeasureUnits_Meters.DisplayName", "Meters" },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
				{ "ToolTip", "Units used by measuring tool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EMeasuringToolUnits",
				"EMeasuringToolUnits",
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
	static UEnum* ELandscapeFoliageEditorControlType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELandscapeFoliageEditorControlType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELandscapeFoliageEditorControlType>()
	{
		return ELandscapeFoliageEditorControlType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeFoliageEditorControlType(ELandscapeFoliageEditorControlType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELandscapeFoliageEditorControlType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Hash() { return 96358630U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeFoliageEditorControlType"), 0, Get_Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeFoliageEditorControlType::IgnoreCtrl", (int64)ELandscapeFoliageEditorControlType::IgnoreCtrl },
				{ "ELandscapeFoliageEditorControlType::RequireCtrl", (int64)ELandscapeFoliageEditorControlType::RequireCtrl },
				{ "ELandscapeFoliageEditorControlType::RequireNoCtrl", (int64)ELandscapeFoliageEditorControlType::RequireNoCtrl },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IgnoreCtrl.DisplayName", "Ignore Ctrl key (allow but don't require Ctrl held)" },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
				{ "RequireCtrl.DisplayName", "Require Ctrl held for tools" },
				{ "RequireNoCtrl.DisplayName", "Require Ctrl is not held" },
				{ "ToolTip", "Is Ctrl key required for editing landscape/foliage?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELandscapeFoliageEditorControlType",
				"ELandscapeFoliageEditorControlType",
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
	static UEnum* EWASDType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EWASDType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EWASDType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EWASDType>()
	{
		return EWASDType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWASDType(EWASDType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EWASDType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EWASDType_Hash() { return 3025387945U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EWASDType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWASDType"), 0, Get_Z_Construct_UEnum_UnrealEd_EWASDType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WASD_Always", (int64)WASD_Always },
				{ "WASD_RMBOnly", (int64)WASD_RMBOnly },
				{ "WASD_Never", (int64)WASD_Never },
				{ "WASD_MAX", (int64)WASD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
				{ "ToolTip", "Enumerates camera control types for the W, A, S and D keys." },
				{ "WASD_Always.DisplayName", "Use WASD for Camera Controls" },
				{ "WASD_Never.DisplayName", "Never use WASD for Camera Controls" },
				{ "WASD_RMBOnly.DisplayName", "Use WASD only when a Mouse Button is Pressed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EWASDType",
				"EWASDType",
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
	static UEnum* ERotationGridMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ERotationGridMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ERotationGridMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ERotationGridMode>()
	{
		return ERotationGridMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationGridMode(ERotationGridMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ERotationGridMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ERotationGridMode_Hash() { return 3731997827U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ERotationGridMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationGridMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ERotationGridMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GridMode_DivisionsOf360", (int64)GridMode_DivisionsOf360 },
				{ "GridMode_Common", (int64)GridMode_Common },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GridMode_Common.ToolTip", "Uses the user defined grid values." },
				{ "GridMode_DivisionsOf360.ToolTip", "Using Divisions of 360 degrees (e.g 360/2. 360/3, 360/4, ... )." },
				{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
				{ "ToolTip", "Enumerates modes for the viewport's rotation grid." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ERotationGridMode",
				"ERotationGridMode",
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
class UScriptStruct* FSnapToSurfaceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapToSurfaceSettings, Z_Construct_UPackage__Script_UnrealEd(), TEXT("SnapToSurfaceSettings"), sizeof(FSnapToSurfaceSettings), Get_Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSnapToSurfaceSettings>()
{
	return FSnapToSurfaceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnapToSurfaceSettings(FSnapToSurfaceSettings::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("SnapToSurfaceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFSnapToSurfaceSettings
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFSnapToSurfaceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SnapToSurfaceSettings")),new UScriptStruct::TCppStructOps<FSnapToSurfaceSettings>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFSnapToSurfaceSettings;
	struct Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[];
#endif
		static void NewProp_bSnapRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapOffsetExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapOffsetExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Settings that control the behavior of the \"snap to surface\" feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapToSurfaceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether objects should match the rotation of the surfaces they snap to" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((FSnapToSurfaceSettings*)Obj)->bSnapRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnapToSurfaceSettings), &Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The amount of offset to apply when snapping to surfaces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent = { "SnapOffsetExtent", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapToSurfaceSettings, SnapOffsetExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether snapping to surfaces in the world is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSnapToSurfaceSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnapToSurfaceSettings), &Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SnapToSurfaceSettings",
		sizeof(FSnapToSurfaceSettings),
		alignof(FSnapToSurfaceSettings),
		Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapToSurfaceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnapToSurfaceSettings"), sizeof(FSnapToSurfaceSettings), Get_Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Hash() { return 2901810722U; }
class UScriptStruct* FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LevelEditorViewportInstanceSettingsKeyValuePair"), sizeof(FLevelEditorViewportInstanceSettingsKeyValuePair), Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLevelEditorViewportInstanceSettingsKeyValuePair>()
{
	return FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair(FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LevelEditorViewportInstanceSettingsKeyValuePair"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettingsKeyValuePair
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettingsKeyValuePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelEditorViewportInstanceSettingsKeyValuePair")),new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettingsKeyValuePair>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettingsKeyValuePair;
	struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements a key -> value pair for the per-instance view port settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettingsKeyValuePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Settings for this config." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings = { "ConfigSettings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettingsKeyValuePair, ConfigSettings), Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Name identifying this config." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettingsKeyValuePair, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LevelEditorViewportInstanceSettingsKeyValuePair",
		sizeof(FLevelEditorViewportInstanceSettingsKeyValuePair),
		alignof(FLevelEditorViewportInstanceSettingsKeyValuePair),
		Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelEditorViewportInstanceSettingsKeyValuePair"), sizeof(FLevelEditorViewportInstanceSettingsKeyValuePair), Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Hash() { return 2412021818U; }
class UScriptStruct* FLevelEditorViewportInstanceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LevelEditorViewportInstanceSettings"), sizeof(FLevelEditorViewportInstanceSettings), Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLevelEditorViewportInstanceSettings>()
{
	return FLevelEditorViewportInstanceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelEditorViewportInstanceSettings(FLevelEditorViewportInstanceSettings::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LevelEditorViewportInstanceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettings
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelEditorViewportInstanceSettings")),new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettings>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLevelEditorViewportInstanceSettings;
	struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFullToolbar_MetaData[];
#endif
		static void NewProp_bShowFullToolbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFullToolbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnabledStats;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnabledStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnScreenStats_MetaData[];
#endif
		static void NewProp_bShowOnScreenStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnScreenStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[];
#endif
		static void NewProp_bShowFPS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRealtime_MetaData[];
#endif
		static void NewProp_bIsRealtime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRealtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarViewPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarViewPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposureSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExposureSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferVisualizationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BufferVisualizationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameShowFlagsString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameShowFlagsString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorShowFlagsString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditorShowFlagsString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoViewModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrthoViewModeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerspViewModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerspViewModeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewportType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements the Level Editor's per-instance view port settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, the full viewport toolbar will be shown. When disabled, a compact toolbar is used." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowFullToolbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar = { "bShowFullToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether viewport statistics should be enabled by default." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats = { "EnabledStats", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, EnabledStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_Inner = { "EnabledStats", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether viewport statistics should be shown." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowOnScreenStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats = { "bShowOnScreenStats", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether the FPS counter should be shown." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowFPS_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether this viewport is updating in real-time." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bIsRealtime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime = { "bIsRealtime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Position of the var plane in the editor viewport" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane = { "FarViewPlane", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, FarViewPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Field of view angle for the viewport." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, FOVAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Setting to allow designers to override the automatic expose." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings = { "ExposureSettings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, ExposureSettings), Z_Construct_UScriptStruct_FExposureSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The buffer visualization mode for the viewport." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode = { "BufferVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, BufferVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\nThese have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString = { "GameShowFlagsString", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, GameShowFlagsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\nThese have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString = { "EditorShowFlagsString", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, EditorShowFlagsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "View mode to set when this viewport is not of type LVT_Perspective." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex = { "OrthoViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, OrthoViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "View mode to set when this viewport is of type LVT_Perspective." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex = { "PerspViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, PerspViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The viewport type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType = { "ViewportType", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, ViewportType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LevelEditorViewportInstanceSettings",
		sizeof(FLevelEditorViewportInstanceSettings),
		alignof(FLevelEditorViewportInstanceSettings),
		Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelEditorViewportInstanceSettings"), sizeof(FLevelEditorViewportInstanceSettings), Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Hash() { return 1149432727U; }
	void ULevelEditorViewportSettings::StaticRegisterNativesULevelEditorViewportSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister()
	{
		return ULevelEditorViewportSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasuringToolUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeasuringToolUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveEngineStats_MetaData[];
#endif
		static void NewProp_bSaveEngineStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveEngineStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformWidgetSizeAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransformWidgetSizeAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BillboardScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundDropDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackgroundDropDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPreviewSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPreviewSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewSelectedCameras_MetaData[];
#endif
		static void NewProp_bPreviewSelectedCameras_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewSelectedCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData[];
#endif
		static void NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportCameraToUpdateFromPIV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSPSelectionHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BSPSelectionHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelectionOutline_MetaData[];
#endif
		static void NewProp_bUseSelectionOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelectionOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransparentBoxSelection_MetaData[];
#endif
		static void NewProp_bTransparentBoxSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransparentBoxSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrictBoxSelection_MetaData[];
#endif
		static void NewProp_bStrictBoxSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrictBoxSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLinkedOrthographicViewports_MetaData[];
#endif
		static void NewProp_bUseLinkedOrthographicViewports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLinkedOrthographicViewports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighlightWithBrackets_MetaData[];
#endif
		static void NewProp_bHighlightWithBrackets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighlightWithBrackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportHoverFeedback_MetaData[];
#endif
		static void NewProp_bEnableViewportHoverFeedback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportHoverFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotGridMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentRotGridMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreserveNonUniformScale_MetaData[];
#endif
		static void NewProp_PreserveNonUniformScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreserveNonUniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScalingGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentScalingGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentRotGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPosGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPosGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapVertices_MetaData[];
#endif
		static void NewProp_bSnapVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSnapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorSnapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSnapScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorSnapScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableActorSnap_MetaData[];
#endif
		static void NewProp_bEnableActorSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableActorSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSnapLayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveSnapLayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLayerSnap_MetaData[];
#endif
		static void NewProp_bEnableLayerSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLayerSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePercentageBasedScaling_MetaData[];
#endif
		static void NewProp_bUsePercentageBasedScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePercentageBasedScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapToSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapScaleEnabled_MetaData[];
#endif
		static void NewProp_SnapScaleEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SnapScaleEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotGridEnabled_MetaData[];
#endif
		static void NewProp_RotGridEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotGridEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridEnabled_MetaData[];
#endif
		static void NewProp_GridEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GridEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingGridSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalingGridSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingGridSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivisionsOf360RotGridSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DivisionsOf360RotGridSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DivisionsOf360RotGridSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonRotGridSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CommonRotGridSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CommonRotGridSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pow2GridIntervals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pow2GridIntervals;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pow2GridIntervals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pow2GridSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pow2GridSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pow2GridSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecimalGridIntervals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecimalGridIntervals;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecimalGridIntervals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecimalGridSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecimalGridSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecimalGridSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePowerOf2SnapSize_MetaData[];
#endif
		static void NewProp_bUsePowerOf2SnapSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePowerOf2SnapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitCameraAroundSelection_MetaData[];
#endif
		static void NewProp_bOrbitCameraAroundSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitCameraAroundSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceScaledCameraSpeed_MetaData[];
#endif
		static void NewProp_bUseDistanceScaledCameraSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceScaledCameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLevelEditorJoystickControls_MetaData[];
#endif
		static void NewProp_bLevelEditorJoystickControls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLevelEditorJoystickControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollGestureDirectionForOrthoViewports_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollGestureDirectionForOrthoViewports;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollGestureDirectionForOrthoViewports_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollGestureDirectionFor3DViewports_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollGestureDirectionFor3DViewports;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollGestureDirectionFor3DViewports_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUE3OrbitControls_MetaData[];
#endif
		static void NewProp_bUseUE3OrbitControls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUE3OrbitControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLevelStreamingVolumePrevis_MetaData[];
#endif
		static void NewProp_bLevelStreamingVolumePrevis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLevelStreamingVolumePrevis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTranslation_MetaData[];
#endif
		static void NewProp_bUseAbsoluteTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertRightMouseDollyYAxis_MetaData[];
#endif
		static void NewProp_bInvertRightMouseDollyYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertRightMouseDollyYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertMiddleMousePan_MetaData[];
#endif
		static void NewProp_bInvertMiddleMousePan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertMiddleMousePan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertOrbitYAxis_MetaData[];
#endif
		static void NewProp_bInvertOrbitYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertOrbitYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseLookYAxis_MetaData[];
#endif
		static void NewProp_bInvertMouseLookYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseLookYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseScrollCameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MouseScrollCameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpeedScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraSpeedScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClickBSPSelectsBrush_MetaData[];
#endif
		static void NewProp_bClickBSPSelectsBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClickBSPSelectsBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslateRotateZWidget_MetaData[];
#endif
		static void NewProp_bAllowTranslateRotateZWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslateRotateZWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterZoomAroundCursor_MetaData[];
#endif
		static void NewProp_bCenterZoomAroundCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterZoomAroundCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPanMovesCanvas_MetaData[];
#endif
		static void NewProp_bPanMovesCanvas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPanMovesCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageEditorControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoliageEditorControlType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoliageEditorControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeEditorControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LandscapeEditorControlType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandscapeEditorControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlightCameraControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlightCameraControlType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorViewportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/LevelEditorViewportSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements the Level Editor's view port settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Per-instance viewport settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings = { "PerInstanceSettings", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, PerInstanceSettings), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_Inner = { "PerInstanceSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Specify the units used by the measuring tool" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits = { "MeasuringToolUnits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, MeasuringToolUnits), Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, engine stats that are enabled in level viewports are preserved between editor sessions" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bSaveEngineStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats = { "bSaveEngineStats", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMax", "150" },
		{ "ClampMin", "-10" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The size adjustment to apply to the translate/rotate/scale widgets (in Unreal units)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment = { "TransformWidgetSizeAdjustment", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, TransformWidgetSizeAdjustment), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "UIMax", "5" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale = { "BillboardScale", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, BillboardScale), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData[] = {
		{ "AllowedClasses", "StaticMesh" },
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A list of meshes that can be used as preview mesh in the editor view port by holding down the backslash key" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes = { "PreviewMeshes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, PreviewMeshes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_Inner = { "PreviewMeshes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Background Drop Distance" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Distance from the camera to place actors which are dropped on nothing in the view port." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance = { "BackgroundDropDistance", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, BackgroundDropDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Affects the size of 'picture in picture' previews if they are enabled" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize = { "CameraPreviewSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraPreviewSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, selecting a camera actor will display a live 'picture in picture' preview from the camera's perspective within the current editor view port.  This can be used to easily tweak camera positioning, post-processing and other settings without having to possess the camera itself.  This feature may reduce application performance when enabled." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bPreviewSelectedCameras = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras = { "bPreviewSelectedCameras", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Use Camera Location from Play-In-Viewport" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables the editor perspective camera to be dropped at the last PlayInViewport cam position" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableViewportCameraToUpdateFromPIV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV = { "bEnableViewportCameraToUpdateFromPIV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0" },
		{ "DisplayName", "BSP Surface Highlight Intensity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Sets the intensity of the overlay displayed when an object is selected" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity = { "BSPSelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, BSPSelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Selection Highlight Intensity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Sets the intensity of the overlay displayed when an object is selected" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity = { "SelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, SelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Use Selection Outline" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether to show selection outlines for selected Actors" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseSelectionOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline = { "bUseSelectionOutline", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "True if viewport box selection also selects occluded objects, false if only objects with visible pixels are selected" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bTransparentBoxSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection = { "bTransparentBoxSelection", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "True if viewport box selection requires objects to be fully encompassed by the selection box to be selected" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bStrictBoxSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection = { "bStrictBoxSelection", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Link Orthographic Viewport Movement" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If checked all orthographic view ports are linked to the same position and move together." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseLinkedOrthographicViewports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports = { "bUseLinkedOrthographicViewports", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Highlight Selected Objects with Brackets" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, selected objects will be highlighted with brackets in all modes rather than a special highlight color." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bHighlightWithBrackets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets = { "bHighlightWithBrackets", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Highlight Objects Under Mouse Cursor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables real-time hover feedback when mousing over objects in editor view ports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableViewportHoverFeedback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback = { "bEnableViewportHoverFeedback", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How to constrain perspective view port FOV" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Controls which array of rotation grid values we are using" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode = { "CurrentRotGridMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentRotGridMode), Z_Construct_UEnum_UnrealEd_ERotationGridMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->PreserveNonUniformScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale = { "PreserveNonUniformScale", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize = { "CurrentScalingGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentScalingGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize = { "CurrentRotGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentRotGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize = { "CurrentPosGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentPosGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance = { "SnapDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, SnapDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bSnapVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices = { "bSnapVertices", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Global actor snap distance setting for the editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance = { "ActorSnapDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ActorSnapDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Global actor snap scale for the editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale = { "ActorSnapScale", nullptr, (EPropertyFlags)0x0010040000034001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ActorSnapScale), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true actor snap will be enabled in the editor *" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableActorSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap = { "bEnableActorSnap", nullptr, (EPropertyFlags)0x0010040000034001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The index of the snap plane to use when bEnableLayerSnap is true (from the project SnapLayers array)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex = { "ActiveSnapLayerIndex", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ActiveSnapLayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Enable 2D Layer Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor rotations will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableLayerSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap = { "bEnableLayerSnap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, use the old-style multiplicative/percentage scaling method instead of the new additive/fraction method" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUsePercentageBasedScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling = { "bUsePercentageBasedScaling", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actors will snap to surfaces in the viewport when dragged around" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface = { "SnapToSurface", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, SnapToSurface), Z_Construct_UScriptStruct_FSnapToSurfaceSettings, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Enable Scale Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor sizes will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->SnapScaleEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled = { "SnapScaleEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Enable Rotation Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor rotations will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->RotGridEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled = { "RotGridEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Enable Grid Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor positions will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->GridEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled = { "GridEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Grid sizes for scaling" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes = { "ScalingGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ScalingGridSizes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_Inner = { "ScalingGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Preset grid intervals for rotations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes = { "DivisionsOf360RotGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, DivisionsOf360RotGridSizes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_Inner = { "DivisionsOf360RotGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "User defined grid intervals for rotations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes = { "CommonRotGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CommonRotGridSizes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_Inner = { "CommonRotGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The number of lines between each major line interval for pow2 grids" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals = { "Pow2GridIntervals", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, Pow2GridIntervals), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_Inner = { "Pow2GridIntervals", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Power of 2 grid sizes (for translation snapping and grid rendering)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes = { "Pow2GridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, Pow2GridSizes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_Inner = { "Pow2GridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The number of lines between each major line interval for decimal grids" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals = { "DecimalGridIntervals", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, DecimalGridIntervals), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_Inner = { "DecimalGridIntervals", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Decimal grid sizes (for translation snapping and grid rendering)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes = { "DecimalGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, DecimalGridSizes), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_Inner = { "DecimalGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "DisplayName", "Use Power of Two Snap Size" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled will use power of 2 grid settings (e.g, 1,2,4,8,16,...,1024) instead of decimal grid sizes" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUsePowerOf2SnapSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize = { "bUsePowerOf2SnapSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Orbit camera around selection" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, the camera will orbit around the current selection in the viewport" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bOrbitCameraAroundSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection = { "bOrbitCameraAroundSelection", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Use distance-scaled camera speed" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, scale the perspective camera speed based on the distance between the camera and its look-at position" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseDistanceScaledCameraSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed = { "bUseDistanceScaledCameraSpeed", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Level Editor Joystick Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables joystick-based camera movement in 3D level editing viewports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bLevelEditorJoystickControls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls = { "bLevelEditorJoystickControls", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Scroll gesture direction for orthographic viewports" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Direction of the scroll gesture for orthographic viewports" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports = { "ScrollGestureDirectionForOrthoViewports", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ScrollGestureDirectionForOrthoViewports), Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Scroll gesture direction for 3D viewports" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Direction of the scroll gesture for 3D viewports" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports = { "ScrollGestureDirectionFor3DViewports", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, ScrollGestureDirectionFor3DViewports), Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Use UE3 Orbit Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When checked, orbit the camera by using the L or U keys when unchecked, Alt and Left Mouse Drag will orbit around the look at point" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseUE3OrbitControls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls = { "bUseUE3OrbitControls", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Stream in Levels Automatically when Camera is Moved" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, the viewport will stream in levels automatically when the camera is moved." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bLevelStreamingVolumePrevis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis = { "bLevelStreamingVolumePrevis", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether to use mouse position as direct widget position." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseAbsoluteTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation = { "bUseAbsoluteTranslation", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert the direction of right mouse dolly on the Y axis in orbit mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertRightMouseDollyYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis = { "bInvertRightMouseDollyYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert the direction of middle mouse panning in viewports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertMiddleMousePan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan = { "bInvertMiddleMousePan", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Invert Orbit Y Axis" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert mouse on y axis in orbit mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertOrbitYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis = { "bInvertOrbitYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Invert Mouse Look Y Axis" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert mouse on the y axis in free look mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertMouseLookYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis = { "bInvertMouseLookYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData[] = {
		{ "Category", "Controls" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Mouse Sensitivity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The sensitivity of mouse movement when rotating the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty = { "MouseSensitivty", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, MouseSensitivty), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData[] = {
		{ "Category", "Controls" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How fast the perspective camera moves through the world when using mouse scroll." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed = { "MouseScrollCameraSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, MouseScrollCameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData[] = {
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Scalar applied to perspective camera movement to increase movement range." },
		{ "UIMax", "128" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar = { "CameraSpeedScalar", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraSpeedScalar), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How fast the perspective camera moves when flying through the world." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Clicking BSP Enables Brush" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true, Clicking a BSP selects the brush and ctrl+shift+click selects the surface. If false, vice versa" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bClickBSPSelectsBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush = { "bClickBSPSelectsBrush", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "DisplayName", "Enable Combined Translate/Rotate Widget" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Allow translate/rotate widget" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bAllowTranslateRotateZWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget = { "bAllowTranslateRotateZWidget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Orthographic Zoom to Cursor Position" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If checked, in orthographic view ports zooming will center on the mouse position.  If unchecked, the zoom is around the center of the viewport." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bCenterZoomAroundCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor = { "bCenterZoomAroundCursor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData[] = {
		{ "Category", "Controls" },
		{ "DisplayName", "Grab and Drag to Move Orthographic Cameras" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true, moves the canvas and shows the mouse.  If false, uses original camera movement." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bPanMovesCanvas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas = { "bPanMovesCanvas", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Choose the control scheme for foliage tools" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType = { "FoliageEditorControlType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, FoliageEditorControlType), Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Choose the control scheme for landscape tools (ignored for pen input)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType = { "LandscapeEditorControlType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, LandscapeEditorControlType), Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enable the use of flight camera controls under various circumstances." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType = { "FlightCameraControlType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditorViewportSettings, FlightCameraControlType), Z_Construct_UEnum_UnrealEd_EWASDType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorViewportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorViewportSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::ClassParams = {
		&ULevelEditorViewportSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorViewportSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditorViewportSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditorViewportSettings, 417075234);
	template<> UNREALED_API UClass* StaticClass<ULevelEditorViewportSettings>()
	{
		return ULevelEditorViewportSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditorViewportSettings(Z_Construct_UClass_ULevelEditorViewportSettings, &ULevelEditorViewportSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelEditorViewportSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorViewportSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
