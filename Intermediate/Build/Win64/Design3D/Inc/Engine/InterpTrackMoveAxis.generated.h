// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackMoveAxis_generated_h
#error "InterpTrackMoveAxis.generated.h already included, missing '#pragma once' in InterpTrackMoveAxis.h"
#endif
#define ENGINE_InterpTrackMoveAxis_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackMoveAxis(); \
	friend struct Z_Construct_UClass_UInterpTrackMoveAxis_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackMoveAxis, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackMoveAxis)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackMoveAxis(); \
	friend struct Z_Construct_UClass_UInterpTrackMoveAxis_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackMoveAxis, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackMoveAxis)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackMoveAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackMoveAxis) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackMoveAxis); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackMoveAxis); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackMoveAxis(UInterpTrackMoveAxis&&); \
	ENGINE_API UInterpTrackMoveAxis(const UInterpTrackMoveAxis&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackMoveAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackMoveAxis(UInterpTrackMoveAxis&&); \
	ENGINE_API UInterpTrackMoveAxis(const UInterpTrackMoveAxis&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackMoveAxis); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackMoveAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackMoveAxis)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackMoveAxis."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackMoveAxis>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h


#define FOREACH_ENUM_EINTERPMOVEAXIS(op) \
	op(AXIS_TranslationX) \
	op(AXIS_TranslationY) \
	op(AXIS_TranslationZ) \
	op(AXIS_RotationX) \
	op(AXIS_RotationY) \
	op(AXIS_RotationZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
