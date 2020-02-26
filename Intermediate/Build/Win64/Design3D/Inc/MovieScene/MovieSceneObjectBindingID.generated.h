// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneObjectBindingID_generated_h
#error "MovieSceneObjectBindingID.generated.h already included, missing '#pragma once' in MovieSceneObjectBindingID.h"
#endif
#define MOVIESCENE_MovieSceneObjectBindingID_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SequenceID() { return STRUCT_OFFSET(FMovieSceneObjectBindingID, SequenceID); } \
	FORCEINLINE static uint32 __PPO__Space() { return STRUCT_OFFSET(FMovieSceneObjectBindingID, Space); } \
	FORCEINLINE static uint32 __PPO__Guid() { return STRUCT_OFFSET(FMovieSceneObjectBindingID, Guid); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectBindingID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h


#define FOREACH_ENUM_EMOVIESCENEOBJECTBINDINGSPACE(op) \
	op(EMovieSceneObjectBindingSpace::Local) \
	op(EMovieSceneObjectBindingSpace::Root) 

enum class EMovieSceneObjectBindingSpace : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneObjectBindingSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
