// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineControlPoint_generated_h
#error "LandscapeSplineControlPoint.generated.h already included, missing '#pragma once' in LandscapeSplineControlPoint.h"
#endif
#define LANDSCAPE_LandscapeSplineControlPoint_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineConnection>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineControlPoint, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSplineControlPoint(); \
	friend struct Z_Construct_UClass_ULandscapeSplineControlPoint_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineControlPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineControlPoint) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineControlPoint(); \
	friend struct Z_Construct_UClass_ULandscapeSplineControlPoint_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineControlPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineControlPoint) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineControlPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineControlPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineControlPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(ULandscapeSplineControlPoint&&); \
	LANDSCAPE_API ULandscapeSplineControlPoint(const ULandscapeSplineControlPoint&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(ULandscapeSplineControlPoint&&); \
	LANDSCAPE_API ULandscapeSplineControlPoint(const ULandscapeSplineControlPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineControlPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineControlPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineControlPoint)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(ULandscapeSplineControlPoint, Points); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ULandscapeSplineControlPoint, Bounds); } \
	FORCEINLINE static uint32 __PPO__LocalMeshComponent() { return STRUCT_OFFSET(ULandscapeSplineControlPoint, LocalMeshComponent); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_49_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeSplineControlPoint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplineControlPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
