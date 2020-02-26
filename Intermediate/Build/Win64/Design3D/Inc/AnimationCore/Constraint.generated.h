// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_Constraint_generated_h
#error "Constraint.generated.h already included, missing '#pragma once' in Constraint.h"
#endif
#define ANIMATIONCORE_Constraint_generated_h

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_653_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintData>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_476_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescriptor>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_431_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FAimConstraintDescription>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformConstraintDescription>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescriptionEx>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformConstraint>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintOffset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintOffset>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescription>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformFilter>();

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FFilterOptionPerAxis>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimationCore_Public_Constraint_h


#define FOREACH_ENUM_ETRANSFORMCONSTRAINTTYPE(op) \
	op(ETransformConstraintType::Translation) \
	op(ETransformConstraintType::Rotation) \
	op(ETransformConstraintType::Scale) \
	op(ETransformConstraintType::Parent) 

enum class ETransformConstraintType : uint8;
template<> ANIMATIONCORE_API UEnum* StaticEnum<ETransformConstraintType>();

#define FOREACH_ENUM_ECONSTRAINTTYPE(op) \
	op(EConstraintType::Transform) \
	op(EConstraintType::Aim) 

enum class EConstraintType : uint8;
template<> ANIMATIONCORE_API UEnum* StaticEnum<EConstraintType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
