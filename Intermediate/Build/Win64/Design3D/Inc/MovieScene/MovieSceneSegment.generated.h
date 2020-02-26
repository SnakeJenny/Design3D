// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSegment_generated_h
#error "MovieSceneSegment.generated.h already included, missing '#pragma once' in MovieSceneSegment.h"
#endif
#define MOVIESCENE_MovieSceneSegment_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSegment_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSegment>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSectionEvaluationData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FSectionEvaluationData>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IdentifierIndex() { return STRUCT_OFFSET(FMovieSceneSegmentIdentifier, IdentifierIndex); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSegmentIdentifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h


#define FOREACH_ENUM_ESECTIONEVALUATIONFLAGS(op) \
	op(ESectionEvaluationFlags::None) \
	op(ESectionEvaluationFlags::PreRoll) \
	op(ESectionEvaluationFlags::PostRoll) 

enum class ESectionEvaluationFlags : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<ESectionEvaluationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
