// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineSegment_generated_h
#error "LandscapeSplineSegment.generated.h already included, missing '#pragma once' in LandscapeSplineSegment.h"
#endif
#define LANDSCAPE_LandscapeSplineSegment_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineMeshEntry>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineSegmentConnection>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineInterpPoint>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineSegment, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend struct Z_Construct_UClass_ULandscapeSplineSegment_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend struct Z_Construct_UClass_ULandscapeSplineSegment_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SplineInfo() { return STRUCT_OFFSET(ULandscapeSplineSegment, SplineInfo); } \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(ULandscapeSplineSegment, Points); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ULandscapeSplineSegment, Bounds); } \
	FORCEINLINE static uint32 __PPO__LocalMeshComponents() { return STRUCT_OFFSET(ULandscapeSplineSegment, LocalMeshComponents); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_161_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_164_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeSplineSegment."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplineSegment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h


#define FOREACH_ENUM_LANDSCAPESPLINEMESHORIENTATION(op) \
	op(LSMO_XUp) \
	op(LSMO_YUp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
