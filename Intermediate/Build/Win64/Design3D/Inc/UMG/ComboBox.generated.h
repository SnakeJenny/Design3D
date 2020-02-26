// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ComboBox_generated_h
#error "ComboBox.generated.h already included, missing '#pragma once' in ComboBox.h"
#endif
#define UMG_ComboBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBox(); \
	friend struct Z_Construct_UClass_UComboBox_Statics; \
public: \
	DECLARE_CLASS(UComboBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBox)


#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUComboBox(); \
	friend struct Z_Construct_UClass_UComboBox_Statics; \
public: \
	DECLARE_CLASS(UComboBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBox)


#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBox(UComboBox&&); \
	NO_API UComboBox(const UComboBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBox(UComboBox&&); \
	NO_API UComboBox(const UComboBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBox)


#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComboBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ComboBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
