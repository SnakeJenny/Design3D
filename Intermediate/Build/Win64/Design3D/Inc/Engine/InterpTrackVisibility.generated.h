// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackVisibility_generated_h
#error "InterpTrackVisibility.generated.h already included, missing '#pragma once' in InterpTrackVisibility.h"
#endif
#define ENGINE_InterpTrackVisibility_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVisibilityTrackKey>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackVisibility(); \
	friend struct Z_Construct_UClass_UInterpTrackVisibility_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackVisibility, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackVisibility)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackVisibility(); \
	friend struct Z_Construct_UClass_UInterpTrackVisibility_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackVisibility, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackVisibility)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackVisibility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackVisibility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackVisibility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackVisibility(UInterpTrackVisibility&&); \
	ENGINE_API UInterpTrackVisibility(const UInterpTrackVisibility&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackVisibility(UInterpTrackVisibility&&); \
	ENGINE_API UInterpTrackVisibility(const UInterpTrackVisibility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackVisibility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackVisibility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackVisibility)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_73_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackVisibility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackVisibility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h


#define FOREACH_ENUM_EVISIBILITYTRACKCONDITION(op) \
	op(EVTC_Always) \
	op(EVTC_GoreEnabled) \
	op(EVTC_GoreDisabled) 
#define FOREACH_ENUM_EVISIBILITYTRACKACTION(op) \
	op(EVTA_Hide) \
	op(EVTA_Show) \
	op(EVTA_Toggle) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
