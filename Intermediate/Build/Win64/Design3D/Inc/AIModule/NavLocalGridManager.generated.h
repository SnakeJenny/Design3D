// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
struct FRotator;
#ifdef AIMODULE_NavLocalGridManager_generated_h
#error "NavLocalGridManager.generated.h already included, missing '#pragma once' in NavLocalGridManager.h"
#endif
#define AIMODULE_NavLocalGridManager_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindLocalNavigationGridPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavLocalGridManager::FindLocalNavigationGridPath(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_PathPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveLocalNavigationGrid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridId); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavLocalGridManager::RemoveLocalNavigationGrid(Z_Param_WorldContextObject,Z_Param_GridId,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForCapsule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForCapsule(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_CapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForBox(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Extent,Z_Param_Rotation,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoints) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoints(Z_Param_WorldContextObject,Z_Param_Out_Locations,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoint(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalNavigationGridDensity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CellSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavLocalGridManager::SetLocalNavigationGridDensity(Z_Param_WorldContextObject,Z_Param_CellSize); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindLocalNavigationGridPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavLocalGridManager::FindLocalNavigationGridPath(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_PathPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveLocalNavigationGrid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridId); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavLocalGridManager::RemoveLocalNavigationGrid(Z_Param_WorldContextObject,Z_Param_GridId,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForCapsule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForCapsule(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_CapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForBox(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Extent,Z_Param_Rotation,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoints) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoints(Z_Param_WorldContextObject,Z_Param_Out_Locations,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_UBOOL(Z_Param_bRebuildGrids); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoint(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalNavigationGridDensity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CellSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNavLocalGridManager::SetLocalNavigationGridDensity(Z_Param_WorldContextObject,Z_Param_CellSize); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLocalGridManager(); \
	friend struct Z_Construct_UClass_UNavLocalGridManager_Statics; \
public: \
	DECLARE_CLASS(UNavLocalGridManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUNavLocalGridManager(); \
	friend struct Z_Construct_UClass_UNavLocalGridManager_Statics; \
public: \
	DECLARE_CLASS(UNavLocalGridManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLocalGridManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLocalGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLocalGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLocalGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLocalGridManager(UNavLocalGridManager&&); \
	NO_API UNavLocalGridManager(const UNavLocalGridManager&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLocalGridManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLocalGridManager(UNavLocalGridManager&&); \
	NO_API UNavLocalGridManager(const UNavLocalGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLocalGridManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLocalGridManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLocalGridManager)


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_26_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLocalGridManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UNavLocalGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
