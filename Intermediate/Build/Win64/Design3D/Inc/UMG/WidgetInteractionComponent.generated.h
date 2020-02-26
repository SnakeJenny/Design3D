// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetComponent;
struct FHitResult;
struct FVector2D;
struct FKey;
#ifdef UMG_WidgetInteractionComponent_generated_h
#error "WidgetInteractionComponent.generated.h already included, missing '#pragma once' in WidgetInteractionComponent.h"
#endif
#define UMG_WidgetInteractionComponent_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_47_DELEGATE \
struct _Script_UMG_eventOnHoveredWidgetChanged_Parms \
{ \
	UWidgetComponent* WidgetComponent; \
	UWidgetComponent* PreviousWidgetComponent; \
}; \
static inline void FOnHoveredWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredWidgetChanged, UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent) \
{ \
	_Script_UMG_eventOnHoveredWidgetChanged_Parms Parms; \
	Parms.WidgetComponent=WidgetComponent; \
	Parms.PreviousWidgetComponent=PreviousWidgetComponent; \
	OnHoveredWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomHitResult(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet2DHitLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->Get2DHitLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastHitResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverFocusableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWheel(Z_Param_ScrollDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyChar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Characters); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressAndReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleasePointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleasePointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressPointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PressPointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomHitResult(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet2DHitLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->Get2DHitLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastHitResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverFocusableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWheel(Z_Param_ScrollDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyChar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Characters); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressAndReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleasePointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleasePointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressPointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PressPointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetInteractionComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetInteractionComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetInteractionComponent(UWidgetInteractionComponent&&); \
	NO_API UWidgetInteractionComponent(const UWidgetInteractionComponent&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetInteractionComponent(UWidgetInteractionComponent&&); \
	NO_API UWidgetInteractionComponent(const UWidgetInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInteractionComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomHitResult() { return STRUCT_OFFSET(UWidgetInteractionComponent, CustomHitResult); } \
	FORCEINLINE static uint32 __PPO__LocalHitLocation() { return STRUCT_OFFSET(UWidgetInteractionComponent, LocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__LastLocalHitLocation() { return STRUCT_OFFSET(UWidgetInteractionComponent, LastLocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__HoveredWidgetComponent() { return STRUCT_OFFSET(UWidgetInteractionComponent, HoveredWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__LastHitResult() { return STRUCT_OFFSET(UWidgetInteractionComponent, LastHitResult); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetInteractable() { return STRUCT_OFFSET(UWidgetInteractionComponent, bIsHoveredWidgetInteractable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetFocusable() { return STRUCT_OFFSET(UWidgetInteractionComponent, bIsHoveredWidgetFocusable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetHitTestVisible() { return STRUCT_OFFSET(UWidgetInteractionComponent, bIsHoveredWidgetHitTestVisible); }


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_55_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h


#define FOREACH_ENUM_EWIDGETINTERACTIONSOURCE(op) \
	op(EWidgetInteractionSource::World) \
	op(EWidgetInteractionSource::Mouse) \
	op(EWidgetInteractionSource::CenterScreen) \
	op(EWidgetInteractionSource::Custom) 

enum class EWidgetInteractionSource : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetInteractionSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
