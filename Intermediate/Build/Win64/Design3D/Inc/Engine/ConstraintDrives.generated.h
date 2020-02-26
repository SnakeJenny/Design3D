// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ConstraintDrives_generated_h
#error "ConstraintDrives.generated.h already included, missing '#pragma once' in ConstraintDrives.h"
#endif
#define ENGINE_ConstraintDrives_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAngularDriveConstraint>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLinearDriveConstraint>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDrive_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintDrive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h


#define FOREACH_ENUM_EANGULARDRIVEMODE(op) \
	op(EAngularDriveMode::SLERP) \
	op(EAngularDriveMode::TwistAndSwing) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
