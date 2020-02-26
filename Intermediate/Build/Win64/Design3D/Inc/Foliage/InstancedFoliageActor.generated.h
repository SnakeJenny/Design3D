// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_InstancedFoliageActor_generated_h
#error "InstancedFoliageActor.generated.h already included, missing '#pragma once' in InstancedFoliageActor.h"
#endif
#define FOLIAGE_InstancedFoliageActor_generated_h

#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedFoliageActor, FOLIAGE_API)


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInstancedFoliageActor(); \
	friend struct Z_Construct_UClass_AInstancedFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInstancedFoliageActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInstancedFoliageActor) \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAInstancedFoliageActor(); \
	friend struct Z_Construct_UClass_AInstancedFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInstancedFoliageActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInstancedFoliageActor) \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInstancedFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedFoliageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInstancedFoliageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedFoliageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API AInstancedFoliageActor(AInstancedFoliageActor&&); \
	FOLIAGE_API AInstancedFoliageActor(const AInstancedFoliageActor&); \
public:


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInstancedFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API AInstancedFoliageActor(AInstancedFoliageActor&&); \
	FOLIAGE_API AInstancedFoliageActor(const AInstancedFoliageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInstancedFoliageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedFoliageActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedFoliageActor)


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_25_PROLOG
#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_INCLASS \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InstancedFoliageActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AInstancedFoliageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
