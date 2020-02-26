// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CullDistanceVolume_generated_h
#error "CullDistanceVolume.generated.h already included, missing '#pragma once' in CullDistanceVolume.h"
#endif
#define ENGINE_CullDistanceVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCullDistanceSizePair>();

#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACullDistanceVolume(); \
	friend struct Z_Construct_UClass_ACullDistanceVolume_Statics; \
public: \
	DECLARE_CLASS(ACullDistanceVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ACullDistanceVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_INCLASS \
private: \
	static void StaticRegisterNativesACullDistanceVolume(); \
	friend struct Z_Construct_UClass_ACullDistanceVolume_Statics; \
public: \
	DECLARE_CLASS(ACullDistanceVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ACullDistanceVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ACullDistanceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACullDistanceVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACullDistanceVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACullDistanceVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ACullDistanceVolume(ACullDistanceVolume&&); \
	ENGINE_API ACullDistanceVolume(const ACullDistanceVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ACullDistanceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ACullDistanceVolume(ACullDistanceVolume&&); \
	ENGINE_API ACullDistanceVolume(const ACullDistanceVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACullDistanceVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACullDistanceVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACullDistanceVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_41_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CullDistanceVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACullDistanceVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
