// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_FixedFrameRateCustomTimeStep_generated_h
#error "FixedFrameRateCustomTimeStep.generated.h already included, missing '#pragma once' in FixedFrameRateCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_FixedFrameRateCustomTimeStep_generated_h

#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFixedFrameRateCustomTimeStep(); \
	friend struct Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UFixedFrameRateCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UFixedFrameRateCustomTimeStep)


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFixedFrameRateCustomTimeStep(); \
	friend struct Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UFixedFrameRateCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UFixedFrameRateCustomTimeStep)


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFixedFrameRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFixedFrameRateCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFixedFrameRateCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFixedFrameRateCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFixedFrameRateCustomTimeStep(UFixedFrameRateCustomTimeStep&&); \
	NO_API UFixedFrameRateCustomTimeStep(const UFixedFrameRateCustomTimeStep&); \
public:


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFixedFrameRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFixedFrameRateCustomTimeStep(UFixedFrameRateCustomTimeStep&&); \
	NO_API UFixedFrameRateCustomTimeStep(const UFixedFrameRateCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFixedFrameRateCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFixedFrameRateCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFixedFrameRateCustomTimeStep)


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FixedFrameRate() { return STRUCT_OFFSET(UFixedFrameRateCustomTimeStep, FixedFrameRate); }


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_16_PROLOG
#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_INCLASS \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FixedFrameRateCustomTimeStep."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UFixedFrameRateCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
