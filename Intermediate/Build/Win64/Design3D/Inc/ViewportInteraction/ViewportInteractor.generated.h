// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EViewportInteractionDraggingMode : uint8;
struct FVector;
struct FTransform;
class UViewportInteractor;
class UViewportWorldInteraction;
struct FViewportActionKeyInput;
struct FKey;
#ifdef VIEWPORTINTERACTION_ViewportInteractor_generated_h
#error "ViewportInteractor.generated.h already included, missing '#pragma once' in ViewportInteractor.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractor_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_RPC_WRAPPERS \
	virtual void Tick_Implementation(const float DeltaTime); \
	virtual void Shutdown_Implementation(); \
 \
	DECLARE_FUNCTION(execSetDraggingMode) \
	{ \
		P_GET_ENUM(EViewportInteractionDraggingMode,Z_Param_NewDraggingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDraggingMode(EViewportInteractionDraggingMode(Z_Param_NewDraggingMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringOverGizmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverGizmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoverLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetHoverLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAndForwardVector) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutHandTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTransformAndForwardVector(Z_Param_Out_OutHandTransform,Z_Param_Out_OutForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserPointer) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerEnd); \
		P_GET_UBOOL(Z_Param_bEvenIfBlocked); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaserLengthOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLaserPointer(Z_Param_Out_LaserPointerStart,Z_Param_Out_LaserPointerEnd,Z_Param_bEvenIfBlocked,Z_Param_LaserLengthOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDraggingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EViewportInteractionDraggingMode*)Z_Param__Result=P_THIS->GetDraggingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOtherInteractor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetOtherInteractor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportWorldInteraction**)Z_Param__Result=P_THIS->GetWorldInteraction(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Tick_Implementation(const float DeltaTime); \
	virtual void Shutdown_Implementation(); \
 \
	DECLARE_FUNCTION(execSetDraggingMode) \
	{ \
		P_GET_ENUM(EViewportInteractionDraggingMode,Z_Param_NewDraggingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDraggingMode(EViewportInteractionDraggingMode(Z_Param_NewDraggingMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringOverGizmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverGizmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoverLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetHoverLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAndForwardVector) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutHandTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTransformAndForwardVector(Z_Param_Out_OutHandTransform,Z_Param_Out_OutForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaserPointer) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerEnd); \
		P_GET_UBOOL(Z_Param_bEvenIfBlocked); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaserLengthOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLaserPointer(Z_Param_Out_LaserPointerStart,Z_Param_Out_LaserPointerEnd,Z_Param_bEvenIfBlocked,Z_Param_LaserLengthOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDraggingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EViewportInteractionDraggingMode*)Z_Param__Result=P_THIS->GetDraggingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOtherInteractor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetOtherInteractor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UViewportWorldInteraction**)Z_Param__Result=P_THIS->GetWorldInteraction(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_EVENT_PARMS \
	struct ViewportInteractor_eventHandleInputAxis_BP_Parms \
	{ \
		FViewportActionKeyInput Action; \
		FKey Key; \
		float Delta; \
		float DeltaTime; \
		bool bOutWasHandled; \
	}; \
	struct ViewportInteractor_eventHandleInputKey_BP_Parms \
	{ \
		FViewportActionKeyInput Action; \
		FKey Key; \
		TEnumAsByte<EInputEvent> Event; \
		bool bOutWasHandled; \
	}; \
	struct ViewportInteractor_eventTick_Parms \
	{ \
		float DeltaTime; \
	};


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_CALLBACK_WRAPPERS
#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportInteractor(); \
	friend struct Z_Construct_UClass_UViewportInteractor_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportInteractor)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUViewportInteractor(); \
	friend struct Z_Construct_UClass_UViewportInteractor_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportInteractor)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportInteractor(UViewportInteractor&&); \
	NO_API UViewportInteractor(const UViewportInteractor&); \
public:


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportInteractor(UViewportInteractor&&); \
	NO_API UViewportInteractor(const UViewportInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportInteractor)


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeyToActionMap() { return STRUCT_OFFSET(UViewportInteractor, KeyToActionMap); } \
	FORCEINLINE static uint32 __PPO__WorldInteraction() { return STRUCT_OFFSET(UViewportInteractor, WorldInteraction); } \
	FORCEINLINE static uint32 __PPO__OtherInteractor() { return STRUCT_OFFSET(UViewportInteractor, OtherInteractor); }


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_20_PROLOG \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_EVENT_PARMS


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_INCLASS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
