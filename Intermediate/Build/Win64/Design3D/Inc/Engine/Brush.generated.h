// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Brush_generated_h
#error "Brush.generated.h already included, missing '#pragma once' in Brush.h"
#endif
#define ENGINE_Brush_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeomSelection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGeomSelection>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrush(); \
	friend struct Z_Construct_UClass_ABrush_Statics; \
public: \
	DECLARE_CLASS(ABrush, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ABrush)


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_INCLASS \
private: \
	static void StaticRegisterNativesABrush(); \
	friend struct Z_Construct_UClass_ABrush_Statics; \
public: \
	DECLARE_CLASS(ABrush, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ABrush)


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrush(ABrush&&); \
	NO_API ABrush(const ABrush&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrush(ABrush&&); \
	NO_API ABrush(const ABrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrush); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrush)


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BrushComponent() { return STRUCT_OFFSET(ABrush, BrushComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Brush."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Brush_h


#define FOREACH_ENUM_EBRUSHTYPE(op) \
	op(Brush_Default) \
	op(Brush_Add) \
	op(Brush_Subtract) 
#define FOREACH_ENUM_ECSGOPER(op) \
	op(CSG_Active) \
	op(CSG_Add) \
	op(CSG_Subtract) \
	op(CSG_Intersect) \
	op(CSG_Deintersect) \
	op(CSG_None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
