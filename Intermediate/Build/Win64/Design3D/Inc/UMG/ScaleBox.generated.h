// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ScaleBox_generated_h
#error "ScaleBox.generated.h already included, missing '#pragma once' in ScaleBox.h"
#endif
#define UMG_ScaleBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIgnoreInheritedScale) \
	{ \
		P_GET_UBOOL(Z_Param_bInIgnoreInheritedScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreInheritedScale(Z_Param_bInIgnoreInheritedScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserSpecifiedScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InUserSpecifiedScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUserSpecifiedScale(Z_Param_InUserSpecifiedScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStretchDirection) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InStretchDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStretchDirection(EStretchDirection::Type(Z_Param_InStretchDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStretch) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InStretch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStretch(EStretch::Type(Z_Param_InStretch)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIgnoreInheritedScale) \
	{ \
		P_GET_UBOOL(Z_Param_bInIgnoreInheritedScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIgnoreInheritedScale(Z_Param_bInIgnoreInheritedScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserSpecifiedScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InUserSpecifiedScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUserSpecifiedScale(Z_Param_InUserSpecifiedScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStretchDirection) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InStretchDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStretchDirection(EStretchDirection::Type(Z_Param_InStretchDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStretch) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InStretch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStretch(EStretch::Type(Z_Param_InStretch)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScaleBox, NO_API)


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScaleBox(); \
	friend struct Z_Construct_UClass_UScaleBox_Statics; \
public: \
	DECLARE_CLASS(UScaleBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScaleBox) \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUScaleBox(); \
	friend struct Z_Construct_UClass_UScaleBox_Statics; \
public: \
	DECLARE_CLASS(UScaleBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScaleBox) \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaleBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaleBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaleBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaleBox(UScaleBox&&); \
	NO_API UScaleBox(const UScaleBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaleBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaleBox(UScaleBox&&); \
	NO_API UScaleBox(const UScaleBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaleBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaleBox)


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_20_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScaleBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScaleBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
