// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClass() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAudioOutputTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioOutputTarget, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioOutputTarget"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioOutputTarget::Type>()
	{
		return EAudioOutputTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioOutputTarget(EAudioOutputTarget_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioOutputTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_Hash() { return 3239694408U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioOutputTarget"), 0, Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioOutputTarget::Speaker", (int64)EAudioOutputTarget::Speaker },
				{ "EAudioOutputTarget::Controller", (int64)EAudioOutputTarget::Controller },
				{ "EAudioOutputTarget::ControllerFallbackToSpeaker", (int64)EAudioOutputTarget::ControllerFallbackToSpeaker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Controller.ToolTip", "Sound plays only from controller if present." },
				{ "ControllerFallbackToSpeaker.ToolTip", "Sound plays on the controller if present. If not present, it plays from speakers." },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "Speaker.ToolTip", "Sound plays only from speakers." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioOutputTarget",
				"EAudioOutputTarget::Type",
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
class UScriptStruct* FPassiveSoundMixModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSoundMixModifier, Z_Construct_UPackage__Script_Engine(), TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPassiveSoundMixModifier>()
{
	return FPassiveSoundMixModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSoundMixModifier(FPassiveSoundMixModifier::StaticStruct, TEXT("/Script/Engine"), TEXT("PassiveSoundMixModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier
{
	FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveSoundMixModifier")),new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier;
	struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundMix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Structure containing information on a SoundMix to activate passively." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold = { "MaxVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MaxVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold = { "MinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, MinVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The SoundMix to activate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix = { "SoundMix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSoundMixModifier, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PassiveSoundMixModifier",
		sizeof(FPassiveSoundMixModifier),
		alignof(FPassiveSoundMixModifier),
		Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Hash() { return 176275566U; }
class UScriptStruct* FSoundClassProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassProperties>()
{
	return FSoundClassProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassProperties(FSoundClassProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassProperties")),new UScriptStruct::TCppStructOps<FSoundClassProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties;
	struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[];
#endif
		static void NewProp_bApplyAmbientVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterChannelOnly_MetaData[];
#endif
		static void NewProp_bCenterChannelOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterChannelOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default2DReverbSendAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default2DReverbSendAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverb_MetaData[];
#endif
		static void NewProp_bReverb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMusic_MetaData[];
#endif
		static void NewProp_bIsMusic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[];
#endif
		static void NewProp_bAlwaysPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyEffects_MetaData[];
#endif
		static void NewProp_bApplyEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolumeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolumeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFEBleed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFEBleed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoBleed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoBleed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Structure containing configurable properties of a sound class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Which output target the sound should be played through" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, OutputTarget), Z_Construct_UEnum_Engine_EAudioOutputTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes = { "bApplyAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound class forces sounds to the center channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bCenterChannelOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly = { "bCenterChannelOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Amount of audio to send to master reverb effect for 2D sounds played with this sound class." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount = { "Default2DReverbSendAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Default2DReverbSendAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound class has reverb applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bReverb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb = { "bReverb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this is music (propagates only if parent is true)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsMusic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic = { "bIsMusic", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to artificially prioritise the component to play" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bAlwaysPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay = { "bAlwaysPlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Sound mix voice - whether to apply audio effects" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects = { "bApplyEffects", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume at which the radio filter kicks in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold = { "RadioFilterVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume of the radio filter effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume = { "RadioFilterVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Voice center channel volume - Not a multiplier (no propagation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume = { "VoiceCenterChannelVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, VoiceCenterChannelVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount of a sound to bleed to the LFE channel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed = { "LFEBleed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, LFEBleed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount of stereo sounds to bleed to the rear speakers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed = { "StereoBleed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, StereoBleed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "SoundClassProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundClassProperties, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_StereoBleed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassProperties",
		sizeof(FSoundClassProperties),
		alignof(FSoundClassProperties),
		Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_Hash() { return 2541866112U; }
class UScriptStruct* FSoundClassEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassEditorData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassEditorData>()
{
	return FSoundClassEditorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassEditorData(FSoundClassEditorData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassEditorData")),new UScriptStruct::TCppStructOps<FSoundClassEditorData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData;
	struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassEditorData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassEditorData",
		sizeof(FSoundClassEditorData),
		alignof(FSoundClassEditorData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_Hash() { return 1658907590U; }
	void USoundClass::StaticRegisterNativesUSoundClass()
	{
	}
	UClass* Z_Construct_UClass_USoundClass_NoRegister()
	{
		return USoundClass::StaticClass();
	}
	struct Z_Construct_UClass_USoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSoundMixModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveSoundMixModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSoundMixModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildClasses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, ParentClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "SoundMix Modifiers to activate automatically when a sound of this class is playing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, PassiveSoundMixModifiers), METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPassiveSoundMixModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses = { "ChildClasses", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, ChildClasses), METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner = { "ChildClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Configurable properties like volume and priority." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundClass, Properties), Z_Construct_UScriptStruct_FSoundClassProperties, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundClass_Statics::ClassParams = {
		&USoundClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundClass_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundClass, 1652381321);
	template<> ENGINE_API UClass* StaticClass<USoundClass>()
	{
		return USoundClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundClass(Z_Construct_UClass_USoundClass, &USoundClass::StaticClass, TEXT("/Script/Engine"), TEXT("USoundClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
