// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageComponent_generated_h
#error "ProceduralFoliageComponent.generated.h already included, missing '#pragma once' in ProceduralFoliageComponent.h"
#endif
#define FOLIAGE_ProceduralFoliageComponent_generated_h

#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralFoliageComponent(); \
	friend struct Z_Construct_UClass_UProceduralFoliageComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageComponent)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageComponent(); \
	friend struct Z_Construct_UClass_UProceduralFoliageComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageComponent)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageComponent(UProceduralFoliageComponent&&); \
	NO_API UProceduralFoliageComponent(const UProceduralFoliageComponent&); \
public:


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageComponent(UProceduralFoliageComponent&&); \
	NO_API UProceduralFoliageComponent(const UProceduralFoliageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageComponent)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawningVolume() { return STRUCT_OFFSET(UProceduralFoliageComponent, SpawningVolume); } \
	FORCEINLINE static uint32 __PPO__ProceduralGuid() { return STRUCT_OFFSET(UProceduralFoliageComponent, ProceduralGuid); }


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_40_PROLOG
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_INCLASS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralFoliageComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UProceduralFoliageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
