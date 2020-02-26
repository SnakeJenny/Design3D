// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovementComponent;
struct FVector;
#ifdef ENGINE_AvoidanceManager_generated_h
#error "AvoidanceManager.generated.h already included, missing '#pragma once' in AvoidanceManager.h"
#endif
#define ENGINE_AvoidanceManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavAvoidanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavAvoidanceData>();

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNewAvoidanceUID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetObjectCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNewAvoidanceUID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetObjectCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend struct Z_Construct_UClass_UAvoidanceManager_Statics; \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend struct Z_Construct_UClass_UAvoidanceManager_Statics; \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_87_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvoidanceManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAvoidanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
