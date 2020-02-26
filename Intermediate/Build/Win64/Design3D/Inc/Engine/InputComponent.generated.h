// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef ENGINE_InputComponent_generated_h
#error "InputComponent.generated.h already included, missing '#pragma once' in InputComponent.h"
#endif
#define ENGINE_InputComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_643_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCachedKeyToActionInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_574_DELEGATE \
struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms \
{ \
	float Value; \
}; \
static inline void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value) \
{ \
	_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms Parms; \
	Parms.Value=Value; \
	InputGestureHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_511_DELEGATE \
struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms \
{ \
	FVector AxisValue; \
}; \
static inline void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue) \
{ \
	_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputVectorAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_413_DELEGATE \
struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms \
{ \
	float AxisValue; \
}; \
static inline void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue) \
{ \
	_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_360_DELEGATE \
struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	FVector Location; \
}; \
static inline void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location) \
{ \
	_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.Location=Location; \
	InputTouchHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_127_DELEGATE \
struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms \
{ \
	FKey Key; \
}; \
static inline void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key) \
{ \
	_Script_Engine_eventInputActionHandlerDynamicSignature_Parms Parms; \
	Parms.Key=Key; \
	InputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetControllerKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetControllerVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetControllerAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsControllerKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetControllerKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetControllerVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetControllerAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsControllerKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend struct Z_Construct_UClass_UInputComponent_Statics; \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_INCLASS \
private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend struct Z_Construct_UClass_UInputComponent_Statics; \
public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputComponent(UInputComponent&&); \
	NO_API UInputComponent(const UInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedKeyToActionInfo() { return STRUCT_OFFSET(UInputComponent, CachedKeyToActionInfo); }


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_674_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_678_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h


#define FOREACH_ENUM_ECONTROLLERANALOGSTICK(op) \
	op(EControllerAnalogStick::CAS_LeftStick) \
	op(EControllerAnalogStick::CAS_RightStick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
