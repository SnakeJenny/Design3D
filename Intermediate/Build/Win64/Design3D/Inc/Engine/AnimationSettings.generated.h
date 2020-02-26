// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimationSettings_generated_h
#error "AnimationSettings.generated.h already included, missing '#pragma once' in AnimationSettings.h"
#endif
#define ENGINE_AnimationSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct Z_Construct_UClass_UAnimationSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct Z_Construct_UClass_UAnimationSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSettings(UAnimationSettings&&); \
	NO_API UAnimationSettings(const UAnimationSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSettings(UAnimationSettings&&); \
	NO_API UAnimationSettings(const UAnimationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
