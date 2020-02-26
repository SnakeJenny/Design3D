// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageTile_generated_h
#error "ProceduralFoliageTile.generated.h already included, missing '#pragma once' in ProceduralFoliageTile.h"
#endif
#define FOLIAGE_ProceduralFoliageTile_generated_h

#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralFoliageTile(); \
	friend struct Z_Construct_UClass_UProceduralFoliageTile_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageTile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageTile)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageTile(); \
	friend struct Z_Construct_UClass_UProceduralFoliageTile_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageTile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageTile)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageTile(UProceduralFoliageTile&&); \
	NO_API UProceduralFoliageTile(const UProceduralFoliageTile&); \
public:


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageTile(UProceduralFoliageTile&&); \
	NO_API UProceduralFoliageTile(const UProceduralFoliageTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageTile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageTile)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FoliageSpawner() { return STRUCT_OFFSET(UProceduralFoliageTile, FoliageSpawner); } \
	FORCEINLINE static uint32 __PPO__InstancesArray() { return STRUCT_OFFSET(UProceduralFoliageTile, InstancesArray); }


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_29_PROLOG
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralFoliageTile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UProceduralFoliageTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
