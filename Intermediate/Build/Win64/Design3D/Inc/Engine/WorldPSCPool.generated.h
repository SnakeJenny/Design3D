// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPSCPool_generated_h
#error "WorldPSCPool.generated.h already included, missing '#pragma once' in WorldPSCPool.h"
#endif
#define ENGINE_WorldPSCPool_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPSCPool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__WorldParticleSystemPools() { return STRUCT_OFFSET(FWorldPSCPool, WorldParticleSystemPools); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPSCPool>();

#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPSCPool_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPSCPool>();

#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPSCPoolElem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPSCPoolElem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h


#define FOREACH_ENUM_EPSCPOOLMETHOD(op) \
	op(EPSCPoolMethod::None) \
	op(EPSCPoolMethod::AutoRelease) \
	op(EPSCPoolMethod::ManualRelease) \
	op(EPSCPoolMethod::ManualRelease_OnComplete) \
	op(EPSCPoolMethod::FreeInPool) 

enum class EPSCPoolMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPSCPoolMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
