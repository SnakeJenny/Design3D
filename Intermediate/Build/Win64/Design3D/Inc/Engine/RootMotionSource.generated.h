// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RootMotionSource_generated_h
#error "RootMotionSource.generated.h already included, missing '#pragma once' in RootMotionSource.h"
#endif
#define ENGINE_RootMotionSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_729_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceGroup>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_656_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_JumpForce>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_587_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_MoveToDynamicForce>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_523_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_MoveToForce>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_448_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_RadialForce>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_ConstantForce>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionFinishVelocitySettings>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceSettings>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h


#define FOREACH_ENUM_EROOTMOTIONFINISHVELOCITYMODE(op) \
	op(ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ERootMotionFinishVelocityMode::SetVelocity) \
	op(ERootMotionFinishVelocityMode::ClampVelocity) 

enum class ERootMotionFinishVelocityMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERootMotionFinishVelocityMode>();

#define FOREACH_ENUM_EROOTMOTIONSOURCESETTINGSFLAGS(op) \
	op(ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck) \
	op(ERootMotionSourceSettingsFlags::DisablePartialEndTick) 

enum class ERootMotionSourceSettingsFlags : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceSettingsFlags>();

#define FOREACH_ENUM_EROOTMOTIONSOURCESTATUSFLAGS(op) \
	op(ERootMotionSourceStatusFlags::Prepared) \
	op(ERootMotionSourceStatusFlags::Finished) \
	op(ERootMotionSourceStatusFlags::MarkedForRemoval) 

enum class ERootMotionSourceStatusFlags : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceStatusFlags>();

#define FOREACH_ENUM_EROOTMOTIONACCUMULATEMODE(op) \
	op(ERootMotionAccumulateMode::Override) \
	op(ERootMotionAccumulateMode::Additive) 

enum class ERootMotionAccumulateMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERootMotionAccumulateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
