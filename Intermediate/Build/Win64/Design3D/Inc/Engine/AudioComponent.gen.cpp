// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/AudioComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedFFTData();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms
		{
			float AverageEnvelopeValue;
			float MaxEnvelope;
			int32 NumWaveInstances;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumWaveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumWaveInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnvelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnvelope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageEnvelopeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances = { "NumWaveInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, NumWaveInstances), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope = { "MaxEnvelope", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, MaxEnvelope), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue = { "AverageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, AverageEnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's average and max envelope value (using an envelope follower in the audio renderer per wave instance).\nThis only works in the audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioMultiEnvelopeValue__DelegateSignature", sizeof(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms
		{
			const USoundWave* PlayingSoundWave;
			float EnvelopeValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioSingleEnvelopeValue__DelegateSignature", sizeof(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioPlaybackPercent_Parms
		{
			const USoundWave* PlayingSoundWave;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioPlaybackPercent__DelegateSignature", sizeof(_Script_Engine_eventOnAudioPlaybackPercent_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQueueSubtitles_Parms
		{
			TArray<FSubtitleCue> Subtitles;
			float CueDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration = { "CueDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, Subtitles), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner = { "Subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQueueSubtitles__DelegateSignature", sizeof(_Script_Engine_eventOnQueueSubtitles_Parms), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioFinished__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAudioComponentParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioComponentParam, Z_Construct_UPackage__Script_Engine(), TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioComponentParam>()
{
	return FAudioComponentParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioComponentParam(FAudioComponentParam::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioComponentParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioComponentParam")),new UScriptStruct::TCppStructOps<FAudioComponentParam>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam;
	struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParam_MetaData[];
#endif
		static void NewProp_BoolParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Struct used for storing one per-instance named parameter for this AudioComponent.\nCertain nodes in the SoundCue may reference parameters by name so they can be adjusted per-instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioComponentParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a sound wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam = { "SoundWaveParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, SoundWaveParam), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as an integer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam = { "IntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, IntParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a boolean" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_SetBit(void* Obj)
	{
		((FAudioComponentParam*)Obj)->BoolParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam = { "BoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioComponentParam), &Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Value of the parameter when used as a float" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam = { "FloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, FloatParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Name of the parameter" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioComponentParam, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_IntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_BoolParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_FloatParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_ParamName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioComponentParam",
		sizeof(FAudioComponentParam),
		alignof(FAudioComponentParam),
		Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_Hash() { return 950317622U; }
	void UAudioComponent::StaticRegisterNativesUAudioComponent()
	{
		UClass* Class = UAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAudioComponent::execAdjustAttenuation },
			{ "AdjustVolume", &UAudioComponent::execAdjustVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAudioComponent::execBP_GetAttenuationSettingsToApply },
			{ "FadeIn", &UAudioComponent::execFadeIn },
			{ "FadeOut", &UAudioComponent::execFadeOut },
			{ "GetCookedEnvelopeData", &UAudioComponent::execGetCookedEnvelopeData },
			{ "GetCookedFFTData", &UAudioComponent::execGetCookedFFTData },
			{ "HasCookedAmplitudeEnvelopeData", &UAudioComponent::execHasCookedAmplitudeEnvelopeData },
			{ "HasCookedFFTData", &UAudioComponent::execHasCookedFFTData },
			{ "IsPlaying", &UAudioComponent::execIsPlaying },
			{ "Play", &UAudioComponent::execPlay },
			{ "SetBoolParameter", &UAudioComponent::execSetBoolParameter },
			{ "SetFloatParameter", &UAudioComponent::execSetFloatParameter },
			{ "SetIntParameter", &UAudioComponent::execSetIntParameter },
			{ "SetLowPassFilterEnabled", &UAudioComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &UAudioComponent::execSetLowPassFilterFrequency },
			{ "SetPaused", &UAudioComponent::execSetPaused },
			{ "SetPitchMultiplier", &UAudioComponent::execSetPitchMultiplier },
			{ "SetSound", &UAudioComponent::execSetSound },
			{ "SetSubmixSend", &UAudioComponent::execSetSubmixSend },
			{ "SetUISound", &UAudioComponent::execSetUISound },
			{ "SetVolumeMultiplier", &UAudioComponent::execSetVolumeMultiplier },
			{ "SetWaveParameter", &UAudioComponent::execSetWaveParameter },
			{ "Stop", &UAudioComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics
	{
		struct AudioComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustAttenuation", sizeof(AudioComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics
	{
		struct AudioComponent_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This will allow one to adjust the volume of an AudioComponent on the fly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustVolume", sizeof(AudioComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "BP_GetAttenuationSettingsToApply", sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeIn_Statics
	{
		struct AudioComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This can be used in place of \"play\" when it is desired to fade in the sound over time.\n\nIf FadeTime is 0.0, the change in volume is instant.\nIf FadeTime is > 0.0, the multiplier will be increased from 0 to FadeVolumeLevel over FadeIn seconds.\n\n@param FadeInDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume to fade to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeIn", sizeof(AudioComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeOut_Statics
	{
		struct AudioComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This is used in place of \"stop\" when it is desired to fade the volume of the sound before stopping.\n\nIf FadeTime is 0.0, this is the same as calling Stop().\nIf FadeTime is > 0.0, this will adjust the volume multiplier to FadeVolumeLevel over FadeInTime seconds\nand then stop the sound.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeOut", sizeof(AudioComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics
	{
		struct AudioComponent_eventGetCookedEnvelopeData_Parms
		{
			float OutEnvelopeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutEnvelopeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedEnvelopeData_Parms, OutEnvelopeData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns the current cooked envelope data of the playing audio component. Returns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedEnvelopeData", sizeof(AudioComponent_eventGetCookedEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics
	{
		struct AudioComponent_eventGetCookedFFTData_Parms
		{
			TArray<float> FrequenciesToGet;
			TArray<FSoundWaveSpectralData> OutSoundWaveSpectralData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaveSpectralData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSoundWaveSpectralData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequenciesToGet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FrequenciesToGet;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequenciesToGet_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventGetCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, OutSoundWaveSpectralData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, FrequenciesToGet), METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns the current cooked spectral data of the playing audio component. Returns true if there is data and the audio component is playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedFFTData", sizeof(AudioComponent_eventGetCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics
	{
		struct AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries if the sound wave playing in this audio component has cooked amplitude analyses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedAmplitudeEnvelopeData", sizeof(AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics
	{
		struct AudioComponent_eventHasCookedFFTData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventHasCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries if the sound wave playing in this audio component has cooked FFT data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedFFTData", sizeof(AudioComponent_eventHasCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics
	{
		struct AudioComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns true if this component is currently playing a SoundCue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "IsPlaying", sizeof(AudioComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Play_Statics
	{
		struct AudioComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Start a sound playing on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Play", sizeof(AudioComponent_eventPlay_Parms), Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics
	{
		struct AudioComponent_eventSetBoolParameter_Parms
		{
			FName InName;
			bool InBool;
		};
		static void NewProp_InBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((AudioComponent_eventSetBoolParameter_Parms*)Obj)->InBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetBoolParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "DisplayName", "Set Boolean Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a boolean instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetBoolParameter", sizeof(AudioComponent_eventSetBoolParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics
	{
		struct AudioComponent_eventSetFloatParameter_Parms
		{
			FName InName;
			float InFloat;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a float instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetFloatParameter", sizeof(AudioComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics
	{
		struct AudioComponent_eventSetIntParameter_Parms
		{
			FName InName;
			int32 InInt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "DisplayName", "Set Integer Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set an integer instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetIntParameter", sizeof(AudioComponent_eventSetIntParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics
	{
		struct AudioComponent_eventSetLowPassFilterEnabled_Parms
		{
			bool InLowPassFilterEnabled;
		};
		static void NewProp_InLowPassFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((AudioComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterEnabled", sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics
	{
		struct AudioComponent_eventSetLowPassFilterFrequency_Parms
		{
			float InLowPassFilterFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterFrequency", sizeof(AudioComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPaused_Statics
	{
		struct AudioComponent_eventSetPaused_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AudioComponent_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Pause an audio component playing its sound cue, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPaused", sizeof(AudioComponent_eventSetPaused_Parms), Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics
	{
		struct AudioComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPitchMultiplier", sizeof(AudioComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSound_Statics
	{
		struct AudioComponent_eventSetSound_Parms
		{
			USoundBase* NewSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set what sound is played by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSound", sizeof(AudioComponent_eventSetSound_Parms), Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics
	{
		struct AudioComponent_eventSetSubmixSend_Parms
		{
			USoundSubmix* Submix;
			float SendLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSubmixSend", sizeof(AudioComponent_eventSetSubmixSend_Parms), Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetUISound_Statics
	{
		struct AudioComponent_eventSetUISound_Parms
		{
			bool bInUISound;
		};
		static void NewProp_bInUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUISound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit(void* Obj)
	{
		((AudioComponent_eventSetUISound_Parms*)Obj)->bInUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound = { "bInUISound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioComponent_eventSetUISound_Parms), &Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set whether sounds generated by this audio component should be considered UI sounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetUISound", sizeof(AudioComponent_eventSetUISound_Parms), Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics
	{
		struct AudioComponent_eventSetVolumeMultiplier_Parms
		{
			float NewVolumeMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVolumeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier = { "NewVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetVolumeMultiplier_Parms, NewVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetVolumeMultiplier", sizeof(AudioComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics
	{
		struct AudioComponent_eventSetWaveParameter_Parms
		{
			FName InName;
			USoundWave* InWave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWave;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave = { "InWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a sound wave instance parameter for use in sound cues played by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetWaveParameter", sizeof(AudioComponent_eventSetWaveParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop an audio component playing its sound cue, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Stop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioComponent_NoRegister()
	{
		return UAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioMultiEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioMultiEnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioSingleEnvelopeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioSingleEnvelopeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyGainMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighFrequencyGainMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeWeightedPriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeWeightedPriorityScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponentUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioComponentUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridePriority_MetaData[];
#endif
		static void NewProp_bOverridePriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[];
#endif
		static void NewProp_bEnableLowPassFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubtitlePriority_MetaData[];
#endif
		static void NewProp_bOverrideSubtitlePriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[];
#endif
		static void NewProp_bAllowSpatialization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainActiveIfDropped_MetaData[];
#endif
		static void NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainActiveIfDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioComponent_AdjustAttenuation, "AdjustAttenuation" }, // 2734739375
		{ &Z_Construct_UFunction_UAudioComponent_AdjustVolume, "AdjustVolume" }, // 3350111087
		{ &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 1855897571
		{ &Z_Construct_UFunction_UAudioComponent_FadeIn, "FadeIn" }, // 1031065376
		{ &Z_Construct_UFunction_UAudioComponent_FadeOut, "FadeOut" }, // 2139462914
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData, "GetCookedEnvelopeData" }, // 2036679669
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData, "GetCookedFFTData" }, // 746129026
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData, "HasCookedAmplitudeEnvelopeData" }, // 3563979542
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData, "HasCookedFFTData" }, // 2512877796
		{ &Z_Construct_UFunction_UAudioComponent_IsPlaying, "IsPlaying" }, // 1439750348
		{ &Z_Construct_UFunction_UAudioComponent_Play, "Play" }, // 1643163679
		{ &Z_Construct_UFunction_UAudioComponent_SetBoolParameter, "SetBoolParameter" }, // 3564328955
		{ &Z_Construct_UFunction_UAudioComponent_SetFloatParameter, "SetFloatParameter" }, // 167709096
		{ &Z_Construct_UFunction_UAudioComponent_SetIntParameter, "SetIntParameter" }, // 1122980931
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 749175613
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 1510042078
		{ &Z_Construct_UFunction_UAudioComponent_SetPaused, "SetPaused" }, // 1547667257
		{ &Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 835828293
		{ &Z_Construct_UFunction_UAudioComponent_SetSound, "SetSound" }, // 1908961422
		{ &Z_Construct_UFunction_UAudioComponent_SetSubmixSend, "SetSubmixSend" }, // 54154667
		{ &Z_Construct_UFunction_UAudioComponent_SetUISound, "SetUISound" }, // 2635472758
		{ &Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 3755281056
		{ &Z_Construct_UFunction_UAudioComponent_SetWaveParameter, "SetWaveParameter" }, // 1062941865
		{ &Z_Construct_UFunction_UAudioComponent_Stop, "Stop" }, // 1016432707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/AudioComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "AudioComponent is used to play a Sound\n\n@see https://docs.unrealengine.com/latest/INT/Audio/Overview/index.html\n@see USoundBase" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue = { "OnAudioMultiEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioMultiEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue = { "OnAudioSingleEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioSingleEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency rules to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "AttenuationSettings" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableLowPassFilter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The frequency of the lowpass filter (in hertz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A pitch multiplier to apply to sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier = { "HighFrequencyGainMultiplier", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, HighFrequencyGainMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale = { "VolumeWeightedPriorityScale", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeWeightedPriorityScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverrideSubtitlePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Used by the subtitle manager to prioritize subtitles wave instances spawned by this component." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverridePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A priority value that is used for sounds that play on this component that scales against final output volume." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A volume multiplier to apply to sounds generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax = { "VolumeModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin = { "VolumeModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, VolumeModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax = { "PitchModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin = { "PitchModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, PitchModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Configurable, serialized ID for audio plugins" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID = { "AudioComponentUserID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, AudioComponentUserID), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nIf enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be detached/attached along with it.\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If true, subtitles in the sound data will be ignored." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bSuppressSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverridePriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority = { "bOverridePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to apply a low-pass filter to the sound that plays in this audio component." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bEnableLowPassFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter = { "bEnableLowPassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to override the sound's subtitle priority." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideSubtitlePriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority = { "bOverrideSubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows defining attenuation settings directly on this audio component without using an attenuation settings asset." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bShouldRemainActiveIfDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped = { "bShouldRemainActiveIfDropped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Optional sound group this AudioComponent belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Array of per-instance parameters for this AudioComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, InstanceParameters), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioComponentParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The sound to be played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioComponent_Statics::ClassParams = {
		&UAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioComponent, 2934617146);
	template<> ENGINE_API UClass* StaticClass<UAudioComponent>()
	{
		return UAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioComponent(Z_Construct_UClass_UAudioComponent, &UAudioComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
