// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RigidBodyBase_generated_h
#error "RigidBodyBase.generated.h already included, missing '#pragma once' in RigidBodyBase.h"
#endif
#define ENGINE_RigidBodyBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARigidBodyBase(); \
	friend struct Z_Construct_UClass_ARigidBodyBase_Statics; \
public: \
	DECLARE_CLASS(ARigidBodyBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARigidBodyBase)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARigidBodyBase(); \
	friend struct Z_Construct_UClass_ARigidBodyBase_Statics; \
public: \
	DECLARE_CLASS(ARigidBodyBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARigidBodyBase)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARigidBodyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARigidBodyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARigidBodyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARigidBodyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARigidBodyBase(ARigidBodyBase&&); \
	ENGINE_API ARigidBodyBase(const ARigidBodyBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARigidBodyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARigidBodyBase(ARigidBodyBase&&); \
	ENGINE_API ARigidBodyBase(const ARigidBodyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARigidBodyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARigidBodyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARigidBodyBase)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RigidBodyBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ARigidBodyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
