// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrack_generated_h
#error "InterpTrack.generated.h already included, missing '#pragma once' in InterpTrack.h"
#endif
#define ENGINE_InterpTrack_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubTrackGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSubTrackGroup>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSupportedSubTrackInfo>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrack(); \
	friend struct Z_Construct_UClass_UInterpTrack_Statics; \
public: \
	DECLARE_CLASS(UInterpTrack, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrack)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrack(); \
	friend struct Z_Construct_UClass_UInterpTrack_Statics; \
public: \
	DECLARE_CLASS(UInterpTrack, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrack)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrack(UInterpTrack&&); \
	ENGINE_API UInterpTrack(const UInterpTrack&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrack(UInterpTrack&&); \
	ENGINE_API UInterpTrack(const UInterpTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrack)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_102_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h_105_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrack_h


#define FOREACH_ENUM_ETRACKACTIVECONDITION(op) \
	op(ETAC_Always) \
	op(ETAC_GoreEnabled) \
	op(ETAC_GoreDisabled) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
