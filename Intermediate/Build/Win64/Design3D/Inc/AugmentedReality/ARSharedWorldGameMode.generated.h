// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARSharedWorldGameState;
#ifdef AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h
#error "ARSharedWorldGameMode.generated.h already included, missing '#pragma once' in ARSharedWorldGameMode.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSharedWorldReplicationState>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetARSharedWorldGameState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AARSharedWorldGameState**)Z_Param__Result=P_THIS->GetARSharedWorldGameState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetARWorldSharingIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetARWorldSharingIsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetARSharedWorldData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_ARWorldData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetARSharedWorldData(Z_Param_ARWorldData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewImageData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_ImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewImageData(Z_Param_ImageData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetARSharedWorldGameState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AARSharedWorldGameState**)Z_Param__Result=P_THIS->GetARSharedWorldGameState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetARWorldSharingIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetARWorldSharingIsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetARSharedWorldData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_ARWorldData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetARSharedWorldData(Z_Param_ARWorldData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewImageData) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_ImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewImageData(Z_Param_ImageData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AARSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldGameMode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AARSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldGameMode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldGameMode(AARSharedWorldGameMode&&); \
	NO_API AARSharedWorldGameMode(const AARSharedWorldGameMode&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldGameMode(AARSharedWorldGameMode&&); \
	NO_API AARSharedWorldGameMode(const AARSharedWorldGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameMode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_32_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARSharedWorldGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARSharedWorldGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
