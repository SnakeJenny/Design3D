// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FVector2D;
struct FVector;
#ifdef ENGINE_StereoLayerFunctionLibrary_generated_h
#error "StereoLayerFunctionLibrary.generated.h already included, missing '#pragma once' in StereoLayerFunctionLibrary.h"
#endif
#define ENGINE_StereoLayerFunctionLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoShowEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_InAutoShowEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::HideSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::ShowSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplashScreen) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_bShowLoadingMovie); \
		P_GET_UBOOL(Z_Param_bShowOnSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::SetSplashScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoShowEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_InAutoShowEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::HideSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::ShowSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplashScreen) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_bShowLoadingMovie); \
		P_GET_UBOOL(Z_Param_bShowOnSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStereoLayerFunctionLibrary::SetSplashScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerFunctionLibrary(UStereoLayerFunctionLibrary&&); \
	NO_API UStereoLayerFunctionLibrary(const UStereoLayerFunctionLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerFunctionLibrary(UStereoLayerFunctionLibrary&&); \
	NO_API UStereoLayerFunctionLibrary(const UStereoLayerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerFunctionLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StereoLayerFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
