// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneFwd_generated_h
#error "MovieSceneFwd.generated.h already included, missing '#pragma once' in MovieSceneFwd.h"
#endif
#define MOVIESCENE_MovieSceneFwd_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h


#define FOREACH_ENUM_EUPDATECLOCKSOURCE(op) \
	op(EUpdateClockSource::Tick) \
	op(EUpdateClockSource::Platform) \
	op(EUpdateClockSource::Audio) \
	op(EUpdateClockSource::Timecode) 

enum class EUpdateClockSource : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EUpdateClockSource>();

#define FOREACH_ENUM_EMOVIESCENEEVALUATIONTYPE(op) \
	op(EMovieSceneEvaluationType::FrameLocked) \
	op(EMovieSceneEvaluationType::WithSubFrames) 

enum class EMovieSceneEvaluationType : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneEvaluationType>();

#define FOREACH_ENUM_EMOVIESCENEPLAYERSTATUS(op) \
	op(EMovieScenePlayerStatus::Stopped) \
	op(EMovieScenePlayerStatus::Playing) \
	op(EMovieScenePlayerStatus::Recording) \
	op(EMovieScenePlayerStatus::Scrubbing) \
	op(EMovieScenePlayerStatus::Jumping) \
	op(EMovieScenePlayerStatus::Stepping) \
	op(EMovieScenePlayerStatus::Paused) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
