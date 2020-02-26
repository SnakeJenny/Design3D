// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_KeyParams_generated_h
#error "KeyParams.generated.h already included, missing '#pragma once' in KeyParams.h"
#endif
#define MOVIESCENE_KeyParams_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_KeyParams_h


#define FOREACH_ENUM_EMOVIESCENEKEYINTERPOLATION(op) \
	op(EMovieSceneKeyInterpolation::Auto) \
	op(EMovieSceneKeyInterpolation::User) \
	op(EMovieSceneKeyInterpolation::Break) \
	op(EMovieSceneKeyInterpolation::Linear) \
	op(EMovieSceneKeyInterpolation::Constant) 

enum class EMovieSceneKeyInterpolation : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneKeyInterpolation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
