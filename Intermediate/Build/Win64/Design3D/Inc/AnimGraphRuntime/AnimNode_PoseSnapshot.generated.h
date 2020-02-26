// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseSnapshot_generated_h
#error "AnimNode_PoseSnapshot.generated.h already included, missing '#pragma once' in AnimNode_PoseSnapshot.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseSnapshot_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_PoseSnapshot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h


#define FOREACH_ENUM_ESNAPSHOTSOURCEMODE(op) \
	op(ESnapshotSourceMode::NamedSnapshot) \
	op(ESnapshotSourceMode::SnapshotPin) 

enum class ESnapshotSourceMode : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESnapshotSourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
