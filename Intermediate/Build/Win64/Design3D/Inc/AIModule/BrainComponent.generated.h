// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BrainComponent_generated_h
#error "BrainComponent.generated.h already included, missing '#pragma once' in BrainComponent.h"
#endif
#define AIMODULE_BrainComponent_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLogic) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopLogic(Z_Param_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartLogic(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopLogic) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopLogic(Z_Param_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartLogic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartLogic(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrainComponent(); \
	friend struct Z_Construct_UClass_UBrainComponent_Statics; \
public: \
	DECLARE_CLASS(UBrainComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBrainComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBrainComponent*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUBrainComponent(); \
	friend struct Z_Construct_UClass_UBrainComponent_Statics; \
public: \
	DECLARE_CLASS(UBrainComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBrainComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBrainComponent*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrainComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrainComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrainComponent(UBrainComponent&&); \
	NO_API UBrainComponent(const UBrainComponent&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrainComponent(UBrainComponent&&); \
	NO_API UBrainComponent(const UBrainComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrainComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrainComponent)


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComp() { return STRUCT_OFFSET(UBrainComponent, BlackboardComp); } \
	FORCEINLINE static uint32 __PPO__AIOwner() { return STRUCT_OFFSET(UBrainComponent, AIOwner); }


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_116_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_119_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BrainComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBrainComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BrainComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
