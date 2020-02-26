// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SubUVAnimation_generated_h
#error "SubUVAnimation.generated.h already included, missing '#pragma once' in SubUVAnimation.h"
#endif
#define ENGINE_SubUVAnimation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USubUVAnimation, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubUVAnimation(); \
	friend struct Z_Construct_UClass_USubUVAnimation_Statics; \
public: \
	DECLARE_CLASS(USubUVAnimation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubUVAnimation) \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUSubUVAnimation(); \
	friend struct Z_Construct_UClass_USubUVAnimation_Statics; \
public: \
	DECLARE_CLASS(USubUVAnimation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubUVAnimation) \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubUVAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubUVAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubUVAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubUVAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USubUVAnimation(USubUVAnimation&&); \
	ENGINE_API USubUVAnimation(const USubUVAnimation&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubUVAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USubUVAnimation(USubUVAnimation&&); \
	ENGINE_API USubUVAnimation(const USubUVAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubUVAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubUVAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubUVAnimation)


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_111_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_114_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubUVAnimation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubUVAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h


#define FOREACH_ENUM_EOPACITYSOURCEMODE(op) \
	op(OSM_Alpha) \
	op(OSM_ColorBrightness) \
	op(OSM_RedChannel) \
	op(OSM_GreenChannel) \
	op(OSM_BlueChannel) 
#define FOREACH_ENUM_ESUBUVBOUNDINGVERTEXCOUNT(op) \
	op(BVC_FourVertices) \
	op(BVC_EightVertices) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
