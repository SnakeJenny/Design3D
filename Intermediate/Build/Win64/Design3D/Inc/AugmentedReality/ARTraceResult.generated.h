// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUGMENTEDREALITY_ARTraceResult_generated_h
#error "ARTraceResult.generated.h already included, missing '#pragma once' in ARTraceResult.h"
#endif
#define AUGMENTEDREALITY_ARTraceResult_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARTraceResult_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__DistanceFromCamera() { return STRUCT_OFFSET(FARTraceResult, DistanceFromCamera); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(FARTraceResult, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(FARTraceResult, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackedGeometry() { return STRUCT_OFFSET(FARTraceResult, TrackedGeometry); }


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARTraceResult>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTraceResultDummy(); \
	friend struct Z_Construct_UClass_UARTraceResultDummy_Statics; \
public: \
	DECLARE_CLASS(UARTraceResultDummy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultDummy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUARTraceResultDummy(); \
	friend struct Z_Construct_UClass_UARTraceResultDummy_Statics; \
public: \
	DECLARE_CLASS(UARTraceResultDummy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultDummy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultDummy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultDummy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultDummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultDummy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultDummy(UARTraceResultDummy&&); \
	NO_API UARTraceResultDummy(const UARTraceResultDummy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultDummy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultDummy(UARTraceResultDummy&&); \
	NO_API UARTraceResultDummy(const UARTraceResultDummy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultDummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultDummy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultDummy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_69_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTraceResultDummy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
