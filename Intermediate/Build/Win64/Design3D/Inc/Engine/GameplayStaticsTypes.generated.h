// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameplayStaticsTypes_generated_h
#error "GameplayStaticsTypes.generated.h already included, missing '#pragma once' in GameplayStaticsTypes.h"
#endif
#define ENGINE_GameplayStaticsTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathResult>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathPointData>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h


#define FOREACH_ENUM_ESUGGESTPROJVELOCITYTRACEOPTION(op) \
	op(ESuggestProjVelocityTraceOption::DoNotTrace) \
	op(ESuggestProjVelocityTraceOption::TraceFullPath) \
	op(ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
