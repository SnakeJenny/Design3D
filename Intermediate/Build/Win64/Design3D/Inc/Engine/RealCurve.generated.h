// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RealCurve_generated_h
#error "RealCurve.generated.h already included, missing '#pragma once' in RealCurve.h"
#endif
#define ENGINE_RealCurve_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FIndexedCurve Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRealCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h


#define FOREACH_ENUM_ERICHCURVEEXTRAPOLATION(op) \
	op(RCCE_Cycle) \
	op(RCCE_CycleWithOffset) \
	op(RCCE_Oscillate) \
	op(RCCE_Linear) \
	op(RCCE_Constant) \
	op(RCCE_None) 
#define FOREACH_ENUM_ERICHCURVEINTERPMODE(op) \
	op(RCIM_Linear) \
	op(RCIM_Constant) \
	op(RCIM_Cubic) \
	op(RCIM_None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
