// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneFadeTemplate_generated_h
#error "MovieSceneFadeTemplate.generated.h already included, missing '#pragma once' in MovieSceneFadeTemplate.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeTemplate_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneFadeTemplate_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__FadeCurve() { return STRUCT_OFFSET(FMovieSceneFadeSectionTemplate, FadeCurve); } \
	FORCEINLINE static uint32 __PPO__FadeColor() { return STRUCT_OFFSET(FMovieSceneFadeSectionTemplate, FadeColor); } \
	typedef FMovieSceneEvalTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneFadeSectionTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneFadeTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
