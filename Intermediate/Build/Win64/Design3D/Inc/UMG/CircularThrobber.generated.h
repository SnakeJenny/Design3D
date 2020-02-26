// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_CircularThrobber_generated_h
#error "CircularThrobber.generated.h already included, missing '#pragma once' in CircularThrobber.h"
#endif
#define UMG_CircularThrobber_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPeriod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPeriod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPeriod(Z_Param_InPeriod); \
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


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPeriod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPeriod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPeriod(Z_Param_InPeriod); \
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


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCircularThrobber(); \
	friend struct Z_Construct_UClass_UCircularThrobber_Statics; \
public: \
	DECLARE_CLASS(UCircularThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCircularThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCircularThrobber(); \
	friend struct Z_Construct_UClass_UCircularThrobber_Statics; \
public: \
	DECLARE_CLASS(UCircularThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCircularThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularThrobber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularThrobber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularThrobber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularThrobber(UCircularThrobber&&); \
	NO_API UCircularThrobber(const UCircularThrobber&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularThrobber(UCircularThrobber&&); \
	NO_API UCircularThrobber(const UCircularThrobber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularThrobber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularThrobber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularThrobber)


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableRadius() { return STRUCT_OFFSET(UCircularThrobber, bEnableRadius); }


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_21_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CircularThrobber."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCircularThrobber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
