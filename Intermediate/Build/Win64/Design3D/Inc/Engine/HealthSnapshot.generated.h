// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HealthSnapshot_generated_h
#error "HealthSnapshot.generated.h already included, missing '#pragma once' in HealthSnapshot.h"
#endif
#define ENGINE_HealthSnapshot_generated_h

#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogPerformanceSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotTitle); \
		P_GET_UBOOL(Z_Param_bResetStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(Z_Param_SnapshotTitle,Z_Param_bResetStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPerformanceSnapshots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::StopPerformanceSnapshots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPerformanceSnapshots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::StartPerformanceSnapshots(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogPerformanceSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotTitle); \
		P_GET_UBOOL(Z_Param_bResetStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(Z_Param_SnapshotTitle,Z_Param_bResetStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPerformanceSnapshots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::StopPerformanceSnapshots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPerformanceSnapshots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHealthSnapshotBlueprintLibrary::StartPerformanceSnapshots(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthSnapshotBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UHealthSnapshotBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHealthSnapshotBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthSnapshotBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UHealthSnapshotBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHealthSnapshotBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthSnapshotBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSnapshotBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSnapshotBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSnapshotBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSnapshotBlueprintLibrary(UHealthSnapshotBlueprintLibrary&&); \
	NO_API UHealthSnapshotBlueprintLibrary(const UHealthSnapshotBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthSnapshotBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSnapshotBlueprintLibrary(UHealthSnapshotBlueprintLibrary&&); \
	NO_API UHealthSnapshotBlueprintLibrary(const UHealthSnapshotBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSnapshotBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSnapshotBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSnapshotBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HealthSnapshotBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHealthSnapshotBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
