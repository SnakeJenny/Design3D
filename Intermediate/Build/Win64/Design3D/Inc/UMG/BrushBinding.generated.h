// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
#ifdef UMG_BrushBinding_generated_h
#error "BrushBinding.generated.h already included, missing '#pragma once' in BrushBinding.h"
#endif
#define UMG_BrushBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrushBinding(); \
	friend struct Z_Construct_UClass_UBrushBinding_Statics; \
public: \
	DECLARE_CLASS(UBrushBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBrushBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBrushBinding(); \
	friend struct Z_Construct_UClass_UBrushBinding_Statics; \
public: \
	DECLARE_CLASS(UBrushBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBrushBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrushBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrushBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrushBinding(UBrushBinding&&); \
	NO_API UBrushBinding(const UBrushBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBrushBinding(UBrushBinding&&); \
	NO_API UBrushBinding(const UBrushBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrushBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBrushBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_12_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBrushBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
