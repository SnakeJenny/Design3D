// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneCameraAnimTemplate_generated_h
#error "MovieSceneCameraAnimTemplate.generated.h already included, missing '#pragma once' in MovieSceneCameraAnimTemplate.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraAnimTemplate_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraAnimTemplate_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SourceData() { return STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SourceData); } \
	FORCEINLINE static uint32 __PPO__SectionStartTime() { return STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SectionStartTime); } \
	typedef FMovieSceneAdditiveCameraAnimationTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneCameraShakeSectionTemplate>();

#define Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraAnimTemplate_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SourceData() { return STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SourceData); } \
	FORCEINLINE static uint32 __PPO__SectionStartTime() { return STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SectionStartTime); } \
	typedef FMovieSceneAdditiveCameraAnimationTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneCameraAnimSectionTemplate>();

#define Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraAnimTemplate_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneEvalTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneAdditiveCameraAnimationTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraAnimTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
