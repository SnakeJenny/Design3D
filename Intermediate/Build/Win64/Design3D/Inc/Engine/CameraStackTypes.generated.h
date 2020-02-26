// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraStackTypes_generated_h
#error "CameraStackTypes.generated.h already included, missing '#pragma once' in CameraStackTypes.h"
#endif
#define ENGINE_CameraStackTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDummySpacerCameraTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h


#define FOREACH_ENUM_ECAMERAALPHABLENDMODE(op) \
	op(ECameraAlphaBlendMode::CABM_Linear) \
	op(ECameraAlphaBlendMode::CABM_Cubic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
