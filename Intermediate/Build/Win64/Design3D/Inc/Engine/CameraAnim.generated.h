// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraAnim_generated_h
#error "CameraAnim.generated.h already included, missing '#pragma once' in CameraAnim.h"
#endif
#define ENGINE_CameraAnim_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAnim(); \
	friend struct Z_Construct_UClass_UCameraAnim_Statics; \
public: \
	DECLARE_CLASS(UCameraAnim, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraAnim)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAnim(); \
	friend struct Z_Construct_UClass_UCameraAnim_Statics; \
public: \
	DECLARE_CLASS(UCameraAnim, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraAnim)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCameraAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCameraAnim(UCameraAnim&&); \
	ENGINE_API UCameraAnim(const UCameraAnim&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCameraAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCameraAnim(UCameraAnim&&); \
	ENGINE_API UCameraAnim(const UCameraAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnim)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraAnim."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraAnim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
