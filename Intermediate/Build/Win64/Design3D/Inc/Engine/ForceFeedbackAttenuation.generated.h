// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ForceFeedbackAttenuation_generated_h
#error "ForceFeedbackAttenuation.generated.h already included, missing '#pragma once' in ForceFeedbackAttenuation.h"
#endif
#define ENGINE_ForceFeedbackAttenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FForceFeedbackAttenuationSettings>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceFeedbackAttenuation(); \
	friend struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UForceFeedbackAttenuation)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackAttenuation(); \
	friend struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UForceFeedbackAttenuation)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UForceFeedbackAttenuation(UForceFeedbackAttenuation&&); \
	ENGINE_API UForceFeedbackAttenuation(const UForceFeedbackAttenuation&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UForceFeedbackAttenuation(UForceFeedbackAttenuation&&); \
	ENGINE_API UForceFeedbackAttenuation(const UForceFeedbackAttenuation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackAttenuation)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UForceFeedbackAttenuation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
