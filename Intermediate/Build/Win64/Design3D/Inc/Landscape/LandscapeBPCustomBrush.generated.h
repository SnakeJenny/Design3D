// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
class UTextureRenderTarget2D;
#ifdef LANDSCAPE_LandscapeBPCustomBrush_generated_h
#error "LandscapeBPCustomBrush.generated.h already included, missing '#pragma once' in LandscapeBPCustomBrush.h"
#endif
#define LANDSCAPE_LandscapeBPCustomBrush_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_EVENT_PARMS \
	struct LandscapeBlueprintCustomBrush_eventInitialize_Parms \
	{ \
		FIntPoint InLandscapeSize; \
		FIntPoint InLandscapeRenderTargetSize; \
	}; \
	struct LandscapeBlueprintCustomBrush_eventRender_Parms \
	{ \
		bool InIsHeightmap; \
		UTextureRenderTarget2D* InCombinedResult; \
		UTextureRenderTarget2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LandscapeBlueprintCustomBrush_eventRender_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintCustomBrush(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintCustomBrush, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintCustomBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintCustomBrush(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintCustomBrush, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintCustomBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintCustomBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintCustomBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintCustomBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintCustomBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintCustomBrush(ALandscapeBlueprintCustomBrush&&); \
	NO_API ALandscapeBlueprintCustomBrush(const ALandscapeBlueprintCustomBrush&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintCustomBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintCustomBrush(ALandscapeBlueprintCustomBrush&&); \
	NO_API ALandscapeBlueprintCustomBrush(const ALandscapeBlueprintCustomBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintCustomBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintCustomBrush); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintCustomBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AffectHeightmap() { return STRUCT_OFFSET(ALandscapeBlueprintCustomBrush, AffectHeightmap); } \
	FORCEINLINE static uint32 __PPO__AffectWeightmap() { return STRUCT_OFFSET(ALandscapeBlueprintCustomBrush, AffectWeightmap); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_11_PROLOG \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_EVENT_PARMS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeBlueprintCustomBrush."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeBlueprintCustomBrush>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintCustomSimulationBrush(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintCustomSimulationBrush, ALandscapeBlueprintCustomBrush, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintCustomSimulationBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintCustomSimulationBrush(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintCustomSimulationBrush, ALandscapeBlueprintCustomBrush, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintCustomSimulationBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintCustomSimulationBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintCustomSimulationBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintCustomSimulationBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintCustomSimulationBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintCustomSimulationBrush(ALandscapeBlueprintCustomSimulationBrush&&); \
	NO_API ALandscapeBlueprintCustomSimulationBrush(const ALandscapeBlueprintCustomSimulationBrush&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintCustomSimulationBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintCustomSimulationBrush(ALandscapeBlueprintCustomSimulationBrush&&); \
	NO_API ALandscapeBlueprintCustomSimulationBrush(const ALandscapeBlueprintCustomSimulationBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintCustomSimulationBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintCustomSimulationBrush); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintCustomSimulationBrush)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_69_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h_72_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeBlueprintCustomSimulationBrush."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeBlueprintCustomSimulationBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeBPCustomBrush_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
