// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimLinkableElement_generated_h
#error "AnimLinkableElement.generated.h already included, missing '#pragma once' in AnimLinkableElement.h"
#endif
#define ENGINE_AnimLinkableElement_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLinkableElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__LinkedMontage() { return STRUCT_OFFSET(FAnimLinkableElement, LinkedMontage); } \
	FORCEINLINE static uint32 __PPO__SlotIndex() { return STRUCT_OFFSET(FAnimLinkableElement, SlotIndex); } \
	FORCEINLINE static uint32 __PPO__SegmentIndex() { return STRUCT_OFFSET(FAnimLinkableElement, SegmentIndex); } \
	FORCEINLINE static uint32 __PPO__LinkMethod() { return STRUCT_OFFSET(FAnimLinkableElement, LinkMethod); } \
	FORCEINLINE static uint32 __PPO__CachedLinkMethod() { return STRUCT_OFFSET(FAnimLinkableElement, CachedLinkMethod); } \
	FORCEINLINE static uint32 __PPO__SegmentBeginTime() { return STRUCT_OFFSET(FAnimLinkableElement, SegmentBeginTime); } \
	FORCEINLINE static uint32 __PPO__SegmentLength() { return STRUCT_OFFSET(FAnimLinkableElement, SegmentLength); } \
	FORCEINLINE static uint32 __PPO__LinkValue() { return STRUCT_OFFSET(FAnimLinkableElement, LinkValue); } \
	FORCEINLINE static uint32 __PPO__LinkedSequence() { return STRUCT_OFFSET(FAnimLinkableElement, LinkedSequence); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimLinkableElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h


#define FOREACH_ENUM_EANIMLINKMETHOD(op) \
	op(EAnimLinkMethod::Absolute) \
	op(EAnimLinkMethod::Relative) \
	op(EAnimLinkMethod::Proportional) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
