// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PropertyEditorTestObject_generated_h
#error "PropertyEditorTestObject.generated.h already included, missing '#pragma once' in PropertyEditorTestObject.h"
#endif
#define UNREALED_PropertyEditorTestObject_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPropertyEditorTestBasicStruct>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPropertyEditorTestSubStruct>();

#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyEditorTestObject(); \
	friend struct Z_Construct_UClass_UPropertyEditorTestObject_Statics; \
public: \
	DECLARE_CLASS(UPropertyEditorTestObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPropertyEditorTestObject)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyEditorTestObject(); \
	friend struct Z_Construct_UClass_UPropertyEditorTestObject_Statics; \
public: \
	DECLARE_CLASS(UPropertyEditorTestObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPropertyEditorTestObject)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyEditorTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEditorTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyEditorTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEditorTestObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyEditorTestObject(UPropertyEditorTestObject&&); \
	NO_API UPropertyEditorTestObject(const UPropertyEditorTestObject&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyEditorTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyEditorTestObject(UPropertyEditorTestObject&&); \
	NO_API UPropertyEditorTestObject(const UPropertyEditorTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyEditorTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEditorTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEditorTestObject)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_122_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h_125_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PropertyEditorTestObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPropertyEditorTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_PropertyEditorTestObject_h


#define FOREACH_ENUM_EDITCOLOR(op) \
	op(EditColor::Red) \
	op(EditColor::Orange) \
	op(EditColor::Yellow) \
	op(EditColor::Green) \
	op(EditColor::Blue) \
	op(EditColor::Indigo) \
	op(EditColor::Violet) \
	op(EditColor::Pink) \
	op(EditColor::Magenta) \
	op(EditColor::Cyan) 

enum class EditColor : uint8;
template<> UNREALED_API UEnum* StaticEnum<EditColor>();

#define FOREACH_ENUM_ARRAYLABELENUM(op) \
	op(ArrayIndex0) \
	op(ArrayIndex1) \
	op(ArrayIndex2) \
	op(ArrayIndex3) \
	op(ArrayIndex4) \
	op(ArrayIndex5) \
	op(ArrayIndex_MAX) 
#define FOREACH_ENUM_PROPERTEDITORTESTENUM(op) \
	op(PropertyEditorTest_Enum1) \
	op(PropertyEditorTest_Enum2) \
	op(PropertyEditorTest_Enum3) \
	op(PropertyEditorTest_Enum4) \
	op(PropertyEditorTest_Enum5) \
	op(PropertyEditorTest_Enum6) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
