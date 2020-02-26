// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TextBinding_generated_h
#error "TextBinding.generated.h already included, missing '#pragma once' in TextBinding.h"
#endif
#define UMG_TextBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStringValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetStringValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetTextValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStringValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetStringValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetTextValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextBinding(); \
	friend struct Z_Construct_UClass_UTextBinding_Statics; \
public: \
	DECLARE_CLASS(UTextBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTextBinding(); \
	friend struct Z_Construct_UClass_UTextBinding_Statics; \
public: \
	DECLARE_CLASS(UTextBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTextBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBinding(UTextBinding&&); \
	NO_API UTextBinding(const UTextBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextBinding(UTextBinding&&); \
	NO_API UTextBinding(const UTextBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTextBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
