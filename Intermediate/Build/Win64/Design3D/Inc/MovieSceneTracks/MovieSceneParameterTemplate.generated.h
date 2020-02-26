// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParameterTemplate_generated_h
#error "MovieSceneParameterTemplate.generated.h already included, missing '#pragma once' in MovieSceneParameterTemplate.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParameterTemplate_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MaterialIndex() { return STRUCT_OFFSET(FMovieSceneComponentMaterialSectionTemplate, MaterialIndex); } \
	typedef FMovieSceneParameterSectionTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneComponentMaterialSectionTemplate>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Scalars() { return STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Scalars); } \
	FORCEINLINE static uint32 __PPO__Vectors() { return STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vectors); } \
	FORCEINLINE static uint32 __PPO__Colors() { return STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Colors); } \
	typedef FMovieSceneEvalTemplate Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneParameterSectionTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
