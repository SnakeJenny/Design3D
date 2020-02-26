// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackSound_generated_h
#error "InterpTrackSound.generated.h already included, missing '#pragma once' in InterpTrackSound.h"
#endif
#define ENGINE_InterpTrackSound_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundTrackKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundTrackKey>();

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpTrackSound(); \
	friend struct Z_Construct_UClass_UInterpTrackSound_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackSound, UInterpTrackVectorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackSound)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUInterpTrackSound(); \
	friend struct Z_Construct_UClass_UInterpTrackSound_Statics; \
public: \
	DECLARE_CLASS(UInterpTrackSound, UInterpTrackVectorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackSound)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackSound(UInterpTrackSound&&); \
	ENGINE_API UInterpTrackSound(const UInterpTrackSound&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpTrackSound(UInterpTrackSound&&); \
	ENGINE_API UInterpTrackSound(const UInterpTrackSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackSound)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_49_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpTrackSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
