// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Throbber_generated_h
#error "Throbber.generated.h already included, missing '#pragma once' in Throbber.h"
#endif
#define UMG_Throbber_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAnimateOpacity) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateOpacity(Z_Param_bInAnimateOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimateVertically) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateVertically); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateVertically(Z_Param_bInAnimateVertically); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimateHorizontally) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateHorizontally); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateHorizontally(Z_Param_bInAnimateHorizontally); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberOfPieces) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNumberOfPieces); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberOfPieces(Z_Param_InNumberOfPieces); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnimateOpacity) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateOpacity(Z_Param_bInAnimateOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimateVertically) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateVertically); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateVertically(Z_Param_bInAnimateVertically); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimateHorizontally) \
	{ \
		P_GET_UBOOL(Z_Param_bInAnimateHorizontally); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimateHorizontally(Z_Param_bInAnimateHorizontally); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberOfPieces) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNumberOfPieces); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberOfPieces(Z_Param_InNumberOfPieces); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrobber(); \
	friend struct Z_Construct_UClass_UThrobber_Statics; \
public: \
	DECLARE_CLASS(UThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUThrobber(); \
	friend struct Z_Construct_UClass_UThrobber_Statics; \
public: \
	DECLARE_CLASS(UThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrobber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrobber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrobber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrobber(UThrobber&&); \
	NO_API UThrobber(const UThrobber&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrobber(UThrobber&&); \
	NO_API UThrobber(const UThrobber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrobber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrobber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Throbber."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UThrobber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Throbber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
