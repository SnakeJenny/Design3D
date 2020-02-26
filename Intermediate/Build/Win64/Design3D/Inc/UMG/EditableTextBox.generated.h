// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_EditableTextBox_generated_h
#error "EditableTextBox.generated.h already included, missing '#pragma once' in EditableTextBox.h"
#endif
#define UMG_EditableTextBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_33_DELEGATE \
struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_32_DELEGATE \
struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxChangedEvent, FText const& Text) \
{ \
	EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPassword) \
	{ \
		P_GET_UBOOL(Z_Param_bIsPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsPassword(Z_Param_bIsPassword); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetHintText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHintText(Z_Param_InText); \
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


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPassword) \
	{ \
		P_GET_UBOOL(Z_Param_bIsPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsPassword(Z_Param_bIsPassword); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetHintText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHintText(Z_Param_InText); \
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


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableTextBox(); \
	friend struct Z_Construct_UClass_UEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UEditableTextBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUEditableTextBox(); \
	friend struct Z_Construct_UClass_UEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UEditableTextBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableTextBox(UEditableTextBox&&); \
	NO_API UEditableTextBox(const UEditableTextBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableTextBox(UEditableTextBox&&); \
	NO_API UEditableTextBox(const UEditableTextBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_25_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditableTextBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UEditableTextBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
