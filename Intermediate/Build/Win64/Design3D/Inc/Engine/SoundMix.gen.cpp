// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundMix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundMix() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSoundClassAdjuster::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassAdjuster, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassAdjuster"), sizeof(FSoundClassAdjuster), Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassAdjuster>()
{
	return FSoundClassAdjuster::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassAdjuster(FSoundClassAdjuster::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassAdjuster"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassAdjuster")),new UScriptStruct::TCppStructOps<FSoundClassAdjuster>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster;
	struct Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolumeAdjuster_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolumeAdjuster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[];
#endif
		static void NewProp_bApplyToChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAdjuster_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAdjuster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeAdjuster_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeAdjuster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Elements of data for sound group volume control" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassAdjuster>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to VoiceCenterChannelVolume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster = { "VoiceCenterChannelVolumeAdjuster", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassAdjuster, VoiceCenterChannelVolumeAdjuster), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Set to true to apply this adjuster to all children of the sound class." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
	{
		((FSoundClassAdjuster*)Obj)->bApplyToChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassAdjuster), &Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to the pitch." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster = { "PitchAdjuster", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassAdjuster, PitchAdjuster), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to the volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster = { "VolumeAdjuster", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassAdjuster, VolumeAdjuster), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "DisplayName", "Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "The sound class this adjuster affects." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject = { "SoundClassObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassAdjuster, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassAdjuster",
		sizeof(FSoundClassAdjuster),
		alignof(FSoundClassAdjuster),
		Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassAdjuster"), sizeof(FSoundClassAdjuster), Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_Hash() { return 1327370019U; }
class UScriptStruct* FAudioEQEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioEQEffect, Z_Construct_UPackage__Script_Engine(), TEXT("AudioEQEffect"), sizeof(FAudioEQEffect), Get_Z_Construct_UScriptStruct_FAudioEQEffect_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioEQEffect>()
{
	return FAudioEQEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioEQEffect(FAudioEQEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioEQEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioEQEffect")),new UScriptStruct::TCppStructOps<FAudioEQEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect;
	struct Z_Construct_UScriptStruct_FAudioEQEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioEQEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 3. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3 = { "Bandwidth3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 3" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3 = { "Gain3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Gain3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 3" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3 = { "FrequencyCenter3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 2. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2 = { "Bandwidth2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 2" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2 = { "Gain2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Gain2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 2" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2 = { "FrequencyCenter2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 1. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1 = { "Bandwidth1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 1" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1 = { "Gain1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Gain1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 1" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1 = { "FrequencyCenter1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 0. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0 = { "Bandwidth0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 0" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0 = { "Gain0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, Gain0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 0" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0 = { "FrequencyCenter0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioEQEffect",
		sizeof(FAudioEQEffect),
		alignof(FAudioEQEffect),
		Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioEQEffect"), sizeof(FAudioEQEffect), Get_Z_Construct_UScriptStruct_FAudioEQEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioEQEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_Hash() { return 1842466614U; }
	void USoundMix::StaticRegisterNativesUSoundMix()
	{
	}
	UClass* Z_Construct_UClass_USoundMix_NoRegister()
	{
		return USoundMix::StaticClass();
	}
	struct Z_Construct_UClass_USoundMix_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundClassEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundClassEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EQPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyEQ_MetaData[];
#endif
		static void NewProp_bApplyEQ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyEQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundMix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Sound/SoundMix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Transient property used to trigger real-time updates of the active EQ filter for editor previewing" },
	};
#endif
	void Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_SetBit(void* Obj)
	{
		((USoundMix*)Obj)->bChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundMix), &Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Time taken in seconds for the mix to fade out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, FadeOutTime), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Duration of mix, negative means it will be applied until another mix is set." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, Duration), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Time taken in seconds for the mix to fade in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, FadeInTime), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Initial delay in seconds before the the mix is applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay = { "InitialDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, InitialDelay), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_MetaData[] = {
		{ "Category", "SoundClasses" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Array of changes to be applied to groups." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects = { "SoundClassEffects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, SoundClassEffects), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_Inner = { "SoundClassEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundClassAdjuster, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings_MetaData[] = {
		{ "Category", "EQ" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings = { "EQSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, EQSettings), Z_Construct_UScriptStruct_FAudioEQEffect, METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority_MetaData[] = {
		{ "Category", "EQ" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority = { "EQPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundMix, EQPriority), METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_MetaData[] = {
		{ "Category", "EQ" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Whether to apply the EQ effect" },
	};
#endif
	void Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_SetBit(void* Obj)
	{
		((USoundMix*)Obj)->bApplyEQ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ = { "bApplyEQ", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundMix), &Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundMix_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundMix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundMix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundMix_Statics::ClassParams = {
		&USoundMix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundMix_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundMix_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundMix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundMix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundMix, 1475160864);
	template<> ENGINE_API UClass* StaticClass<USoundMix>()
	{
		return USoundMix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundMix(Z_Construct_UClass_USoundMix, &USoundMix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundMix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundMix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
