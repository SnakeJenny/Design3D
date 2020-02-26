// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodyInstance_generated_h
#error "BodyInstance.generated.h already included, missing '#pragma once' in BodyInstance.h"
#endif
#define ENGINE_BodyInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(FBodyInstance, ObjectType); } \
	FORCEINLINE static uint32 __PPO__CollisionEnabled() { return STRUCT_OFFSET(FBodyInstance, CollisionEnabled); } \
	FORCEINLINE static uint32 __PPO__CollisionProfileName() { return STRUCT_OFFSET(FBodyInstance, CollisionProfileName); } \
	FORCEINLINE static uint32 __PPO__CollisionResponses() { return STRUCT_OFFSET(FBodyInstance, CollisionResponses); } \
	FORCEINLINE static uint32 __PPO__MaxDepenetrationVelocity() { return STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity); } \
	FORCEINLINE static uint32 __PPO__MassInKgOverride() { return STRUCT_OFFSET(FBodyInstance, MassInKgOverride); } \
	FORCEINLINE static uint32 __PPO__WalkableSlopeOverride() { return STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride); } \
	FORCEINLINE static uint32 __PPO__PhysMaterialOverride() { return STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBodyInstance>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionResponse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResponseToChannels() { return STRUCT_OFFSET(FCollisionResponse, ResponseToChannels); } \
	FORCEINLINE static uint32 __PPO__ResponseArray() { return STRUCT_OFFSET(FCollisionResponse, ResponseArray); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h


#define FOREACH_ENUM_EDOFMODE(op) \
	op(EDOFMode::Default) \
	op(EDOFMode::SixDOF) \
	op(EDOFMode::YZPlane) \
	op(EDOFMode::XZPlane) \
	op(EDOFMode::XYPlane) \
	op(EDOFMode::CustomPlane) \
	op(EDOFMode::None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
