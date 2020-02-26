// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UHorizontalBoxSlot;
#ifdef UMG_HorizontalBox_generated_h
#error "HorizontalBox.generated.h already included, missing '#pragma once' in HorizontalBox.h"
#endif
#define UMG_HorizontalBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToHorizontalBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizontalBoxSlot**)Z_Param__Result=P_THIS->AddChildToHorizontalBox(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToHorizontalBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizontalBoxSlot**)Z_Param__Result=P_THIS->AddChildToHorizontalBox(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizontalBox(); \
	friend struct Z_Construct_UClass_UHorizontalBox_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBox)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBox(); \
	friend struct Z_Construct_UClass_UHorizontalBox_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBox)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBox(UHorizontalBox&&); \
	NO_API UHorizontalBox(const UHorizontalBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBox(UHorizontalBox&&); \
	NO_API UHorizontalBox(const UHorizontalBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBox)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HorizontalBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UHorizontalBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
