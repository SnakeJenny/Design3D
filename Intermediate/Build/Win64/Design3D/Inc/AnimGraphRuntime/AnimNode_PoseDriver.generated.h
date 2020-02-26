// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h
#error "AnimNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimNode_PoseDriver.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_PoseHandler Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_PoseDriver>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FPoseDriverTarget>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FPoseDriverTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h


#define FOREACH_ENUM_EPOSEDRIVEROUTPUT(op) \
	op(EPoseDriverOutput::DrivePoses) \
	op(EPoseDriverOutput::DriveCurves) 

enum class EPoseDriverOutput : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverOutput>();

#define FOREACH_ENUM_EPOSEDRIVERSOURCE(op) \
	op(EPoseDriverSource::Rotation) \
	op(EPoseDriverSource::Translation) 

enum class EPoseDriverSource : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverSource>();

#define FOREACH_ENUM_EPOSEDRIVERTYPE(op) \
	op(EPoseDriverType::SwingAndTwist) \
	op(EPoseDriverType::SwingOnly) \
	op(EPoseDriverType::Translation) 

enum class EPoseDriverType : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
