// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineCustomTimeStep_generated_h
#error "EngineCustomTimeStep.generated.h already included, missing '#pragma once' in EngineCustomTimeStep.h"
#endif
#define ENGINE_EngineCustomTimeStep_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UEngineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UEngineCustomTimeStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineCustomTimeStep)


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUEngineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UEngineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UEngineCustomTimeStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineCustomTimeStep)


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineCustomTimeStep(UEngineCustomTimeStep&&); \
	NO_API UEngineCustomTimeStep(const UEngineCustomTimeStep&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineCustomTimeStep(UEngineCustomTimeStep&&); \
	NO_API UEngineCustomTimeStep(const UEngineCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineCustomTimeStep)


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_34_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h


#define FOREACH_ENUM_ECUSTOMTIMESTEPSYNCHRONIZATIONSTATE(op) \
	op(ECustomTimeStepSynchronizationState::Closed) \
	op(ECustomTimeStepSynchronizationState::Error) \
	op(ECustomTimeStepSynchronizationState::Synchronized) \
	op(ECustomTimeStepSynchronizationState::Synchronizing) 

enum class ECustomTimeStepSynchronizationState;
template<> ENGINE_API UEnum* StaticEnum<ECustomTimeStepSynchronizationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
