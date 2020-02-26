// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SafeZone_generated_h
#error "SafeZone.generated.h already included, missing '#pragma once' in SafeZone.h"
#endif
#define UMG_SafeZone_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSidesToPad) \
	{ \
		P_GET_UBOOL(Z_Param_InPadLeft); \
		P_GET_UBOOL(Z_Param_InPadRight); \
		P_GET_UBOOL(Z_Param_InPadTop); \
		P_GET_UBOOL(Z_Param_InPadBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSidesToPad(Z_Param_InPadLeft,Z_Param_InPadRight,Z_Param_InPadTop,Z_Param_InPadBottom); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSidesToPad) \
	{ \
		P_GET_UBOOL(Z_Param_InPadLeft); \
		P_GET_UBOOL(Z_Param_InPadRight); \
		P_GET_UBOOL(Z_Param_InPadTop); \
		P_GET_UBOOL(Z_Param_InPadBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSidesToPad(Z_Param_InPadLeft,Z_Param_InPadRight,Z_Param_InPadTop,Z_Param_InPadBottom); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSafeZone(); \
	friend struct Z_Construct_UClass_USafeZone_Statics; \
public: \
	DECLARE_CLASS(USafeZone, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USafeZone)


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSafeZone(); \
	friend struct Z_Construct_UClass_USafeZone_Statics; \
public: \
	DECLARE_CLASS(USafeZone, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USafeZone)


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USafeZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USafeZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USafeZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USafeZone(USafeZone&&); \
	NO_API USafeZone(const USafeZone&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USafeZone(USafeZone&&); \
	NO_API USafeZone(const USafeZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USafeZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USafeZone)


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_28_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USafeZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SafeZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
