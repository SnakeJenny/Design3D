// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBox2D;
struct FVector2D;
class UTexture;
#ifdef ENGINE_StereoLayerComponent_generated_h
#error "StereoLayerComponent.generated.h already included, missing '#pragma once' in StereoLayerComponent.h"
#endif
#define ENGINE_StereoLayerComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MarkTextureForUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_InPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUVRect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=P_THIS->GetUVRect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUVRect) \
	{ \
		P_GET_STRUCT(FBox2D,Z_Param_InUVRect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUVRect(Z_Param_InUVRect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuadSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetQuadSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuadSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InQuadSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuadSize(Z_Param_InQuadSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->GetTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_InTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTexture(Z_Param_InTexture); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MarkTextureForUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_InPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUVRect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=P_THIS->GetUVRect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUVRect) \
	{ \
		P_GET_STRUCT(FBox2D,Z_Param_InUVRect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUVRect(Z_Param_InUVRect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuadSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetQuadSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuadSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InQuadSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuadSize(Z_Param_InQuadSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->GetTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_InTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTexture(Z_Param_InTexture); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(UStereoLayerComponent, Texture); } \
	FORCEINLINE static uint32 __PPO__LeftTexture() { return STRUCT_OFFSET(UStereoLayerComponent, LeftTexture); } \
	FORCEINLINE static uint32 __PPO__QuadSize() { return STRUCT_OFFSET(UStereoLayerComponent, QuadSize); } \
	FORCEINLINE static uint32 __PPO__UVRect() { return STRUCT_OFFSET(UStereoLayerComponent, UVRect); } \
	FORCEINLINE static uint32 __PPO__CylinderRadius() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderRadius); } \
	FORCEINLINE static uint32 __PPO__CylinderOverlayArc() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderOverlayArc); } \
	FORCEINLINE static uint32 __PPO__CylinderHeight() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderHeight); } \
	FORCEINLINE static uint32 __PPO__StereoLayerType() { return STRUCT_OFFSET(UStereoLayerComponent, StereoLayerType); } \
	FORCEINLINE static uint32 __PPO__StereoLayerShape() { return STRUCT_OFFSET(UStereoLayerComponent, StereoLayerShape); } \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(UStereoLayerComponent, Priority); }


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_47_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StereoLayerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h


#define FOREACH_ENUM_ESTEREOLAYERSHAPE(op) \
	op(SLSH_QuadLayer) \
	op(SLSH_CylinderLayer) \
	op(SLSH_CubemapLayer) 
#define FOREACH_ENUM_ESTEREOLAYERTYPE(op) \
	op(SLT_WorldLocked) \
	op(SLT_TrackerLocked) \
	op(SLT_FaceLocked) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
