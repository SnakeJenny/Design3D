// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextPropertyTestObject_generated_h
#error "TextPropertyTestObject.generated.h already included, missing '#pragma once' in TextPropertyTestObject.h"
#endif
#define ENGINE_TextPropertyTestObject_generated_h

#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextPropertyTestObject(); \
	friend struct Z_Construct_UClass_UTextPropertyTestObject_Statics; \
public: \
	DECLARE_CLASS(UTextPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextPropertyTestObject)


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTextPropertyTestObject(); \
	friend struct Z_Construct_UClass_UTextPropertyTestObject_Statics; \
public: \
	DECLARE_CLASS(UTextPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextPropertyTestObject)


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextPropertyTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextPropertyTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextPropertyTestObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextPropertyTestObject(UTextPropertyTestObject&&); \
	NO_API UTextPropertyTestObject(const UTextPropertyTestObject&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextPropertyTestObject(UTextPropertyTestObject&&); \
	NO_API UTextPropertyTestObject(const UTextPropertyTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextPropertyTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextPropertyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextPropertyTestObject)


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextPropertyTestObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextPropertyTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
