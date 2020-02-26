// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MultiLineEditableTextBox_generated_h
#error "MultiLineEditableTextBox.generated.h already included, missing '#pragma once' in MultiLineEditableTextBox.h"
#endif
#define UMG_MultiLineEditableTextBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_28_DELEGATE \
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnMultiLineEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_27_DELEGATE \
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxChangedEvent, FText const& Text) \
{ \
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnMultiLineEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_bReadOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsReadOnly(Z_Param_bReadOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetError) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetError(Z_Param_InError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsReadOnly) \
	{ \
		P_GET_UBOOL(Z_Param_bReadOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsReadOnly(Z_Param_bReadOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetError) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InError); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetError(Z_Param_InError); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiLineEditableTextBox(); \
	friend struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableTextBox, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMultiLineEditableTextBox(); \
	friend struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableTextBox, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableTextBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableTextBox(UMultiLineEditableTextBox&&); \
	NO_API UMultiLineEditableTextBox(const UMultiLineEditableTextBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableTextBox(UMultiLineEditableTextBox&&); \
	NO_API UMultiLineEditableTextBox(const UMultiLineEditableTextBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableTextBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiLineEditableTextBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMultiLineEditableTextBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
