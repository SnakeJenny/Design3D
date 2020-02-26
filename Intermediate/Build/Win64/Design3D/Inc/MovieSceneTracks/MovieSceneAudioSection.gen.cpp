// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneAudioSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetSound();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
	void UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection()
	{
		UClass* Class = UMovieSceneAudioSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSound", &UMovieSceneAudioSection::execGetSound },
			{ "GetStartOffset", &UMovieSceneAudioSection::execGetStartOffset },
			{ "SetSound", &UMovieSceneAudioSection::execSetSound },
			{ "SetStartOffset", &UMovieSceneAudioSection::execSetStartOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics
	{
		struct MovieSceneAudioSection_eventGetSound_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Gets the sound for this section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetSound", sizeof(MovieSceneAudioSection_eventGetSound_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics
	{
		struct MovieSceneAudioSection_eventGetStartOffset_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Get the offset into the beginning of the audio clip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetStartOffset", sizeof(MovieSceneAudioSection_eventGetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics
	{
		struct MovieSceneAudioSection_eventSetSound_Parms
		{
			USoundBase* InSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventSetSound_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Sets this section's sound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetSound", sizeof(MovieSceneAudioSection_eventSetSound_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics
	{
		struct MovieSceneAudioSection_eventSetStartOffset_Parms
		{
			FFrameNumber InStartOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set the offset into the beginning of the audio clip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetStartOffset", sizeof(MovieSceneAudioSection_eventSetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister()
	{
		return UMovieSceneAudioSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAudioSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDilationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioDilationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAudioSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneAudioSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetSound, "GetSound" }, // 333732651
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset, "GetStartOffset" }, // 2658494702
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetSound, "SetSound" }, // 2315331258
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset, "SetStartOffset" }, // 2672246613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneAudioSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Audio section, for use in the master audio, or by attached audio objects" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The attenuation settings to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Should the attenuation settings on this section be used." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UMovieSceneAudioSection*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UMovieSceneAudioSection*)Obj)->bSuppressSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The pitch multiplier the sound will be played with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioVolume_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The amount which this audio is time dilated by" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor = { "AudioDilationFactor", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioDilationFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The absolute time that the sound starts playing at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime = { "AudioStartTime", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioStartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The sound cue or wave that this section plays" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAudioSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams = {
		&UMovieSceneAudioSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAudioSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAudioSection, 4033539586);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneAudioSection>()
	{
		return UMovieSceneAudioSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAudioSection(Z_Construct_UClass_UMovieSceneAudioSection, &UMovieSceneAudioSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneAudioSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
