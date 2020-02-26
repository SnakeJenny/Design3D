// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackDirector_generated_h
#error "InterpTrackDirector.generated.h already included, missing '#pragma once' in InterpTrackDirector.h"
#endif
#define ENGINE_InterpTrackDirector_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDirectorTrackCut_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDirectorTrackCut>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackDirector(); \
	friend struct Z_Construct_UClass_UInterpTrackDirector_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackDirector, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackDirector)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackDirector(); \
	friend struct Z_Construct_UClass_UInterpTrackDirector_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackDirector, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackDirector)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackDirector(UInterpTrackDirector&&); \
	ENGINE_API UInterpTrackDirector(const UInterpTrackDirector&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackDirector(UInterpTrackDirector&&); \
	ENGINE_API UInterpTrackDirector(const UInterpTrackDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackDirector)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_52_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackDirector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
