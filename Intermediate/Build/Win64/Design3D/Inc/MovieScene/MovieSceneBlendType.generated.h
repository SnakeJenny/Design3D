// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBlendType_generated_h
#error "MovieSceneBlendType.generated.h already included, missing '#pragma once' in MovieSceneBlendType.h"
#endif
#define MOVIESCENE_MovieSceneBlendType_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BlendType() { return STRUCT_OFFSET(FOptionalMovieSceneBlendType, BlendType); } \
	FORCEINLINE static uint32 __PPO__bIsValid() { return STRUCT_OFFSET(FOptionalMovieSceneBlendType, bIsValid); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FOptionalMovieSceneBlendType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h


#define FOREACH_ENUM_EMOVIESCENEBLENDTYPE(op) \
	op(EMovieSceneBlendType::Absolute) \
	op(EMovieSceneBlendType::Additive) \
	op(EMovieSceneBlendType::Relative) 

enum class EMovieSceneBlendType : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
