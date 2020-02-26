// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_TimeSynchronizationSource_generated_h
#error "TimeSynchronizationSource.generated.h already included, missing '#pragma once' in TimeSynchronizationSource.h"
#endif
#define TIMEMANAGEMENT_TimeSynchronizationSource_generated_h

#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_RPC_WRAPPERS
#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeSynchronizationSource(); \
	friend struct Z_Construct_UClass_UTimeSynchronizationSource_Statics; \
public: \
	DECLARE_CLASS(UTimeSynchronizationSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeSynchronizationSource)


#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTimeSynchronizationSource(); \
	friend struct Z_Construct_UClass_UTimeSynchronizationSource_Statics; \
public: \
	DECLARE_CLASS(UTimeSynchronizationSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeSynchronizationSource)


#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSynchronizationSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeSynchronizationSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizationSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeSynchronizationSource(UTimeSynchronizationSource&&); \
	NO_API UTimeSynchronizationSource(const UTimeSynchronizationSource&); \
public:


#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeSynchronizationSource(UTimeSynchronizationSource&&); \
	NO_API UTimeSynchronizationSource(const UTimeSynchronizationSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeSynchronizationSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizationSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSynchronizationSource)


#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_52_PROLOG
#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_RPC_WRAPPERS \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimeSynchronizationSource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UTimeSynchronizationSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
