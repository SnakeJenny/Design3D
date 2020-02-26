// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeBase_generated_h
#error "AnimNodeBase.generated.h already included, missing '#pragma once' in AnimNodeBase.h"
#endif
#define ENGINE_AnimNodeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_611_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Base_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNode_Base>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_560_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExposedValueHandler>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_479_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExposedValueCopyRecord>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_444_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentSpacePoseLink>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseLink>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_369_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLinkBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseLinkBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h


#define FOREACH_ENUM_ECOPYTYPE(op) \
	op(ECopyType::MemCopy) \
	op(ECopyType::BoolProperty) \
	op(ECopyType::StructProperty) \
	op(ECopyType::ObjectProperty) 

enum class ECopyType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ECopyType>();

#define FOREACH_ENUM_EPOSTCOPYOPERATION(op) \
	op(EPostCopyOperation::None) \
	op(EPostCopyOperation::LogicalNegateBool) 

enum class EPostCopyOperation : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPostCopyOperation>();

#define FOREACH_ENUM_EPINHIDINGMODE(op) \
	op(EPinHidingMode::NeverAsPin) \
	op(EPinHidingMode::PinHiddenByDefault) \
	op(EPinHidingMode::PinShownByDefault) \
	op(EPinHidingMode::AlwaysAsPin) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
