// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshReductionSettings_generated_h
#error "SkeletalMeshReductionSettings.generated.h already included, missing '#pragma once' in SkeletalMeshReductionSettings.h"
#endif
#define ENGINE_SkeletalMeshReductionSettings_generated_h

#define Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshOptimizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_SkeletalMeshReductionSettings_h


#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONIMPORTANCE(op) \
	op(SMOI_Off) \
	op(SMOI_Lowest) \
	op(SMOI_Low) \
	op(SMOI_Normal) \
	op(SMOI_High) \
	op(SMOI_Highest) 
#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONTYPE(op) \
	op(SMOT_NumOfTriangles) \
	op(SMOT_MaxDeviation) \
	op(SMOT_TriangleOrDeviation) 
#define FOREACH_ENUM_SKELETALMESHTERMINATIONCRITERION(op) \
	op(SMTC_NumOfTriangles) \
	op(SMTC_NumOfVerts) \
	op(SMTC_TriangleOrVert) \
	op(SMTC_AbsNumOfTriangles) \
	op(SMTC_AbsNumOfVerts) \
	op(SMTC_AbsTriangleOrVert) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
