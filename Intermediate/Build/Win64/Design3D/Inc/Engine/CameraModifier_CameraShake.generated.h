// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraModifier_CameraShake_generated_h
#error "CameraModifier_CameraShake.generated.h already included, missing '#pragma once' in CameraModifier_CameraShake.h"
#endif
#define ENGINE_CameraModifier_CameraShake_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPooledCameraShakes>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraModifier_CameraShake(); \
	friend struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier_CameraShake, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier_CameraShake) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUCameraModifier_CameraShake(); \
	friend struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier_CameraShake, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier_CameraShake) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier_CameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier_CameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier_CameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier_CameraShake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier_CameraShake(UCameraModifier_CameraShake&&); \
	NO_API UCameraModifier_CameraShake(const UCameraModifier_CameraShake&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier_CameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier_CameraShake(UCameraModifier_CameraShake&&); \
	NO_API UCameraModifier_CameraShake(const UCameraModifier_CameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier_CameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier_CameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier_CameraShake)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SplitScreenShakeScale() { return STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_32_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraModifier_CameraShake."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraModifier_CameraShake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
