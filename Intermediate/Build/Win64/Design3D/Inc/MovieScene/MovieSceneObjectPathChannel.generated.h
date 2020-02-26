// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneObjectPathChannel_generated_h
#error "MovieSceneObjectPathChannel.generated.h already included, missing '#pragma once' in MovieSceneObjectPathChannel.h"
#endif
#define MOVIESCENE_MovieSceneObjectPathChannel_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PropertyClass() { return STRUCT_OFFSET(FMovieSceneObjectPathChannel, PropertyClass); } \
	FORCEINLINE static uint32 __PPO__Times() { return STRUCT_OFFSET(FMovieSceneObjectPathChannel, Times); } \
	FORCEINLINE static uint32 __PPO__Values() { return STRUCT_OFFSET(FMovieSceneObjectPathChannel, Values); } \
	FORCEINLINE static uint32 __PPO__DefaultValue() { return STRUCT_OFFSET(FMovieSceneObjectPathChannel, DefaultValue); } \
	typedef FMovieSceneChannel Super;


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectPathChannel>();

#define Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SoftPtr() { return STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, SoftPtr); } \
	FORCEINLINE static uint32 __PPO__HardPtr() { return STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, HardPtr); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectPathChannelKeyValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
