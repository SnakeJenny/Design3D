// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h
#error "AnimNode_AnimDynamics.generated.h already included, missing '#pragma once' in AnimNode_AnimDynamics.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_AnimDynamics>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimPhysSphericalLimit>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimPhysPlanarLimit>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimPhysConstraintSetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h


#define FOREACH_ENUM_ESPHERICALLIMITTYPE(op) \
	op(ESphericalLimitType::Inner) \
	op(ESphericalLimitType::Outer) 

enum class ESphericalLimitType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESphericalLimitType>();

#define FOREACH_ENUM_ANIMPHYSSIMSPACETYPE(op) \
	op(AnimPhysSimSpaceType::Component) \
	op(AnimPhysSimSpaceType::Actor) \
	op(AnimPhysSimSpaceType::World) \
	op(AnimPhysSimSpaceType::RootRelative) \
	op(AnimPhysSimSpaceType::BoneRelative) 

enum class AnimPhysSimSpaceType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysSimSpaceType>();

#define FOREACH_ENUM_ANIMPHYSLINEARCONSTRAINTTYPE(op) \
	op(AnimPhysLinearConstraintType::Free) \
	op(AnimPhysLinearConstraintType::Limited) 

enum class AnimPhysLinearConstraintType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysLinearConstraintType>();

#define FOREACH_ENUM_ANIMPHYSANGULARCONSTRAINTTYPE(op) \
	op(AnimPhysAngularConstraintType::Angular) \
	op(AnimPhysAngularConstraintType::Cone) 

enum class AnimPhysAngularConstraintType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysAngularConstraintType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
