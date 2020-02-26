// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PreviewAssetAttachComponent_generated_h
#error "PreviewAssetAttachComponent.generated.h already included, missing '#pragma once' in PreviewAssetAttachComponent.h"
#endif
#define ENGINE_PreviewAssetAttachComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AttachedObjects() { return STRUCT_OFFSET(FPreviewAssetAttachContainer, AttachedObjects); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPreviewAssetAttachContainer>();

#define Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AttachedObject() { return STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedObject); } \
	FORCEINLINE static uint32 __PPO__Object_DEPRECATED() { return STRUCT_OFFSET(FPreviewAttachedObjectPair, Object_DEPRECATED); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPreviewAttachedObjectPair>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
