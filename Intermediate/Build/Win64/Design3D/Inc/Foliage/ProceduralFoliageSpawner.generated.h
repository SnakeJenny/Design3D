// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageSpawner_generated_h
#error "ProceduralFoliageSpawner.generated.h already included, missing '#pragma once' in ProceduralFoliageSpawner.h"
#endif
#define FOLIAGE_ProceduralFoliageSpawner_generated_h

#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSteps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Simulate(Z_Param_NumSteps); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSteps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Simulate(Z_Param_NumSteps); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UProceduralFoliageSpawner, NO_API)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralFoliageSpawner(); \
	friend struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawner) \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageSpawner(); \
	friend struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawner) \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageSpawner(UProceduralFoliageSpawner&&); \
	NO_API UProceduralFoliageSpawner(const UProceduralFoliageSpawner&); \
public:


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageSpawner(UProceduralFoliageSpawner&&); \
	NO_API UProceduralFoliageSpawner(const UProceduralFoliageSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawner)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FoliageTypes() { return STRUCT_OFFSET(UProceduralFoliageSpawner, FoliageTypes); } \
	FORCEINLINE static uint32 __PPO__bNeedsSimulation() { return STRUCT_OFFSET(UProceduralFoliageSpawner, bNeedsSimulation); }


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_16_PROLOG
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralFoliageSpawner."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UProceduralFoliageSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
