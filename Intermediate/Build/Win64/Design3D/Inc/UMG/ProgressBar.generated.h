// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UMG_ProgressBar_generated_h
#error "ProgressBar.generated.h already included, missing '#pragma once' in ProgressBar.h"
#endif
#define UMG_ProgressBar_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsMarquee) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsMarquee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsMarquee(Z_Param_InbIsMarquee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFillColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFillColorAndOpacity(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPercent(Z_Param_InPercent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsMarquee) \
	{ \
		P_GET_UBOOL(Z_Param_InbIsMarquee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsMarquee(Z_Param_InbIsMarquee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFillColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFillColorAndOpacity(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPercent(Z_Param_InPercent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProgressBar(); \
	friend struct Z_Construct_UClass_UProgressBar_Statics; \
public: \
	DECLARE_CLASS(UProgressBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UProgressBar)


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUProgressBar(); \
	friend struct Z_Construct_UClass_UProgressBar_Statics; \
public: \
	DECLARE_CLASS(UProgressBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UProgressBar)


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProgressBar(UProgressBar&&); \
	NO_API UProgressBar(const UProgressBar&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProgressBar(UProgressBar&&); \
	NO_API UProgressBar(const UProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressBar)


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProgressBar."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
