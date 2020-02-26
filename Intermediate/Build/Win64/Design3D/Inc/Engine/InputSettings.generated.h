// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputAxisKeyMapping;
struct FInputActionKeyMapping;
class UInputSettings;
#ifdef ENGINE_InputSettings_generated_h
#error "InputSettings.generated.h already included, missing '#pragma once' in InputSettings.h"
#endif
#define ENGINE_InputSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceRebuildKeymaps(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_AxisNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAxisNames(Z_Param_Out_AxisNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_ActionNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActionNames(Z_Param_Out_ActionNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveKeyMappings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveKeyMappings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisMapping) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisMappingByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InAxisName); \
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAxisMappingByName(Z_Param_InAxisName,Z_Param_Out_OutMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisMapping) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionMapping) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionMappingByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InActionName); \
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActionMappingByName(Z_Param_InActionName,Z_Param_Out_OutMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActionMapping) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInputSettings**)Z_Param__Result=UInputSettings::GetInputSettings(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceRebuildKeymaps(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_AxisNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAxisNames(Z_Param_Out_AxisNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionNames) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_ActionNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActionNames(Z_Param_Out_ActionNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveKeyMappings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveKeyMappings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisMapping) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisMappingByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InAxisName); \
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAxisMappingByName(Z_Param_InAxisName,Z_Param_Out_OutMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisMapping) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionMapping) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionMappingByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InActionName); \
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActionMappingByName(Z_Param_InActionName,Z_Param_Out_OutMappings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActionMapping) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping); \
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInputSettings**)Z_Param__Result=UInputSettings::GetInputSettings(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
