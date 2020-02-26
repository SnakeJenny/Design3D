// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SkyLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLightComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_RecaptureSky();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemap();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOcclusionCombineMode();
// End Cross Module References
	static UEnum* ESkyLightSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyLightSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("ESkyLightSourceType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkyLightSourceType>()
	{
		return ESkyLightSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyLightSourceType(ESkyLightSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkyLightSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkyLightSourceType_Hash() { return 1821994919U; }
	UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyLightSourceType"), 0, Get_Z_Construct_UEnum_Engine_ESkyLightSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLS_CapturedScene", (int64)SLS_CapturedScene },
				{ "SLS_SpecifiedCubemap", (int64)SLS_SpecifiedCubemap },
				{ "SLS_MAX", (int64)SLS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "SLS_CapturedScene.ToolTip", "Construct the sky light from the captured scene, anything further than SkyDistanceThreshold from the sky light position will be included." },
				{ "SLS_SpecifiedCubemap.ToolTip", "Construct the sky light from the specified cubemap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkyLightSourceType",
				"ESkyLightSourceType",
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
class UScriptStruct* FPrecomputedSkyLightInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("PrecomputedSkyLightInstanceData"), sizeof(FPrecomputedSkyLightInstanceData), Get_Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrecomputedSkyLightInstanceData>()
{
	return FPrecomputedSkyLightInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrecomputedSkyLightInstanceData(FPrecomputedSkyLightInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("PrecomputedSkyLightInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrecomputedSkyLightInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFPrecomputedSkyLightInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrecomputedSkyLightInstanceData")),new UScriptStruct::TCppStructOps<FPrecomputedSkyLightInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrecomputedSkyLightInstanceData;
	struct Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedSkyLightInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness = { "AverageBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrecomputedSkyLightInstanceData, AverageBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrecomputedSkyLightInstanceData, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"PrecomputedSkyLightInstanceData",
		sizeof(FPrecomputedSkyLightInstanceData),
		alignof(FPrecomputedSkyLightInstanceData),
		Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrecomputedSkyLightInstanceData"), sizeof(FPrecomputedSkyLightInstanceData), Get_Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Hash() { return 257952815U; }
	void USkyLightComponent::StaticRegisterNativesUSkyLightComponent()
	{
		UClass* Class = USkyLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecaptureSky", &USkyLightComponent::execRecaptureSky },
			{ "SetCubemap", &USkyLightComponent::execSetCubemap },
			{ "SetCubemapBlend", &USkyLightComponent::execSetCubemapBlend },
			{ "SetIndirectLightingIntensity", &USkyLightComponent::execSetIndirectLightingIntensity },
			{ "SetIntensity", &USkyLightComponent::execSetIntensity },
			{ "SetLightColor", &USkyLightComponent::execSetLightColor },
			{ "SetLowerHemisphereColor", &USkyLightComponent::execSetLowerHemisphereColor },
			{ "SetMinOcclusion", &USkyLightComponent::execSetMinOcclusion },
			{ "SetOcclusionContrast", &USkyLightComponent::execSetOcclusionContrast },
			{ "SetOcclusionExponent", &USkyLightComponent::execSetOcclusionExponent },
			{ "SetOcclusionTint", &USkyLightComponent::execSetOcclusionTint },
			{ "SetVolumetricScatteringIntensity", &USkyLightComponent::execSetVolumetricScatteringIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Recaptures the scene for the skylight.\nThis is useful for making sure the sky light is up to date after changing something in the world that it would capture.\nWarning: this is very costly and will definitely cause a hitch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "RecaptureSky", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_RecaptureSky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics
	{
		struct SkyLightComponent_eventSetCubemap_Parms
		{
			UTextureCube* NewCubemap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCubemap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::NewProp_NewCubemap = { "NewCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemap_Parms, NewCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::NewProp_NewCubemap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Sets the cubemap used when SourceType is set to SpecifiedCubemap, and causes a skylight update on the next tick." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetCubemap", sizeof(SkyLightComponent_eventSetCubemap_Parms), Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics
	{
		struct SkyLightComponent_eventSetCubemapBlend_Parms
		{
			UTextureCube* SourceCubemap;
			UTextureCube* DestinationCubemap;
			float InBlendFraction;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendFraction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationCubemap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceCubemap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_InBlendFraction = { "InBlendFraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, InBlendFraction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_DestinationCubemap = { "DestinationCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, DestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_SourceCubemap = { "SourceCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, SourceCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_InBlendFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_DestinationCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_SourceCubemap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Creates sky lighting from a blend between two cubemaps, which is only valid when SourceType is set to SpecifiedCubemap.\nThis can be used to seamlessly transition sky lighting between different times of day.\nThe caller should continue to update the blend until BlendFraction is 0 or 1 to reduce rendering cost.\nThe caller is responsible for avoiding pops due to changing the source or destination." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetCubemapBlend", sizeof(SkyLightComponent_eventSetCubemapBlend_Parms), Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics
	{
		struct SkyLightComponent_eventSetIndirectLightingIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetIndirectLightingIntensity", sizeof(SkyLightComponent_eventSetIndirectLightingIntensity_Parms), Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics
	{
		struct SkyLightComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetIntensity", sizeof(SkyLightComponent_eventSetIntensity_Parms), Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics
	{
		struct SkyLightComponent_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::NewProp_NewLightColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetLightColor", sizeof(SkyLightComponent_eventSetLightColor_Parms), Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics
	{
		struct SkyLightComponent_eventSetLowerHemisphereColor_Parms
		{
			FLinearColor InLowerHemisphereColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLowerHemisphereColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLowerHemisphereColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor = { "InLowerHemisphereColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetLowerHemisphereColor_Parms, InLowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetLowerHemisphereColor", sizeof(SkyLightComponent_eventSetLowerHemisphereColor_Parms), Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics
	{
		struct SkyLightComponent_eventSetMinOcclusion_Parms
		{
			float InMinOcclusion;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::NewProp_InMinOcclusion = { "InMinOcclusion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetMinOcclusion_Parms, InMinOcclusion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::NewProp_InMinOcclusion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetMinOcclusion", sizeof(SkyLightComponent_eventSetMinOcclusion_Parms), Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics
	{
		struct SkyLightComponent_eventSetOcclusionContrast_Parms
		{
			float InOcclusionContrast;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOcclusionContrast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::NewProp_InOcclusionContrast = { "InOcclusionContrast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionContrast_Parms, InOcclusionContrast), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::NewProp_InOcclusionContrast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionContrast", sizeof(SkyLightComponent_eventSetOcclusionContrast_Parms), Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics
	{
		struct SkyLightComponent_eventSetOcclusionExponent_Parms
		{
			float InOcclusionExponent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOcclusionExponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::NewProp_InOcclusionExponent = { "InOcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionExponent_Parms, InOcclusionExponent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::NewProp_InOcclusionExponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionExponent", sizeof(SkyLightComponent_eventSetOcclusionExponent_Parms), Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics
	{
		struct SkyLightComponent_eventSetOcclusionTint_Parms
		{
			FColor InTint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint = { "InTint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionTint_Parms, InTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionTint", sizeof(SkyLightComponent_eventSetOcclusionTint_Parms), Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics
	{
		struct SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetVolumetricScatteringIntensity", sizeof(SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms), Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyLightComponent_NoRegister()
	{
		return USkyLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendDestinationCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendDestinationCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OcclusionTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerHemisphereColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerHemisphereColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowerHemisphereIsBlack_MetaData[];
#endif
		static void NewProp_bLowerHemisphereIsBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerHemisphereIsBlack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureEmissiveOnly_MetaData[];
#endif
		static void NewProp_bCaptureEmissiveOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureEmissiveOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyLightComponent_RecaptureSky, "RecaptureSky" }, // 3011401980
		{ &Z_Construct_UFunction_USkyLightComponent_SetCubemap, "SetCubemap" }, // 107351390
		{ &Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend, "SetCubemapBlend" }, // 1504037608
		{ &Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 2681323792
		{ &Z_Construct_UFunction_USkyLightComponent_SetIntensity, "SetIntensity" }, // 297137187
		{ &Z_Construct_UFunction_USkyLightComponent_SetLightColor, "SetLightColor" }, // 3861002406
		{ &Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor, "SetLowerHemisphereColor" }, // 3717722827
		{ &Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion, "SetMinOcclusion" }, // 2677131694
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast, "SetOcclusionContrast" }, // 1700381169
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent, "SetOcclusionExponent" }, // 3648666558
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint, "SetOcclusionTint" }, // 2092364061
		{ &Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 3520125360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SkyLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap = { "BlendDestinationCubemap", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, BlendDestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Controls how occlusion from Distance Field Ambient Occlusion is combined with Screen Space Ambient Occlusion." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode = { "OcclusionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionCombineMode), Z_Construct_UEnum_Engine_EOcclusionCombineMode, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Tint color on occluded areas, artistic control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint = { "OcclusionTint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Controls the darkest that a fully occluded area can get.  This tends to destroy contact shadows, use Contrast or OcclusionExponent instead." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion = { "MinOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, MinOcclusion), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Exponent applied to the computed AO.  Values lower than 1 brighten occlusion overall without losing contact shadows." },
		{ "UIMax", "1.6" },
		{ "UIMin", ".6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent = { "OcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionExponent), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "DisplayName", "Occlusion Contrast" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Contrast S-curve applied to the computed AO.  A value of 0 means no contrast increase, 1 is a significant contrast increase." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, Contrast), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Max distance that the occlusion of one point will affect another.\nHigher values increase the cost of Distance Field AO exponentially." },
		{ "UIMax", "1500" },
		{ "UIMin", "200" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance = { "OcclusionMaxDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionMaxDistance), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor = { "LowerHemisphereColor", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, LowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Lower Hemisphere Is Solid Color" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Whether all distant lighting from the lower hemisphere should be set to LowerHemisphereColor.\nEnabling this is accurate when lighting a scene on a planet where the ground blocks the sky,\nHowever disabling it can be useful to approximate skylight bounce lighting (eg Movable light)." },
	};
#endif
	void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_SetBit(void* Obj)
	{
		((USkyLightComponent*)Obj)->bLowerHemisphereIsBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack = { "bLowerHemisphereIsBlack", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Only capture emissive materials. Skips all lighting making the capture cheaper. Recomended when using CaptureEveryFrame" },
	};
#endif
	void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_SetBit(void* Obj)
	{
		((USkyLightComponent*)Obj)->bCaptureEmissiveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly = { "bCaptureEmissiveOnly", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Distance from the sky light at which any geometry should be treated as part of the sky.\nThis is also used by reflection captures, so update reflection captures to see the impact." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold = { "SkyDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, SkyDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Maximum resolution for the very top processed cubemap mip. Must be a power of 2." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, CubemapResolution), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, SourceCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Cubemap to use for sky lighting if SourceType is set to SLS_SpecifiedCubemap." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Indicates where to get the light contribution from." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyLightComponent, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyLightComponent_Statics::ClassParams = {
		&USkyLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyLightComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyLightComponent, 3859408909);
	template<> ENGINE_API UClass* StaticClass<USkyLightComponent>()
	{
		return USkyLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyLightComponent(Z_Construct_UClass_USkyLightComponent, &USkyLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkyLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkyLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
