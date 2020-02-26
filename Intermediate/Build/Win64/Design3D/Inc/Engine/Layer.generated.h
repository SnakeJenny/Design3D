// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Layer_generated_h
#error "Layer.generated.h already included, missing '#pragma once' in Layer.h"
#endif
#define ENGINE_Layer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayerActorStats_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLayerActorStats>();

#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayer(); \
	friend struct Z_Construct_UClass_ULayer_Statics; \
public: \
	DECLARE_CLASS(ULayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULayer)


#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesULayer(); \
	friend struct Z_Construct_UClass_ULayer_Statics; \
public: \
	DECLARE_CLASS(ULayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULayer)


#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULayer(ULayer&&); \
	ENGINE_API ULayer(const ULayer&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULayer(ULayer&&); \
	ENGINE_API ULayer(const ULayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayer)


#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Layer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Layers_Layer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
