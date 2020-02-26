// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIELDSYSTEMCORE_FieldSystemTypes_generated_h
#error "FieldSystemTypes.generated.h already included, missing '#pragma once' in FieldSystemTypes.h"
#endif
#define FIELDSYSTEMCORE_FieldSystemTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemCore_Public_Field_FieldSystemTypes_h


#define FOREACH_ENUM_EFIELDPHYSICSDEFAULTFIELDS(op) \
	op(Field_RadialIntMask) \
	op(Field_RadialFalloff) \
	op(Field_UniformVector) \
	op(Field_RadialVector) \
	op(Field_RadialVectorFalloff) \
	op(Field_EFieldPhysicsDefaultFields_Max) 
#define FOREACH_ENUM_EFIELDPHYSICSTYPE(op) \
	op(Field_StayDynamic) \
	op(Field_LinearForce) \
	op(Field_PhysicsType_Max) 
#define FOREACH_ENUM_EFIELDOPERATIONTYPE(op) \
	op(Field_Multiply) \
	op(Field_Divide) \
	op(Field_Add) \
	op(Field_Substract) \
	op(Field_Operation_Max) 
#define FOREACH_ENUM_ESETMASKCONDITIONTYPE(op) \
	op(Field_Set_Always) \
	op(Field_Set_IFF_NOT_Interior) \
	op(Field_Set_IFF_NOT_Exterior) \
	op(Field_MaskCondition_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
