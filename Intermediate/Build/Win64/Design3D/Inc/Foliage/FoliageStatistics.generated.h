// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UStaticMesh;
struct FBox;
struct FVector;
#ifdef FOLIAGE_FoliageStatistics_generated_h
#error "FoliageStatistics.generated.h already included, missing '#pragma once' in FoliageStatistics.h"
#endif
#define FOLIAGE_FoliageStatistics_generated_h

#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FBox,Z_Param_Box); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingBoxCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FBox,Z_Param_Box); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingBoxCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend struct Z_Construct_UClass_UFoliageStatistics_Statics; \
public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics)


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend struct Z_Construct_UClass_UFoliageStatistics_Statics; \
public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics)


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageStatistics(UFoliageStatistics&&); \
	NO_API UFoliageStatistics(const UFoliageStatistics&); \
public:


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageStatistics(UFoliageStatistics&&); \
	NO_API UFoliageStatistics(const UFoliageStatistics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics)


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_12_PROLOG
#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageStatistics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UFoliageStatistics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
