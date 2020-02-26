// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FVector2D;
#ifdef UMG_DynamicEntryBox_generated_h
#error "DynamicEntryBox.generated.h already included, missing '#pragma once' in DynamicEntryBox.h"
#endif
#define UMG_DynamicEntryBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_CreateEntryOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EntryClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntryOfClass(Z_Param_EntryClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CreateEntry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEntrySpacing) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InEntrySpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntrySpacing(Z_Param_Out_InEntrySpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEntry) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_EntryWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEntry(Z_Param_EntryWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumEntries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumEntries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllEntries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetAllEntries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_GET_UBOOL(Z_Param_bDeleteWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(Z_Param_bDeleteWidgets); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_CreateEntryOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EntryClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntryOfClass(Z_Param_EntryClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CreateEntry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEntrySpacing) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InEntrySpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEntrySpacing(Z_Param_Out_InEntrySpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEntry) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_EntryWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEntry(Z_Param_EntryWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumEntries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumEntries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllEntries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetAllEntries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_GET_UBOOL(Z_Param_bDeleteWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(Z_Param_bDeleteWidgets); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicEntryBox(); \
	friend struct Z_Construct_UClass_UDynamicEntryBox_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicEntryBox(); \
	friend struct Z_Construct_UClass_UDynamicEntryBox_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicEntryBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBox(UDynamicEntryBox&&); \
	NO_API UDynamicEntryBox(const UDynamicEntryBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBox(UDynamicEntryBox&&); \
	NO_API UDynamicEntryBox(const UDynamicEntryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBox)


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntryBoxType() { return STRUCT_OFFSET(UDynamicEntryBox, EntryBoxType); } \
	FORCEINLINE static uint32 __PPO__EntrySpacing() { return STRUCT_OFFSET(UDynamicEntryBox, EntrySpacing); } \
	FORCEINLINE static uint32 __PPO__SpacingPattern() { return STRUCT_OFFSET(UDynamicEntryBox, SpacingPattern); } \
	FORCEINLINE static uint32 __PPO__EntrySizeRule() { return STRUCT_OFFSET(UDynamicEntryBox, EntrySizeRule); } \
	FORCEINLINE static uint32 __PPO__EntryHorizontalAlignment() { return STRUCT_OFFSET(UDynamicEntryBox, EntryHorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__EntryVerticalAlignment() { return STRUCT_OFFSET(UDynamicEntryBox, EntryVerticalAlignment); } \
	FORCEINLINE static uint32 __PPO__MaxElementSize() { return STRUCT_OFFSET(UDynamicEntryBox, MaxElementSize); } \
	FORCEINLINE static uint32 __PPO__EntryWidgetClass() { return STRUCT_OFFSET(UDynamicEntryBox, EntryWidgetClass); }


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_28_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDynamicEntryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h


#define FOREACH_ENUM_EDYNAMICBOXTYPE(op) \
	op(EDynamicBoxType::Horizontal) \
	op(EDynamicBoxType::Vertical) \
	op(EDynamicBoxType::Wrap) \
	op(EDynamicBoxType::Overlay) 

enum class EDynamicBoxType : uint8;
template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
