// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBinding_generated_h
#error "MovieSceneBinding.generated.h already included, missing '#pragma once' in MovieSceneBinding.h"
#endif
#define MOVIESCENE_MovieSceneBinding_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBinding_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ObjectGuid() { return STRUCT_OFFSET(FMovieSceneBinding, ObjectGuid); } \
	FORCEINLINE static uint32 __PPO__BindingName() { return STRUCT_OFFSET(FMovieSceneBinding, BindingName); } \
	FORCEINLINE static uint32 __PPO__Tracks() { return STRUCT_OFFSET(FMovieSceneBinding, Tracks); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
