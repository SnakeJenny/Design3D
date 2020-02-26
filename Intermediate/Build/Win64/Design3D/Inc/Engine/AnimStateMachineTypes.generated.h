// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimStateMachineTypes_generated_h
#error "AnimStateMachineTypes.generated.h already included, missing '#pragma once' in AnimStateMachineTypes.h"
#endif
#define ENGINE_AnimStateMachineTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationStateMachine>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationState>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedStateExitTransition>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionBetweenStates>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationState>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationStateBase>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionRule>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_316_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_319_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateMachineTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimStateMachineTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h


#define FOREACH_ENUM_ETRANSITIONLOGICTYPE(op) \
	op(ETransitionLogicType::TLT_StandardBlend) \
	op(ETransitionLogicType::TLT_Custom) 
#define FOREACH_ENUM_ETRANSITIONBLENDMODE(op) \
	op(ETransitionBlendMode::TBM_Linear) \
	op(ETransitionBlendMode::TBM_Cubic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
