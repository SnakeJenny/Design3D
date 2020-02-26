// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackMove_generated_h
#error "InterpTrackMove.generated.h already included, missing '#pragma once' in InterpTrackMove.h"
#endif
#define ENGINE_InterpTrackMove_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpLookupTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpLookupTrack>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpLookupPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpLookupPoint>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackMove(); \
	friend struct Z_Construct_UClass_UInterpTrackMove_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackMove, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackMove)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackMove(); \
	friend struct Z_Construct_UClass_UInterpTrackMove_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackMove, UInterpTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackMove)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackMove(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackMove(UInterpTrackMove&&); \
	ENGINE_API UInterpTrackMove(const UInterpTrackMove&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackMove(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackMove(UInterpTrackMove&&); \
	ENGINE_API UInterpTrackMove(const UInterpTrackMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackMove); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackMove)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_99_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackMove."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h


#define FOREACH_ENUM_EINTERPTRACKMOVEROTMODE(op) \
	op(IMR_Keyframed) \
	op(IMR_LookAtGroup) \
	op(IMR_Ignore) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
