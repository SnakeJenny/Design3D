// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackToggle_generated_h
#error "InterpTrackToggle.generated.h already included, missing '#pragma once' in InterpTrackToggle.h"
#endif
#define ENGINE_InterpTrackToggle_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToggleTrackKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FToggleTrackKey>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackToggle(); \
	friend struct Z_Construct_UClass_UInterpTrackToggle_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackToggle, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackToggle)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackToggle(); \
	friend struct Z_Construct_UClass_UInterpTrackToggle_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackToggle, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackToggle)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackToggle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackToggle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackToggle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackToggle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackToggle(UInterpTrackToggle&&); \
	ENGINE_API UInterpTrackToggle(const UInterpTrackToggle&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackToggle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackToggle(UInterpTrackToggle&&); \
	ENGINE_API UInterpTrackToggle(const UInterpTrackToggle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackToggle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackToggle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackToggle)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_53_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackToggle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackToggle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h


#define FOREACH_ENUM_ETRACKTOGGLEACTION(op) \
	op(ETTA_Off) \
	op(ETTA_On) \
	op(ETTA_Toggle) \
	op(ETTA_Trigger) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
