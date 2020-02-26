// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/ReverbEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UReverbEffect::StaticRegisterNativesUReverbEffect()
	{
	}
	UClass* Z_Construct_UClass_UReverbEffect_NoRegister()
	{
		return UReverbEffect::StaticClass();
	}
	struct Z_Construct_UClass_UReverbEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[];
#endif
		static void NewProp_bChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChanged;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomRolloffFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomRolloffFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverbEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Sound/ReverbEffect.h" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Transient property used to trigger real-time updates of the reverb for real-time editor previewing" },
	};
#endif
	void Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_SetBit(void* Obj)
	{
		((UReverbEffect*)Obj)->bChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UReverbEffect), &Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Room Rolloff - 0.0 < 0.0 < 10.0 - multiplies the attenuation due to distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor = { "RoomRolloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, RoomRolloffFactor), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF = { "AirAbsorptionGainHF", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, AirAbsorptionGainHF), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay = { "LateDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, LateDelay), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain = { "LateGain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, LateGain), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, ReflectionsDelay), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "3.16" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain = { "ReflectionsGain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, ReflectionsGain), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, DecayHFRatio), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, DecayTime), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF = { "GainHF", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, GainHF), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, Gain), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Diffusion - 0.0 < 1.0 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, Diffusion), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
		{ "ToolTip", "Density - 0.0 < 1.0 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReverbEffect, Density), METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverbEffect_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_RoomRolloffFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_AirAbsorptionGainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_LateGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_ReflectionsGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayHFRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_DecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_GainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Diffusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbEffect_Statics::NewProp_Density,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverbEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReverbEffect_Statics::ClassParams = {
		&UReverbEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReverbEffect_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReverbEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReverbEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverbEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReverbEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverbEffect, 4093435537);
	template<> ENGINE_API UClass* StaticClass<UReverbEffect>()
	{
		return UReverbEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverbEffect(Z_Construct_UClass_UReverbEffect, &UReverbEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UReverbEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
