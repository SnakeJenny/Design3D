// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ENGINE_PawnNoiseEmitterComponent_generated_h
#error "PawnNoiseEmitterComponent.generated.h already included, missing '#pragma once' in PawnNoiseEmitterComponent.h"
#endif
#define ENGINE_PawnNoiseEmitterComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NoiseLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeNoise(Z_Param_NoiseMaker,Z_Param_Loudness,Z_Param_Out_NoiseLocation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NoiseLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeNoise(Z_Param_NoiseMaker,Z_Param_Loudness,Z_Param_Out_NoiseLocation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnNoiseEmitterComponent(); \
	friend struct Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnNoiseEmitterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPawnNoiseEmitterComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPawnNoiseEmitterComponent(); \
	friend struct Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnNoiseEmitterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPawnNoiseEmitterComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnNoiseEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnNoiseEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnNoiseEmitterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnNoiseEmitterComponent(UPawnNoiseEmitterComponent&&); \
	NO_API UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnNoiseEmitterComponent(UPawnNoiseEmitterComponent&&); \
	NO_API UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnNoiseEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnNoiseEmitterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnNoiseEmitterComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastRemoteNoiseVolume() { return STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseVolume); } \
	FORCEINLINE static uint32 __PPO__LastRemoteNoiseTime() { return STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseTime); } \
	FORCEINLINE static uint32 __PPO__LastLocalNoiseVolume() { return STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseVolume); } \
	FORCEINLINE static uint32 __PPO__LastLocalNoiseTime() { return STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseTime); }


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnNoiseEmitterComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPawnNoiseEmitterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
