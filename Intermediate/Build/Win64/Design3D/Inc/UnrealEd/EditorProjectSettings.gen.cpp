// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Settings/EditorProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorProjectSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EUnitDisplay();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMode2DLayer();
	UNREALED_API UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditor2DSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditor2DSettings();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings();
// End Cross Module References
	static UEnum* ELevelEditor2DAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelEditor2DAxis"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelEditor2DAxis>()
	{
		return ELevelEditor2DAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelEditor2DAxis(ELevelEditor2DAxis_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELevelEditor2DAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Hash() { return 2941806115U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelEditor2DAxis"), 0, Get_Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelEditor2DAxis::X", (int64)ELevelEditor2DAxis::X },
				{ "ELevelEditor2DAxis::Y", (int64)ELevelEditor2DAxis::Y },
				{ "ELevelEditor2DAxis::Z", (int64)ELevelEditor2DAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELevelEditor2DAxis",
				"ELevelEditor2DAxis",
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
	static UEnum* EDefaultLocationUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EDefaultLocationUnit"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EDefaultLocationUnit>()
	{
		return EDefaultLocationUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDefaultLocationUnit(EDefaultLocationUnit_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EDefaultLocationUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Hash() { return 1271160245U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDefaultLocationUnit"), 0, Get_Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDefaultLocationUnit::Micrometers", (int64)EDefaultLocationUnit::Micrometers },
				{ "EDefaultLocationUnit::Millimeters", (int64)EDefaultLocationUnit::Millimeters },
				{ "EDefaultLocationUnit::Centimeters", (int64)EDefaultLocationUnit::Centimeters },
				{ "EDefaultLocationUnit::Meters", (int64)EDefaultLocationUnit::Meters },
				{ "EDefaultLocationUnit::Kilometers", (int64)EDefaultLocationUnit::Kilometers },
				{ "EDefaultLocationUnit::Inches", (int64)EDefaultLocationUnit::Inches },
				{ "EDefaultLocationUnit::Feet", (int64)EDefaultLocationUnit::Feet },
				{ "EDefaultLocationUnit::Yards", (int64)EDefaultLocationUnit::Yards },
				{ "EDefaultLocationUnit::Miles", (int64)EDefaultLocationUnit::Miles },
				{ "EDefaultLocationUnit::Invalid", (int64)EDefaultLocationUnit::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
				{ "ToolTip", "UENUM to define the specific set of allowable default units" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EDefaultLocationUnit",
				"EDefaultLocationUnit",
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
	static UEnum* EUnitDisplay_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EUnitDisplay, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EUnitDisplay"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EUnitDisplay>()
	{
		return EUnitDisplay_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnitDisplay(EUnitDisplay_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EUnitDisplay"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EUnitDisplay_Hash() { return 34356919U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EUnitDisplay()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnitDisplay"), 0, Get_Z_Construct_UEnum_UnrealEd_EUnitDisplay_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnitDisplay::None", (int64)EUnitDisplay::None },
				{ "EUnitDisplay::Metric", (int64)EUnitDisplay::Metric },
				{ "EUnitDisplay::Imperial", (int64)EUnitDisplay::Imperial },
				{ "EUnitDisplay::Invalid", (int64)EUnitDisplay::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
				{ "ToolTip", "UENUM to define the specific set of allowable unit types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EUnitDisplay",
				"EUnitDisplay",
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
class UScriptStruct* FMode2DLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FMode2DLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMode2DLayer, Z_Construct_UPackage__Script_UnrealEd(), TEXT("Mode2DLayer"), sizeof(FMode2DLayer), Get_Z_Construct_UScriptStruct_FMode2DLayer_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMode2DLayer>()
{
	return FMode2DLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMode2DLayer(FMode2DLayer::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("Mode2DLayer"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFMode2DLayer
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFMode2DLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Mode2DLayer")),new UScriptStruct::TCppStructOps<FMode2DLayer>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFMode2DLayer;
	struct Z_Construct_UScriptStruct_FMode2DLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "2D layer settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMode2DLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "The amount of depth to apply when snapping to surfaces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMode2DLayer, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Whether snapping to surfaces in the world is enabled" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMode2DLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"Mode2DLayer",
		sizeof(FMode2DLayer),
		alignof(FMode2DLayer),
		Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMode2DLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMode2DLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Mode2DLayer"), sizeof(FMode2DLayer), Get_Z_Construct_UScriptStruct_FMode2DLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMode2DLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMode2DLayer_Hash() { return 3649285163U; }
	void UEditorProjectAppearanceSettings::StaticRegisterNativesUEditorProjectAppearanceSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings_NoRegister()
	{
		return UEditorProjectAppearanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInputUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultInputUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultInputUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnitDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnitDisplay_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ForceUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemperatureUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TemperatureUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TemperatureUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeedUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeedUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngleUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngleUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeUnits;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimeUnits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeUnits_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MassUnits;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MassUnits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MassUnits_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DistanceUnits;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceUnits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceUnits_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayUnitsOnComponentTransforms_MetaData[];
#endif
		static void NewProp_bDisplayUnitsOnComponentTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayUnitsOnComponentTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayUnits_MetaData[];
#endif
		static void NewProp_bDisplayUnits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayUnits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Appearance" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Editor project appearance settings. Stored in default config, per-project" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits = { "DefaultInputUnits", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, DefaultInputUnits_DEPRECATED), Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Deprecated properties that didn't live very long" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay = { "UnitDisplay", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, UnitDisplay_DEPRECATED), Z_Construct_UEnum_UnrealEd_EUnitDisplay, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Force" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display forces." },
		{ "ValidEnumValues", "Newtons, PoundsForce, KilogramsForce" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits = { "ForceUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, ForceUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display temperatures." },
		{ "ValidEnumValues", "Celsius, Farenheit, Kelvin" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits = { "TemperatureUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, TemperatureUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Speed/Velocity" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display speeds and velocities." },
		{ "ValidEnumValues", "MetersPerSecond, KilometersPerHour, MilesPerHour" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits = { "SpeedUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, SpeedUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Angles" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display angles." },
		{ "ValidEnumValues", "Degrees, Radians" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits = { "AngleUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, AngleUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Time" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display time." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits = { "TimeUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, TimeUnits), METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner = { "TimeUnits", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Mass" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose a set of units in which to display masses." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits = { "MassUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, MassUnits), METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner = { "MassUnits", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Distance/Length" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose a set of units in which to display distance/length values." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits = { "DistanceUnits", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorProjectAppearanceSettings, DistanceUnits), METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner = { "DistanceUnits", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Display Units on Component Transforms" },
		{ "EditCondition", "bDisplayUnits" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Whether to display units on component transform properties" },
	};
#endif
	void Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_SetBit(void* Obj)
	{
		((UEditorProjectAppearanceSettings*)Obj)->bDisplayUnitsOnComponentTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms = { "bDisplayUnitsOnComponentTransforms", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorProjectAppearanceSettings), &Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Display Units on Applicable Properties" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Whether to display units on editor properties where the property has units set." },
	};
#endif
	void Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_SetBit(void* Obj)
	{
		((UEditorProjectAppearanceSettings*)Obj)->bDisplayUnits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits = { "bDisplayUnits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorProjectAppearanceSettings), &Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorProjectAppearanceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::ClassParams = {
		&UEditorProjectAppearanceSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorProjectAppearanceSettings, 1782346510);
	template<> UNREALED_API UClass* StaticClass<UEditorProjectAppearanceSettings>()
	{
		return UEditorProjectAppearanceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorProjectAppearanceSettings(Z_Construct_UClass_UEditorProjectAppearanceSettings, &UEditorProjectAppearanceSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorProjectAppearanceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorProjectAppearanceSettings);
	void ULevelEditor2DSettings::StaticRegisterNativesULevelEditor2DSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelEditor2DSettings_NoRegister()
	{
		return ULevelEditor2DSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditor2DSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SnapAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnapAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapLayers_MetaData[];
#endif
		static void NewProp_bEnableSnapLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable2DWidget_MetaData[];
#endif
		static void NewProp_bEnable2DWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable2DWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditor2DSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "2D" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Configure settings for the 2D Level Editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "EditCondition", "bEnableSnapLayers" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Snap layers that are displayed in the viewport toolbar" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers = { "SnapLayers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditor2DSettings, SnapLayers), METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_Inner = { "SnapLayers", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMode2DLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "EditCondition", "bEnableSnapLayers" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Snap axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis = { "SnapAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelEditor2DSettings, SnapAxis), Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "If enabled will allow 2D mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_SetBit(void* Obj)
	{
		((ULevelEditor2DSettings*)Obj)->bEnableSnapLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers = { "bEnableSnapLayers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditor2DSettings), &Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Enable 2D combined translate + rotate widget" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "If enabled will allow 2D mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_SetBit(void* Obj)
	{
		((ULevelEditor2DSettings*)Obj)->bEnable2DWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget = { "bEnable2DWidget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelEditor2DSettings), &Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditor2DSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditor2DSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::ClassParams = {
		&ULevelEditor2DSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditor2DSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelEditor2DSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelEditor2DSettings, 1647135828);
	template<> UNREALED_API UClass* StaticClass<ULevelEditor2DSettings>()
	{
		return ULevelEditor2DSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelEditor2DSettings(Z_Construct_UClass_ULevelEditor2DSettings, &ULevelEditor2DSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelEditor2DSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditor2DSettings);
	void UBlueprintEditorProjectSettings::StaticRegisterNativesUBlueprintEditorProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister()
	{
		return UBlueprintEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledCompilerMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisabledCompilerMessages;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisabledCompilerMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledCompilerMessagesExceptEditor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisabledCompilerMessagesExceptEditor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisabledCompilerMessagesExceptEditor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidateUnloadedSoftActorReferences_MetaData[];
#endif
		static void NewProp_bValidateUnloadedSoftActorReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidateUnloadedSoftActorReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceAllDependenciesToRecompile_MetaData[];
#endif
		static void NewProp_bForceAllDependenciesToRecompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAllDependenciesToRecompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCompilationManager_MetaData[];
#endif
		static void NewProp_bDisableCompilationManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCompilationManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Blueprints" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "Compiler Messages Disabled Entirely" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "List of compiler messages that have been suppressed completely - message suppression is only\nadvisable when using blueprints that you cannot update and are raising innocuous warnings.\nIf useless messages are being raised prefer to contact support rather than disabling messages" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages = { "DisabledCompilerMessages", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorProjectSettings, DisabledCompilerMessages), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_Inner = { "DisabledCompilerMessages", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "Compiler Messages Disabled Except in Editor" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "List of compiler messages that have been suppressed outside of full, interactive editor sessions for\nthe current project - useful for silencing warnings that were added to the engine after\nproject inception and are going to be addressed as they are found by content authors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor = { "DisabledCompilerMessagesExceptEditor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorProjectSettings, DisabledCompilerMessagesExceptEditor), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_Inner = { "DisabledCompilerMessagesExceptEditor", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData[] = {
		{ "Category", "Actors" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "If enabled, the editor will load packages to look for soft references to actors when deleting/renaming them. This can be slow in large projects so disable this to improve performance but increase the chance of breaking blueprints/sequences that use soft actor references" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bValidateUnloadedSoftActorReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences = { "bValidateUnloadedSoftActorReferences", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "Force All Dependencies To Recompile (DEPRECATED)" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Flag to disable faster compiles for individual blueprints if they have no function signature\nchanges. This flag is deprecated! In 4.21 there will be no way to force all dependencies to\ncompile when no changes are detected. Report any issues immediately." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bForceAllDependenciesToRecompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile = { "bForceAllDependenciesToRecompile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "DisplayName", "Disable Compilation Manager (DEPRECATED)" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Flag to disable the compilation manager for blueprints - requires editor restart.\nThis flag is deprecated! In 4.21 the compilation manager will be the only way to compile\nblueprints. Report any compilation manager issues immediately." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bDisableCompilationManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager = { "bDisableCompilationManager", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bDisableCompilationManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::ClassParams = {
		&UBlueprintEditorProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintEditorProjectSettings, 771760446);
	template<> UNREALED_API UClass* StaticClass<UBlueprintEditorProjectSettings>()
	{
		return UBlueprintEditorProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintEditorProjectSettings(Z_Construct_UClass_UBlueprintEditorProjectSettings, &UBlueprintEditorProjectSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UBlueprintEditorProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
