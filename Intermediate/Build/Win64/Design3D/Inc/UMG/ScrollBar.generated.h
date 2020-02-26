// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ScrollBar_generated_h
#error "ScrollBar.generated.h already included, missing '#pragma once' in ScrollBar.h"
#endif
#define UMG_ScrollBar_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOffsetFraction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThumbSizeFraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(Z_Param_InOffsetFraction,Z_Param_InThumbSizeFraction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOffsetFraction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThumbSizeFraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(Z_Param_InOffsetFraction,Z_Param_InThumbSizeFraction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScrollBar(); \
	friend struct Z_Construct_UClass_UScrollBar_Statics; \
public: \
	DECLARE_CLASS(UScrollBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBar)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBar(); \
	friend struct Z_Construct_UClass_UScrollBar_Statics; \
public: \
	DECLARE_CLASS(UScrollBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBar)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBar(UScrollBar&&); \
	NO_API UScrollBar(const UScrollBar&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBar(UScrollBar&&); \
	NO_API UScrollBar(const UScrollBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBar)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_14_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScrollBar."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
