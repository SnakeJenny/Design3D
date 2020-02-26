// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/UnrealEdTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdTypes() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassScalarParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdTypes_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ELevelViewportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelViewportType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelViewportType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelViewportType>()
	{
		return ELevelViewportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelViewportType(ELevelViewportType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELevelViewportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELevelViewportType_Hash() { return 3226127155U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelViewportType"), 0, Get_Z_Construct_UEnum_UnrealEd_ELevelViewportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LVT_OrthoXY", (int64)LVT_OrthoXY },
				{ "LVT_OrthoXZ", (int64)LVT_OrthoXZ },
				{ "LVT_OrthoYZ", (int64)LVT_OrthoYZ },
				{ "LVT_Perspective", (int64)LVT_Perspective },
				{ "LVT_OrthoFreelook", (int64)LVT_OrthoFreelook },
				{ "LVT_OrthoNegativeXY", (int64)LVT_OrthoNegativeXY },
				{ "LVT_OrthoNegativeXZ", (int64)LVT_OrthoNegativeXZ },
				{ "LVT_OrthoNegativeYZ", (int64)LVT_OrthoNegativeYZ },
				{ "LVT_MAX", (int64)LVT_MAX },
				{ "LVT_None", (int64)LVT_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LVT_OrthoNegativeXY.ToolTip", "Bottom" },
				{ "LVT_OrthoNegativeXZ.ToolTip", "Back" },
				{ "LVT_OrthoNegativeYZ.ToolTip", "Right" },
				{ "LVT_OrthoXY.ToolTip", "Top" },
				{ "LVT_OrthoXZ.ToolTip", "Front" },
				{ "LVT_OrthoYZ.ToolTip", "Left" },
				{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
				{ "ToolTip", "ELevelViewportType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELevelViewportType",
				"ELevelViewportType",
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
class UScriptStruct* FLightmassParameterizedMaterialSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassParameterizedMaterialSettings"), sizeof(FLightmassParameterizedMaterialSettings), Get_Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassParameterizedMaterialSettings>()
{
	return FLightmassParameterizedMaterialSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassParameterizedMaterialSettings(FLightmassParameterizedMaterialSettings::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LightmassParameterizedMaterialSettings"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterizedMaterialSettings
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterizedMaterialSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassParameterizedMaterialSettings")),new UScriptStruct::TCppStructOps<FLightmassParameterizedMaterialSettings>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterizedMaterialSettings;
	struct Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExportResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadowAsMasked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CastShadowAsMasked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Structure for 'parameterized' Lightmass settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassParameterizedMaterialSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the resolution that this material's attributes were exported at.\nThis is useful for increasing material resolution when details are needed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale = { "ExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, ExportResolutionScale), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the diffuse contribution of this material to static lighting." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, DiffuseBoost), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the emissive contribution of this material to static lighting." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, EmissiveBoost), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "If true, forces translucency to cast static shadows as if the material were masked." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked = { "CastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, CastShadowAsMasked), Z_Construct_UScriptStruct_FLightmassBooleanParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LightmassParameterizedMaterialSettings",
		sizeof(FLightmassParameterizedMaterialSettings),
		alignof(FLightmassParameterizedMaterialSettings),
		Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassParameterizedMaterialSettings"), sizeof(FLightmassParameterizedMaterialSettings), Get_Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Hash() { return 2223475418U; }
class UScriptStruct* FLightmassScalarParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassScalarParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassScalarParameterValue"), sizeof(FLightmassScalarParameterValue), Get_Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassScalarParameterValue>()
{
	return FLightmassScalarParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassScalarParameterValue(FLightmassScalarParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LightmassScalarParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassScalarParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassScalarParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassScalarParameterValue")),new UScriptStruct::TCppStructOps<FLightmassScalarParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLightmassScalarParameterValue;
	struct Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scalar parameter value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassScalarParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "LightmassScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "The scalar value to override the parent value with" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FLightmassParameterValue,
		&NewStructOps,
		"LightmassScalarParameterValue",
		sizeof(FLightmassScalarParameterValue),
		alignof(FLightmassScalarParameterValue),
		Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassScalarParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassScalarParameterValue"), sizeof(FLightmassScalarParameterValue), Get_Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Hash() { return 3419349170U; }
class UScriptStruct* FLightmassBooleanParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassBooleanParameterValue"), sizeof(FLightmassBooleanParameterValue), Get_Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassBooleanParameterValue>()
{
	return FLightmassBooleanParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassBooleanParameterValue(FLightmassBooleanParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LightmassBooleanParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassBooleanParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassBooleanParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassBooleanParameterValue")),new UScriptStruct::TCppStructOps<FLightmassBooleanParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLightmassBooleanParameterValue;
	struct Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Boolean parameter value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassBooleanParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "LightmassBooleanParameterValue" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "The boolean value to override the parent value with" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((FLightmassBooleanParameterValue*)Obj)->ParameterValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassBooleanParameterValue), &Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FLightmassParameterValue,
		&NewStructOps,
		"LightmassBooleanParameterValue",
		sizeof(FLightmassBooleanParameterValue),
		alignof(FLightmassBooleanParameterValue),
		Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassBooleanParameterValue"), sizeof(FLightmassBooleanParameterValue), Get_Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Hash() { return 3248047232U; }
class UScriptStruct* FLightmassParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassParameterValue"), sizeof(FLightmassParameterValue), Get_Z_Construct_UScriptStruct_FLightmassParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassParameterValue>()
{
	return FLightmassParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassParameterValue(FLightmassParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("LightmassParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassParameterValue")),new UScriptStruct::TCppStructOps<FLightmassParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFLightmassParameterValue;
	struct Z_Construct_UScriptStruct_FLightmassParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Base LightmassParameterValue class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "LightmassParameterValue" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "If true, override the given parameter with the given settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FLightmassParameterValue*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassParameterValue), &Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LightmassParameterValue",
		sizeof(FLightmassParameterValue),
		alignof(FLightmassParameterValue),
		Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassParameterValue"), sizeof(FLightmassParameterValue), Get_Z_Construct_UScriptStruct_FLightmassParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassParameterValue_Hash() { return 3758354713U; }
	void UUnrealEdTypes::StaticRegisterNativesUUnrealEdTypes()
	{
	}
	UClass* Z_Construct_UClass_UUnrealEdTypes_NoRegister()
	{
		return UUnrealEdTypes::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/UnrealEdTypes.h" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdTypes_Statics::ClassParams = {
		&UUnrealEdTypes::StaticClass,
		"UnrealEd",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealEdTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealEdTypes, 3766226623);
	template<> UNREALED_API UClass* StaticClass<UUnrealEdTypes>()
	{
		return UUnrealEdTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealEdTypes(Z_Construct_UClass_UUnrealEdTypes, &UUnrealEdTypes::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUnrealEdTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
