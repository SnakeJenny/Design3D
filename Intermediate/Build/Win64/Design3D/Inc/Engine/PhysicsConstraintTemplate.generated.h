// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsConstraintTemplate_generated_h
#error "PhysicsConstraintTemplate.generated.h already included, missing '#pragma once' in PhysicsConstraintTemplate.h"
#endif
#define ENGINE_PhysicsConstraintTemplate_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicsConstraintProfileHandle>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintTemplate, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintTemplate(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintTemplate_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintTemplate) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintTemplate(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintTemplate_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintTemplate) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsConstraintTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsConstraintTemplate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintTemplate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsConstraintTemplate(UPhysicsConstraintTemplate&&); \
	ENGINE_API UPhysicsConstraintTemplate(const UPhysicsConstraintTemplate&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsConstraintTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsConstraintTemplate(UPhysicsConstraintTemplate&&); \
	ENGINE_API UPhysicsConstraintTemplate(const UPhysicsConstraintTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsConstraintTemplate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintTemplate)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultProfile() { return STRUCT_OFFSET(UPhysicsConstraintTemplate, DefaultProfile); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsConstraintTemplate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsConstraintTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
