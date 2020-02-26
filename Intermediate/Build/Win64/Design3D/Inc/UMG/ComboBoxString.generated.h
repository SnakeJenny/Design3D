// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ComboBoxString_generated_h
#error "ComboBoxString.generated.h already included, missing '#pragma once' in ComboBoxString.h"
#endif
#define UMG_ComboBoxString_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_26_DELEGATE \
static inline void FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent) \
{ \
	OnOpeningEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_25_DELEGATE \
struct ComboBoxString_eventOnSelectionChangedEvent_Parms \
{ \
	FString SelectedItem; \
	TEnumAsByte<ESelectInfo::Type> SelectionType; \
}; \
static inline void FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, const FString& SelectedItem, ESelectInfo::Type SelectionType) \
{ \
	ComboBoxString_eventOnSelectionChangedEvent_Parms Parms; \
	Parms.SelectedItem=SelectedItem; \
	Parms.SelectionType=SelectionType; \
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOptionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOptionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSelectedOption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedOption(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetOptionAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOptionIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindOptionIndex(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOption(Z_Param_Option); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOptionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOptionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSelectedOption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedOption(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetOptionAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOptionIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindOptionIndex(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOption) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOption(Z_Param_Option); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UComboBoxString, NO_API)


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxString(); \
	friend struct Z_Construct_UClass_UComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UComboBoxString, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxString) \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUComboBoxString(); \
	friend struct Z_Construct_UClass_UComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UComboBoxString, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxString) \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxString) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxString); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxString(UComboBoxString&&); \
	NO_API UComboBoxString(const UComboBoxString&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxString(UComboBoxString&&); \
	NO_API UComboBoxString(const UComboBoxString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxString)


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultOptions() { return STRUCT_OFFSET(UComboBoxString, DefaultOptions); } \
	FORCEINLINE static uint32 __PPO__SelectedOption() { return STRUCT_OFFSET(UComboBoxString, SelectedOption); }


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComboBoxString."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBoxString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
