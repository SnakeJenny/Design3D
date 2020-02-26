// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UMG_TreeView_generated_h
#error "TreeView.generated.h already included, missing '#pragma once' in TreeView.h"
#endif
#define UMG_TreeView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_10_DELEGATE \
struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsExpanded; \
}; \
static inline void FOnItemExpansionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemExpansionChangedDynamic, UObject* Item, bool bIsExpanded) \
{ \
	_Script_UMG_eventOnItemExpansionChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsExpanded=bIsExpanded ? true : false; \
	OnItemExpansionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_9_DELEGATE \
struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms \
{ \
	UObject* Item; \
	TArray<UObject*> Children; \
}; \
static inline void FOnGetItemChildrenDynamic_DelegateWrapper(const FScriptDelegate& OnGetItemChildrenDynamic, UObject* Item, TArray<UObject*>& Children) \
{ \
	_Script_UMG_eventOnGetItemChildrenDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.Children=Children; \
	OnGetItemChildrenDynamic.ProcessDelegate<UObject>(&Parms); \
	Children=Parms.Children; \
}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollapseAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollapseAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpandAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExpandAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemExpansion) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_GET_UBOOL(Z_Param_bExpandItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemExpansion(Z_Param_Item,Z_Param_bExpandItem); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollapseAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollapseAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpandAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExpandAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemExpansion) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Item); \
		P_GET_UBOOL(Z_Param_bExpandItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemExpansion(Z_Param_Item,Z_Param_bExpandItem); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct Z_Construct_UClass_UTreeView_Statics; \
public: \
	DECLARE_CLASS(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct Z_Construct_UClass_UTreeView_Statics; \
public: \
	DECLARE_CLASS(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTreeView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTreeView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTreeView(UTreeView&&); \
	NO_API UTreeView(const UTreeView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTreeView(UTreeView&&); \
	NO_API UTreeView(const UTreeView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTreeView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BP_OnGetItemChildren() { return STRUCT_OFFSET(UTreeView, BP_OnGetItemChildren); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemExpansionChanged() { return STRUCT_OFFSET(UTreeView, BP_OnItemExpansionChanged); }


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTreeView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TreeView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
