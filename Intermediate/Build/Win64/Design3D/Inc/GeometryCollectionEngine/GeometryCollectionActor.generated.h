// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FHitResult;
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h
#error "GeometryCollectionActor.generated.h already included, missing '#pragma once' in GeometryCollectionActor.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaycastSingle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RaycastSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaycastSingle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RaycastSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryCollectionActor(); \
	friend struct Z_Construct_UClass_AGeometryCollectionActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCollectionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCollectionActor)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCollectionActor(); \
	friend struct Z_Construct_UClass_AGeometryCollectionActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCollectionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCollectionActor)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCollectionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCollectionActor(AGeometryCollectionActor&&); \
	NO_API AGeometryCollectionActor(const AGeometryCollectionActor&); \
public:


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCollectionActor(AGeometryCollectionActor&&); \
	NO_API AGeometryCollectionActor(const AGeometryCollectionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCollectionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionActor)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_PROLOG
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_INCLASS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCollectionActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class AGeometryCollectionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
