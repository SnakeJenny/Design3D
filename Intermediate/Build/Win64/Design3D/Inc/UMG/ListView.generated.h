// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
#ifdef UMG_ListView_generated_h
#error "ListView.generated.h already included, missing '#pragma once' in ListView.h"
#endif
#define UMG_ListView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_13_DELEGATE \
struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms \
{ \
	UObject* Item; \
	UUserWidget* Widget; \
}; \
static inline void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget) \
{ \
	_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.Widget=Widget; \
	OnListItemScrolledIntoViewDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_12_DELEGATE \
struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsHovered; \
}; \
static inline void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered) \
{ \
	_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsHovered=bIsHovered ? true : false; \
	OnItemIsHoveredChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_11_DELEGATE \
struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsSelected; \
}; \
static inline void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected) \
{ \
	_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsSelected=bIsSelected ? true : false; \
	OnListItemSelectionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_10_DELEGATE \
struct _Script_UMG_eventSimpleListItemEventDynamic_Parms \
{ \
	UObject* Item; \
}; \
static inline void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item) \
{ \
	_Script_UMG_eventSimpleListItemEventDynamic_Parms Parms; \
	Parms.Item=Item; \
	SimpleListItemEventDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->BP_GetSelectedItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetListItems) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InListItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetListItems(Z_Param_Out_InListItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CancelScrollIntoView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ScrollItemIntoView(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_NavigateToItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_NavigateToItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsItemVisible) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsItemVisible(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItems) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetSelectedItems(Z_Param_Out_Items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BP_GetNumItemsSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetItemSelection) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_GET_UBOOL(Z_Param_bSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetItemSelection(Z_Param_Item,Z_Param_bSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetSelectedItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetSelectedItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigateToIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NavigateToIndex(Z_Param_Index); \
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
	DECLARE_FUNCTION(execScrollIndexIntoView) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollIndexIntoView(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRefreshPending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRefreshPending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_SelectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectionMode(ESelectionMode::Type(Z_Param_SelectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearListItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndexForItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIndexForItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetItemAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetListItems(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->BP_GetSelectedItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetListItems) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InListItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetListItems(Z_Param_Out_InListItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CancelScrollIntoView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ScrollItemIntoView(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_NavigateToItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_NavigateToItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsItemVisible) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsItemVisible(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItems) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Items); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetSelectedItems(Z_Param_Out_Items); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->BP_GetNumItemsSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetItemSelection) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_GET_UBOOL(Z_Param_bSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetItemSelection(Z_Param_Item,Z_Param_bSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_SetSelectedItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_SetSelectedItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNavigateToIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NavigateToIndex(Z_Param_Index); \
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
	DECLARE_FUNCTION(execScrollIndexIntoView) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollIndexIntoView(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRefreshPending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRefreshPending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_SelectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectionMode(ESelectionMode::Type(Z_Param_SelectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearListItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndexForItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIndexForItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->GetItemAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetListItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetListItems(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView)


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectionMode() { return STRUCT_OFFSET(UListView, SelectionMode); } \
	FORCEINLINE static uint32 __PPO__ConsumeMouseWheel() { return STRUCT_OFFSET(UListView, ConsumeMouseWheel); } \
	FORCEINLINE static uint32 __PPO__bClearSelectionOnClick() { return STRUCT_OFFSET(UListView, bClearSelectionOnClick); } \
	FORCEINLINE static uint32 __PPO__bIsFocusable() { return STRUCT_OFFSET(UListView, bIsFocusable); } \
	FORCEINLINE static uint32 __PPO__EntrySpacing() { return STRUCT_OFFSET(UListView, EntrySpacing); } \
	FORCEINLINE static uint32 __PPO__bReturnFocusToSelection() { return STRUCT_OFFSET(UListView, bReturnFocusToSelection); } \
	FORCEINLINE static uint32 __PPO__ListItems() { return STRUCT_OFFSET(UListView, ListItems); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemClicked() { return STRUCT_OFFSET(UListView, BP_OnItemClicked); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemDoubleClicked() { return STRUCT_OFFSET(UListView, BP_OnItemDoubleClicked); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemIsHoveredChanged() { return STRUCT_OFFSET(UListView, BP_OnItemIsHoveredChanged); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemSelectionChanged() { return STRUCT_OFFSET(UListView, BP_OnItemSelectionChanged); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemScrolledIntoView() { return STRUCT_OFFSET(UListView, BP_OnItemScrolledIntoView); }


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_24_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ListView_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UListView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
