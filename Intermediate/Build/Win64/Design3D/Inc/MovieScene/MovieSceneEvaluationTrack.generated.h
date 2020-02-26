// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvaluationTrack_generated_h
#error "MovieSceneEvaluationTrack.generated.h already included, missing '#pragma once' in MovieSceneEvaluationTrack.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationTrack_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ObjectBindingID() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID); } \
	FORCEINLINE static uint32 __PPO__EvaluationPriority() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority); } \
	FORCEINLINE static uint32 __PPO__EvaluationMethod() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod); } \
	FORCEINLINE static uint32 __PPO__Segments() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, Segments); } \
	FORCEINLINE static uint32 __PPO__SourceTrack() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, SourceTrack); } \
	FORCEINLINE static uint32 __PPO__EvaluationTree() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationTree); } \
	FORCEINLINE static uint32 __PPO__ChildTemplates() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates); } \
	FORCEINLINE static uint32 __PPO__TrackTemplate() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate); } \
	FORCEINLINE static uint32 __PPO__EvaluationGroup() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationTrack>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SegmentIdentifierToIndex() { return STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SegmentIdentifierToIndex); } \
	FORCEINLINE static uint32 __PPO__SortedSegments() { return STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SortedSegments); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationTrackSegments>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSectionEvaluationDataTree_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FSectionEvaluationDataTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h


#define FOREACH_ENUM_EEVALUATIONMETHOD(op) \
	op(EEvaluationMethod::Static) \
	op(EEvaluationMethod::Swept) 

enum class EEvaluationMethod : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EEvaluationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
