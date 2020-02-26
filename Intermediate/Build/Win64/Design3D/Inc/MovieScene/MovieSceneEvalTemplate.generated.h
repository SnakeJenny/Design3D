// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvalTemplate_generated_h
#error "MovieSceneEvalTemplate.generated.h already included, missing '#pragma once' in MovieSceneEvalTemplate.h"
#endif
#define MOVIESCENE_MovieSceneEvalTemplate_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvalTemplatePtr>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CompletionMode() { return STRUCT_OFFSET(FMovieSceneEvalTemplate, CompletionMode); } \
	FORCEINLINE static uint32 __PPO__SourceSectionPtr() { return STRUCT_OFFSET(FMovieSceneEvalTemplate, SourceSectionPtr); } \
	typedef FMovieSceneEvalTemplateBase Super;


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvalTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
