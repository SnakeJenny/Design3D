// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RadialForceComponent_generated_h
#error "RadialForceComponent.generated.h already included, missing '#pragma once' in RadialForceComponent.h"
#endif
#define ENGINE_RadialForceComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveObjectTypeToAffect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddObjectTypeToAffect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireImpulse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireImpulse(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveObjectTypeToAffect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddObjectTypeToAffect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireImpulse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireImpulse(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadialForceComponent(); \
	friend struct Z_Construct_UClass_URadialForceComponent_Statics; \
public: \
	DECLARE_CLASS(URadialForceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URadialForceComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURadialForceComponent(); \
	friend struct Z_Construct_UClass_URadialForceComponent_Statics; \
public: \
	DECLARE_CLASS(URadialForceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URadialForceComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialForceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialForceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialForceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialForceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialForceComponent(URadialForceComponent&&); \
	NO_API URadialForceComponent(const URadialForceComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialForceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialForceComponent(URadialForceComponent&&); \
	NO_API URadialForceComponent(const URadialForceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialForceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialForceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialForceComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectTypesToAffect() { return STRUCT_OFFSET(URadialForceComponent, ObjectTypesToAffect); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RadialForceComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URadialForceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
