// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BaseWidgetBlueprint_generated_h
#error "BaseWidgetBlueprint.generated.h already included, missing '#pragma once' in BaseWidgetBlueprint.h"
#endif
#define UNREALED_BaseWidgetBlueprint_generated_h

#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWidgetBlueprint(); \
	friend struct Z_Construct_UClass_UBaseWidgetBlueprint_Statics; \
public: \
	DECLARE_CLASS(UBaseWidgetBlueprint, UBlueprint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBaseWidgetBlueprint)


#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBaseWidgetBlueprint(); \
	friend struct Z_Construct_UClass_UBaseWidgetBlueprint_Statics; \
public: \
	DECLARE_CLASS(UBaseWidgetBlueprint, UBlueprint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBaseWidgetBlueprint)


#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWidgetBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWidgetBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWidgetBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWidgetBlueprint(UBaseWidgetBlueprint&&); \
	NO_API UBaseWidgetBlueprint(const UBaseWidgetBlueprint&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWidgetBlueprint(UBaseWidgetBlueprint&&); \
	NO_API UBaseWidgetBlueprint(const UBaseWidgetBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWidgetBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWidgetBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWidgetBlueprint)


#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_8_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BaseWidgetBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBaseWidgetBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
