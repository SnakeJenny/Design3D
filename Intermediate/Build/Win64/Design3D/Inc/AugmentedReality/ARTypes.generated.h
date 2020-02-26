// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EARTrackingState : uint8;
enum class EARCandidateImageOrientation : uint8;
class UTexture2D;
struct FBox;
#ifdef AUGMENTEDREALITY_ARTypes_generated_h
#error "ARTypes.generated.h already included, missing '#pragma once' in ARTypes.h"
#endif
#define AUGMENTEDREALITY_ARTypes_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_343_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARVideoFormat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARVideoFormat>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSessionStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSessionStatus>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_137_DELEGATE \
struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms \
{ \
	FTransform OldToNewTransform; \
}; \
static inline void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform) \
{ \
	_Script_AugmentedReality_eventOnARTransformUpdated_Parms Parms; \
	Parms.OldToNewTransform=OldToNewTransform; \
	OnARTransformUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_136_DELEGATE \
struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms \
{ \
	EARTrackingState NewTrackingState; \
}; \
static inline void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState) \
{ \
	_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms Parms; \
	Parms.NewTrackingState=NewTrackingState; \
	OnARTrackingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_139_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTypesDummyClass>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARCandidateImageOrientation*)Z_Param__Result=P_THIS->GetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPhysicalHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPhysicalWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCandidateTexture(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARCandidateImageOrientation*)Z_Param__Result=P_THIS->GetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPhysicalHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPhysicalWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCandidateTexture(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CandidateTexture() { return STRUCT_OFFSET(UARCandidateImage, CandidateTexture); } \
	FORCEINLINE static uint32 __PPO__FriendlyName() { return STRUCT_OFFSET(UARCandidateImage, FriendlyName); } \
	FORCEINLINE static uint32 __PPO__Width() { return STRUCT_OFFSET(UARCandidateImage, Width); } \
	FORCEINLINE static uint32 __PPO__Height() { return STRUCT_OFFSET(UARCandidateImage, Height); } \
	FORCEINLINE static uint32 __PPO__Orientation() { return STRUCT_OFFSET(UARCandidateImage, Orientation); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_165_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateImage>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundingBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBoundingBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundingBox(Z_Param_Out_InBoundingBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCandidateObjectData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCandidateObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCandidateObjectData(Z_Param_Out_InCandidateObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateObjectData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetCandidateObjectData(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundingBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBoundingBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundingBox(Z_Param_Out_InBoundingBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCandidateObjectData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCandidateObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCandidateObjectData(Z_Param_Out_InCandidateObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCandidateObjectData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetCandidateObjectData(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CandidateObjectData() { return STRUCT_OFFSET(UARCandidateObject, CandidateObjectData); } \
	FORCEINLINE static uint32 __PPO__FriendlyName() { return STRUCT_OFFSET(UARCandidateObject, FriendlyName); } \
	FORCEINLINE static uint32 __PPO__BoundingBox() { return STRUCT_OFFSET(UARCandidateObject, BoundingBox); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_233_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_237_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h


#define FOREACH_ENUM_EARCANDIDATEIMAGEORIENTATION(op) \
	op(EARCandidateImageOrientation::Landscape) \
	op(EARCandidateImageOrientation::Portrait) 

enum class EARCandidateImageOrientation : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCandidateImageOrientation>();

#define FOREACH_ENUM_EARWORLDMAPPINGSTATE(op) \
	op(EARWorldMappingState::NotAvailable) \
	op(EARWorldMappingState::StillMappingNotRelocalizable) \
	op(EARWorldMappingState::StillMappingRelocalizable) \
	op(EARWorldMappingState::Mapped) 

enum class EARWorldMappingState : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldMappingState>();

#define FOREACH_ENUM_EARSESSIONSTATUS(op) \
	op(EARSessionStatus::NotStarted) \
	op(EARSessionStatus::Running) \
	op(EARSessionStatus::NotSupported) \
	op(EARSessionStatus::FatalError) \
	op(EARSessionStatus::PermissionNotGranted) \
	op(EARSessionStatus::UnsupportedConfiguration) \
	op(EARSessionStatus::Other) 

enum class EARSessionStatus : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionStatus>();

#define FOREACH_ENUM_EARTRACKINGQUALITY(op) \
	op(EARTrackingQuality::NotTracking) \
	op(EARTrackingQuality::OrientationOnly) \
	op(EARTrackingQuality::OrientationAndPosition) 

enum class EARTrackingQuality : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQuality>();

#define FOREACH_ENUM_EARLINETRACECHANNELS(op) \
	op(EARLineTraceChannels::None) \
	op(EARLineTraceChannels::FeaturePoint) \
	op(EARLineTraceChannels::GroundPlane) \
	op(EARLineTraceChannels::PlaneUsingExtent) \
	op(EARLineTraceChannels::PlaneUsingBoundaryPolygon) 

enum class EARLineTraceChannels : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLineTraceChannels>();

#define FOREACH_ENUM_EARTRACKINGSTATE(op) \
	op(EARTrackingState::Unknown) \
	op(EARTrackingState::Tracking) \
	op(EARTrackingState::NotTracking) \
	op(EARTrackingState::StoppedTracking) 

enum class EARTrackingState : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
