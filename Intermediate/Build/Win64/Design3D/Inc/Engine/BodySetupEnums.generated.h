// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodySetupEnums_generated_h
#error "BodySetupEnums.generated.h already included, missing '#pragma once' in BodySetupEnums.h"
#endif
#define ENGINE_BodySetupEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetupEnums_h


#define FOREACH_ENUM_EBODYCOLLISIONRESPONSE(op) \
	op(EBodyCollisionResponse::BodyCollision_Enabled) \
	op(EBodyCollisionResponse::BodyCollision_Disabled) 
#define FOREACH_ENUM_EPHYSICSTYPE(op) \
	op(PhysType_Default) \
	op(PhysType_Kinematic) \
	op(PhysType_Simulated) 
#define FOREACH_ENUM_ECOLLISIONTRACEFLAG(op) \
	op(CTF_UseDefault) \
	op(CTF_UseSimpleAndComplex) \
	op(CTF_UseSimpleAsComplex) \
	op(CTF_UseComplexAsSimple) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
