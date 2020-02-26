// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ConstraintTypes_generated_h
#error "ConstraintTypes.generated.h already included, missing '#pragma once' in ConstraintTypes.h"
#endif
#define ENGINE_ConstraintTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTwistConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTwistConstraint>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConeConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConeConstraint>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinearConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLinearConstraint>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintBaseParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintBaseParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h


#define FOREACH_ENUM_ELINEARCONSTRAINTMOTION(op) \
	op(LCM_Free) \
	op(LCM_Limited) \
	op(LCM_Locked) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
