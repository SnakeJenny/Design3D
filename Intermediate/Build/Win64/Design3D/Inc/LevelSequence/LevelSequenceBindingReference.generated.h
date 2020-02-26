// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_LevelSequenceBindingReference_generated_h
#error "LevelSequenceBindingReference.generated.h already included, missing '#pragma once' in LevelSequenceBindingReference.h"
#endif
#define LEVELSEQUENCE_LevelSequenceBindingReference_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BindingIdToReferences() { return STRUCT_OFFSET(FLevelSequenceBindingReferences, BindingIdToReferences); } \
	FORCEINLINE static uint32 __PPO__AnimSequenceInstances() { return STRUCT_OFFSET(FLevelSequenceBindingReferences, AnimSequenceInstances); }


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceBindingReferences>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceBindingReferenceArray>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PackageName_DEPRECATED() { return STRUCT_OFFSET(FLevelSequenceBindingReference, PackageName_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ExternalObjectPath() { return STRUCT_OFFSET(FLevelSequenceBindingReference, ExternalObjectPath); } \
	FORCEINLINE static uint32 __PPO__ObjectPath() { return STRUCT_OFFSET(FLevelSequenceBindingReference, ObjectPath); }


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceBindingReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
