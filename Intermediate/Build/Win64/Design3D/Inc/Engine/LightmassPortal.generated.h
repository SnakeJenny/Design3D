// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmassPortal_generated_h
#error "LightmassPortal.generated.h already included, missing '#pragma once' in LightmassPortal.h"
#endif
#define ENGINE_LightmassPortal_generated_h

#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightmassPortal(); \
	friend struct Z_Construct_UClass_ALightmassPortal_Statics; \
public: \
	DECLARE_CLASS(ALightmassPortal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightmassPortal)


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALightmassPortal(); \
	friend struct Z_Construct_UClass_ALightmassPortal_Statics; \
public: \
	DECLARE_CLASS(ALightmassPortal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightmassPortal)


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ALightmassPortal(ALightmassPortal&&); \
	ENGINE_API ALightmassPortal(const ALightmassPortal&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ALightmassPortal(ALightmassPortal&&); \
	ENGINE_API ALightmassPortal(const ALightmassPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassPortal)


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PortalComponent() { return STRUCT_OFFSET(ALightmassPortal, PortalComponent); }


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightmassPortal."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALightmassPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
