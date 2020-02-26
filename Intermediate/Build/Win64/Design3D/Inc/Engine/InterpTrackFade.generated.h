// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackFade_generated_h
#error "InterpTrackFade.generated.h already included, missing '#pragma once' in InterpTrackFade.h"
#endif
#define ENGINE_InterpTrackFade_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackFade(); \
	friend struct Z_Construct_UClass_UInterpTrackFade_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackFade, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpTrackFade)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackFade(); \
	friend struct Z_Construct_UClass_UInterpTrackFade_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackFade, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpTrackFade)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackFade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpTrackFade(UInterpTrackFade&&); \
	NO_API UInterpTrackFade(const UInterpTrackFade&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpTrackFade(UInterpTrackFade&&); \
	NO_API UInterpTrackFade(const UInterpTrackFade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackFade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFade)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackFade."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackFade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
