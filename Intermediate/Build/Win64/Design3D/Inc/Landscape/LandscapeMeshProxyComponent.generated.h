// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeMeshProxyComponent_generated_h
#error "LandscapeMeshProxyComponent.generated.h already included, missing '#pragma once' in LandscapeMeshProxyComponent.h"
#endif
#define LANDSCAPE_LandscapeMeshProxyComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeMeshProxyComponent(); \
	friend struct Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeMeshProxyComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeMeshProxyComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeMeshProxyComponent(); \
	friend struct Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeMeshProxyComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeMeshProxyComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeMeshProxyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMeshProxyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeMeshProxyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshProxyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeMeshProxyComponent(ULandscapeMeshProxyComponent&&); \
	LANDSCAPE_API ULandscapeMeshProxyComponent(const ULandscapeMeshProxyComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeMeshProxyComponent(ULandscapeMeshProxyComponent&&); \
	LANDSCAPE_API ULandscapeMeshProxyComponent(const ULandscapeMeshProxyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeMeshProxyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshProxyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMeshProxyComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LandscapeGuid() { return STRUCT_OFFSET(ULandscapeMeshProxyComponent, LandscapeGuid); } \
	FORCEINLINE static uint32 __PPO__ProxyComponentBases() { return STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentBases); } \
	FORCEINLINE static uint32 __PPO__ProxyLOD() { return STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyLOD); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_15_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeMeshProxyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
