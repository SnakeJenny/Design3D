// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSpawnable_generated_h
#error "MovieSceneSpawnable.generated.h already included, missing '#pragma once' in MovieSceneSpawnable.h"
#endif
#define MOVIESCENE_MovieSceneSpawnable_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Guid() { return STRUCT_OFFSET(FMovieSceneSpawnable, Guid); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FMovieSceneSpawnable, Name); } \
	FORCEINLINE static uint32 __PPO__ObjectTemplate() { return STRUCT_OFFSET(FMovieSceneSpawnable, ObjectTemplate); } \
	FORCEINLINE static uint32 __PPO__ChildPossessables() { return STRUCT_OFFSET(FMovieSceneSpawnable, ChildPossessables); } \
	FORCEINLINE static uint32 __PPO__Ownership() { return STRUCT_OFFSET(FMovieSceneSpawnable, Ownership); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSpawnable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h


#define FOREACH_ENUM_ESPAWNOWNERSHIP(op) \
	op(ESpawnOwnership::InnerSequence) \
	op(ESpawnOwnership::MasterSequence) \
	op(ESpawnOwnership::External) 

enum class ESpawnOwnership : uint8;
template<> MOVIESCENE_API UEnum* StaticEnum<ESpawnOwnership>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
