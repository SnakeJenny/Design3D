// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimPhysicsSolver_generated_h
#error "AnimPhysicsSolver.generated.h already included, missing '#pragma once' in AnimPhysicsSolver.h"
#endif
#define ENGINE_AnimPhysicsSolver_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h


#define FOREACH_ENUM_ANIMPHYSCOLLISIONTYPE(op) \
	op(AnimPhysCollisionType::CoM) \
	op(AnimPhysCollisionType::CustomSphere) \
	op(AnimPhysCollisionType::InnerSphere) \
	op(AnimPhysCollisionType::OuterSphere) 

enum class AnimPhysCollisionType : uint8;
template<> ENGINE_API UEnum* StaticEnum<AnimPhysCollisionType>();

#define FOREACH_ENUM_ANIMPHYSTWISTAXIS(op) \
	op(AnimPhysTwistAxis::AxisX) \
	op(AnimPhysTwistAxis::AxisY) \
	op(AnimPhysTwistAxis::AxisZ) 

enum class AnimPhysTwistAxis : uint8;
template<> ENGINE_API UEnum* StaticEnum<AnimPhysTwistAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
