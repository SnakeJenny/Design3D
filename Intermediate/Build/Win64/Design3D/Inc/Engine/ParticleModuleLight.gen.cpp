// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Light/ParticleModuleLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLight::StaticRegisterNativesUParticleModuleLight()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister()
	{
		return UParticleModuleLight::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShadowCastingLights_MetaData[];
#endif
		static void NewProp_bShadowCastingLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShadowCastingLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighQualityLights_MetaData[];
#endif
		static void NewProp_bHighQualityLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighQualityLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrightnessOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrightnessOverLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewLightRadius_MetaData[];
#endif
		static void NewProp_bPreviewLightRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewLightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[];
#endif
		static void NewProp_bAffectsTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLightBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Light" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Light/ParticleModuleLight.h" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\nWarning: This can be incredibly expensive on the GPU - use with caution." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bShadowCastingLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights = { "bShadowCastingLights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bHighQualityLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights = { "bHighQualityLights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Channels that this light should affect.\nOnly affect high quality lights\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Provides the light's exponent when inverse squared falloff is disabled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent = { "LightExponent", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, LightExponent), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scales the particle's radius, to calculate the light's radius." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, RadiusScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Brightness scale for the light, which can be setup as a curve over the particle's lifetime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife = { "BrightnessOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, BrightnessOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Fraction of particles in this emitter to create lights on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction = { "SpawnFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLight, SpawnFraction), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Will draw wireframe spheres to preview the light radius if enabled.\nNote: this is intended for previewing and the value will not be saved, it will always revert to disabled." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bPreviewLightRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius = { "bPreviewLightRadius", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether lights from this module should affect translucency.\nUse with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bAffectsTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bUseInverseSquaredFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams = {
		&UParticleModuleLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLight, 941003469);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLight>()
	{
		return UParticleModuleLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLight(Z_Construct_UClass_UParticleModuleLight, &UParticleModuleLight::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
