// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BrushBuilder_generated_h
#error "BrushBuilder.generated.h already included, missing '#pragma once' in BrushBuilder.h"
#endif
#define ENGINE_BrushBuilder_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuilderPoly_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBuilderPoly>();

#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrushBuilder(); \
	friend struct Z_Construct_UClass_UBrushBuilder_Statics; \
public: \
	DECLARE_CLASS(UBrushBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBrushBuilder)


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUBrushBuilder(); \
	friend struct Z_Construct_UClass_UBrushBuilder_Statics; \
public: \
	DECLARE_CLASS(UBrushBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBrushBuilder)


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBrushBuilder(UBrushBuilder&&); \
	ENGINE_API UBrushBuilder(const UBrushBuilder&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBrushBuilder(UBrushBuilder&&); \
	ENGINE_API UBrushBuilder(const UBrushBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushBuilder)


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Vertices() { return STRUCT_OFFSET(UBrushBuilder, Vertices); } \
	FORCEINLINE static uint32 __PPO__Polys() { return STRUCT_OFFSET(UBrushBuilder, Polys); } \
	FORCEINLINE static uint32 __PPO__Layer() { return STRUCT_OFFSET(UBrushBuilder, Layer); }


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_51_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BrushBuilder."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBrushBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
