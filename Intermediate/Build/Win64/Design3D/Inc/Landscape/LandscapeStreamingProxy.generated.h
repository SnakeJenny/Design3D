// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeStreamingProxy_generated_h
#error "LandscapeStreamingProxy.generated.h already included, missing '#pragma once' in LandscapeStreamingProxy.h"
#endif
#define LANDSCAPE_LandscapeStreamingProxy_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeStreamingProxy(); \
	friend struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeStreamingProxy, ALandscapeProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeStreamingProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeStreamingProxy(); \
	friend struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeStreamingProxy, ALandscapeProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeStreamingProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeStreamingProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeStreamingProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeStreamingProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeStreamingProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeStreamingProxy(ALandscapeStreamingProxy&&); \
	LANDSCAPE_API ALandscapeStreamingProxy(const ALandscapeStreamingProxy&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeStreamingProxy(ALandscapeStreamingProxy&&); \
	LANDSCAPE_API ALandscapeStreamingProxy(const ALandscapeStreamingProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeStreamingProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeStreamingProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeStreamingProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_13_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeStreamingProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
