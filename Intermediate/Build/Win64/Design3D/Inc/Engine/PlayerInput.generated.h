// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef ENGINE_PlayerInput_generated_h
#error "PlayerInput.generated.h already included, missing '#pragma once' in PlayerInput.h"
#endif
#define ENGINE_PlayerInput_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisKeyMapping>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputActionKeyMapping>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisConfigEntry>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisProperties>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyBind_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FKeyBind>();

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxis) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertAxis(Z_Param_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxisKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_AxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertAxisKey(Z_Param_AxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBind) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BindName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBind(Z_Param_BindName,Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivity(Z_Param_Sensitivity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxis) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertAxis(Z_Param_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertAxisKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_AxisKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertAxisKey(Z_Param_AxisKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBind) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BindName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBind(Z_Param_BindName,Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivity(Z_Param_Sensitivity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct Z_Construct_UClass_UPlayerInput_Statics; \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	DECLARE_WITHIN(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct Z_Construct_UClass_UPlayerInput_Statics; \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	DECLARE_WITHIN(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInput)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_269_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlayerInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
