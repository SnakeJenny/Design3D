// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FLinearColor;
class USceneComponent;
class UARTrackedGeometry;
enum class EARTrackingState : uint8;
struct FTransform;
#ifdef AUGMENTEDREALITY_ARPin_generated_h
#error "ARPin.generated.h already included, missing '#pragma once' in ARPin.h"
#endif
#define AUGMENTEDREALITY_ARPin_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDraw) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugDraw(Z_Param_World,Z_Param_Out_Color,Z_Param_Scale,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPinnedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetPinnedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTrackedGeometry**)Z_Param__Result=P_THIS->GetTrackedGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugDraw) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PersistForSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugDraw(Z_Param_World,Z_Param_Out_Color,Z_Param_Scale,Z_Param_PersistForSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPinnedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetPinnedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARTrackedGeometry**)Z_Param__Result=P_THIS->GetTrackedGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedGeometry() { return STRUCT_OFFSET(UARPin, TrackedGeometry); } \
	FORCEINLINE static uint32 __PPO__PinnedComponent() { return STRUCT_OFFSET(UARPin, PinnedComponent); } \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(UARPin, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__LocalToAlignedTrackingTransform() { return STRUCT_OFFSET(UARPin, LocalToAlignedTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackingState() { return STRUCT_OFFSET(UARPin, TrackingState); } \
	FORCEINLINE static uint32 __PPO__OnARTrackingStateChanged() { return STRUCT_OFFSET(UARPin, OnARTrackingStateChanged); } \
	FORCEINLINE static uint32 __PPO__OnARTransformUpdated() { return STRUCT_OFFSET(UARPin, OnARTransformUpdated); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_11_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARPin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
