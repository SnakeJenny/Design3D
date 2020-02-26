// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ForceFeedbackEffect_generated_h
#error "ForceFeedbackEffect.generated.h already included, missing '#pragma once' in ForceFeedbackEffect.h"
#endif
#define ENGINE_ForceFeedbackEffect_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActiveForceFeedbackEffect>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FForceFeedbackParameters>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FForceFeedbackChannelDetails>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceFeedbackEffect(); \
	friend struct Z_Construct_UClass_UForceFeedbackEffect_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UForceFeedbackEffect)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackEffect(); \
	friend struct Z_Construct_UClass_UForceFeedbackEffect_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UForceFeedbackEffect)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UForceFeedbackEffect(UForceFeedbackEffect&&); \
	ENGINE_API UForceFeedbackEffect(const UForceFeedbackEffect&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UForceFeedbackEffect(UForceFeedbackEffect&&); \
	ENGINE_API UForceFeedbackEffect(const UForceFeedbackEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackEffect)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_101_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_104_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ForceFeedbackEffect."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UForceFeedbackEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
