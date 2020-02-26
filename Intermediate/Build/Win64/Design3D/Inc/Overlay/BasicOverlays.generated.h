// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAY_BasicOverlays_generated_h
#error "BasicOverlays.generated.h already included, missing '#pragma once' in BasicOverlays.h"
#endif
#define OVERLAY_BasicOverlays_generated_h

#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicOverlays(); \
	friend struct Z_Construct_UClass_UBasicOverlays_Statics; \
public: \
	DECLARE_CLASS(UBasicOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(UBasicOverlays)


#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBasicOverlays(); \
	friend struct Z_Construct_UClass_UBasicOverlays_Statics; \
public: \
	DECLARE_CLASS(UBasicOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), NO_API) \
	DECLARE_SERIALIZER(UBasicOverlays)


#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlays) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlays); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasicOverlays(UBasicOverlays&&); \
	NO_API UBasicOverlays(const UBasicOverlays&); \
public:


#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasicOverlays(UBasicOverlays&&); \
	NO_API UBasicOverlays(const UBasicOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlays)


#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_19_PROLOG
#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_INCLASS \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAY_API UClass* StaticClass<class UBasicOverlays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Overlay_Public_BasicOverlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
