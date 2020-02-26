// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Note_generated_h
#error "Note.generated.h already included, missing '#pragma once' in Note.h"
#endif
#define ENGINE_Note_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANote(); \
	friend struct Z_Construct_UClass_ANote_Statics; \
public: \
	DECLARE_CLASS(ANote, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANote)


#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_INCLASS \
private: \
	static void StaticRegisterNativesANote(); \
	friend struct Z_Construct_UClass_ANote_Statics; \
public: \
	DECLARE_CLASS(ANote, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANote)


#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANote(ANote&&); \
	ENGINE_API ANote(const ANote&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANote(ANote&&); \
	ENGINE_API ANote(const ANote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANote)


#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Note_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Note."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ANote>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Note_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
