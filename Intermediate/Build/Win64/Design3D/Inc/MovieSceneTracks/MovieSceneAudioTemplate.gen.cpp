// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneAudioTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAudioSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioSectionTemplate"), sizeof(FMovieSceneAudioSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneAudioSectionTemplate>()
{
	return FMovieSceneAudioSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAudioSectionTemplate(FMovieSceneAudioSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAudioSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAudioSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewProp_AudioData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplate, AudioData), Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewProp_AudioData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewProp_AudioData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::NewProp_AudioData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAudioSectionTemplate",
		sizeof(FMovieSceneAudioSectionTemplate),
		alignof(FMovieSceneAudioSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAudioSectionTemplate"), sizeof(FMovieSceneAudioSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_Hash() { return 3095656583U; }
class UScriptStruct* FMovieSceneAudioSectionTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioSectionTemplateData"), sizeof(FMovieSceneAudioSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneAudioSectionTemplateData>()
{
	return FMovieSceneAudioSectionTemplateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAudioSectionTemplateData(FMovieSceneAudioSectionTemplateData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAudioSectionTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAudioSectionTemplateData")),new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplateData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData;
	struct Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioVolumeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioPitchMultiplierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioPitchMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_SectionStartTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The attenuation settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "Should the attenuation settings on this section be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((FMovieSceneAudioSectionTemplateData*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneAudioSectionTemplateData), &Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_RowIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The row index of the section" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, RowIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_RowIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioVolumeCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioVolumeCurve = { "AudioVolumeCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioVolumeCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioVolumeCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioVolumeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioPitchMultiplierCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The amount which this audio is time dilated by" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioPitchMultiplierCurve = { "AudioPitchMultiplierCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioPitchMultiplierCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioPitchMultiplierCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioPitchMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_SectionStartTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The frame number at which the audio starts playing" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_SectionStartTimeSeconds = { "SectionStartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, SectionStartTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_SectionStartTimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_SectionStartTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioStartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioStartOffset = { "AudioStartOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
		{ "ToolTip", "The sound cue or wave that this template plays. Not to be dereferenced on a background thread" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioPlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnAudioFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_OnQueueSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_RowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioVolumeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioPitchMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_SectionStartTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_AudioStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::NewProp_Sound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneAudioSectionTemplateData",
		sizeof(FMovieSceneAudioSectionTemplateData),
		alignof(FMovieSceneAudioSectionTemplateData),
		Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAudioSectionTemplateData"), sizeof(FMovieSceneAudioSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_Hash() { return 2691964488U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
