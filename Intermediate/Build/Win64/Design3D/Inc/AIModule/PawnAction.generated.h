// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPawnAction;
#ifdef AIMODULE_PawnAction_generated_h
#error "PawnAction.generated.h already included, missing '#pragma once' in PawnAction.h"
#endif
#define AIMODULE_PawnAction_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinish) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WithResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Finish(EPawnActionResult::Type(Z_Param_WithResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateActionInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActionClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPawnAction**)Z_Param__Result=UPawnAction::CreateActionInstance(Z_Param_WorldContextObject,Z_Param_ActionClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAIRequestPriority::Type>*)Z_Param__Result=P_THIS->GetActionPriority(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinish) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WithResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Finish(EPawnActionResult::Type(Z_Param_WithResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateActionInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActionClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPawnAction**)Z_Param__Result=UPawnAction::CreateActionInstance(Z_Param_WorldContextObject,Z_Param_ActionClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAIRequestPriority::Type>*)Z_Param__Result=P_THIS->GetActionPriority(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnAction(); \
	friend struct Z_Construct_UClass_UPawnAction_Statics; \
public: \
	DECLARE_CLASS(UPawnAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUPawnAction(); \
	friend struct Z_Construct_UClass_UPawnAction_Statics; \
public: \
	DECLARE_CLASS(UPawnAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction(UPawnAction&&); \
	NO_API UPawnAction(const UPawnAction&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction(UPawnAction&&); \
	NO_API UPawnAction(const UPawnAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChildAction() { return STRUCT_OFFSET(UPawnAction, ChildAction); } \
	FORCEINLINE static uint32 __PPO__ParentAction() { return STRUCT_OFFSET(UPawnAction, ParentAction); } \
	FORCEINLINE static uint32 __PPO__OwnerComponent() { return STRUCT_OFFSET(UPawnAction, OwnerComponent); } \
	FORCEINLINE static uint32 __PPO__Instigator() { return STRUCT_OFFSET(UPawnAction, Instigator); } \
	FORCEINLINE static uint32 __PPO__BrainComp() { return STRUCT_OFFSET(UPawnAction, BrainComp); }


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_46_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h


#define FOREACH_ENUM_EPAWNACTIONFAILHANDLING(op) \
	op(EPawnActionFailHandling::RequireSuccess) \
	op(EPawnActionFailHandling::IgnoreFailure) 
#define FOREACH_ENUM_EPAWNSUBACTIONTRIGGERINGPOLICY(op) \
	op(EPawnSubActionTriggeringPolicy::CopyBeforeTriggering) \
	op(EPawnSubActionTriggeringPolicy::ReuseInstances) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
