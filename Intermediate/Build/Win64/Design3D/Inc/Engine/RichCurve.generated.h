// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RichCurve_generated_h
#error "RichCurve.generated.h already included, missing '#pragma once' in RichCurve.h"
#endif
#define ENGINE_RichCurve_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_341_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedRichCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedRichCurve>();

#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRealCurve Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRichCurve>();

#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurveKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRichCurveKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h


#define FOREACH_ENUM_ERICHCURVEKEYTIMECOMPRESSIONFORMAT(op) \
	op(RCKTCF_uint16) \
	op(RCKTCF_float32) 
#define FOREACH_ENUM_ERICHCURVECOMPRESSIONFORMAT(op) \
	op(RCCF_Empty) \
	op(RCCF_Constant) \
	op(RCCF_Linear) \
	op(RCCF_Cubic) \
	op(RCCF_Mixed) 
#define FOREACH_ENUM_ERICHCURVETANGENTWEIGHTMODE(op) \
	op(RCTWM_WeightedNone) \
	op(RCTWM_WeightedArrive) \
	op(RCTWM_WeightedLeave) \
	op(RCTWM_WeightedBoth) 
#define FOREACH_ENUM_ERICHCURVETANGENTMODE(op) \
	op(RCTM_Auto) \
	op(RCTM_User) \
	op(RCTM_Break) \
	op(RCTM_None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
