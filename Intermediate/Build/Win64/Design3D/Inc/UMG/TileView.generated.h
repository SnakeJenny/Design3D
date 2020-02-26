// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TileView_generated_h
#error "TileView.generated.h already included, missing '#pragma once' in TileView.h"
#endif
#define UMG_TileView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEntryWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntryWidth(Z_Param_NewWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEntryHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntryHeight(Z_Param_NewHeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEntryWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntryWidth(Z_Param_NewWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEntryHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntryHeight(Z_Param_NewHeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileView(); \
	friend struct Z_Construct_UClass_UTileView_Statics; \
public: \
	DECLARE_CLASS(UTileView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTileView)


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTileView(); \
	friend struct Z_Construct_UClass_UTileView_Statics; \
public: \
	DECLARE_CLASS(UTileView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTileView)


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileView(UTileView&&); \
	NO_API UTileView(const UTileView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileView(UTileView&&); \
	NO_API UTileView(const UTileView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileView)


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntryHeight() { return STRUCT_OFFSET(UTileView, EntryHeight); } \
	FORCEINLINE static uint32 __PPO__EntryWidth() { return STRUCT_OFFSET(UTileView, EntryWidth); } \
	FORCEINLINE static uint32 __PPO__TileAlignment() { return STRUCT_OFFSET(UTileView, TileAlignment); } \
	FORCEINLINE static uint32 __PPO__bWrapHorizontalNavigation() { return STRUCT_OFFSET(UTileView, bWrapHorizontalNavigation); }


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_12_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TileView_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTileView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TileView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
