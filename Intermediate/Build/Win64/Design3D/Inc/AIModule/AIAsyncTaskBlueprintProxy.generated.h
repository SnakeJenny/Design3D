// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef AIMODULE_AIAsyncTaskBlueprintProxy_generated_h
#error "AIAsyncTaskBlueprintProxy.generated.h already included, missing '#pragma once' in AIAsyncTaskBlueprintProxy.h"
#endif
#define AIMODULE_AIAsyncTaskBlueprintProxy_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_14_DELEGATE \
struct _Script_AIModule_eventOAISimpleDelegate_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> MovementResult; \
}; \
static inline void FOAISimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OAISimpleDelegate, EPathFollowingResult::Type MovementResult) \
{ \
	_Script_AIModule_eventOAISimpleDelegate_Parms Parms; \
	Parms.MovementResult=MovementResult; \
	OAISimpleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MovementResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_MovementResult)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MovementResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_MovementResult)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAIAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAIAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAIAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy&&); \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const UAIAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy&&); \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const UAIAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_16_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
