// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AtmosphericFog_generated_h
#error "AtmosphericFog.generated.h already included, missing '#pragma once' in AtmosphericFog.h"
#endif
#define ENGINE_AtmosphericFog_generated_h

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtmosphericFog(); \
	friend struct Z_Construct_UClass_AAtmosphericFog_Statics; \
public: \
	DECLARE_CLASS(AAtmosphericFog, AInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AAtmosphericFog)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAtmosphericFog(); \
	friend struct Z_Construct_UClass_AAtmosphericFog_Statics; \
public: \
	DECLARE_CLASS(AAtmosphericFog, AInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AAtmosphericFog)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AAtmosphericFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtmosphericFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AAtmosphericFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtmosphericFog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AAtmosphericFog(AAtmosphericFog&&); \
	ENGINE_API AAtmosphericFog(const AAtmosphericFog&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AAtmosphericFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AAtmosphericFog(AAtmosphericFog&&); \
	ENGINE_API AAtmosphericFog(const AAtmosphericFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AAtmosphericFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtmosphericFog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtmosphericFog)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AtmosphericFogComponent() { return STRUCT_OFFSET(AAtmosphericFog, AtmosphericFogComponent); }


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtmosphericFog."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAtmosphericFog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
