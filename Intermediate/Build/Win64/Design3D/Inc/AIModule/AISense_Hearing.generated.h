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
class AActor;
#ifdef AIMODULE_AISense_Hearing_generated_h
#error "AISense_Hearing.generated.h already included, missing '#pragma once' in AISense_Hearing.h"
#endif
#define AIMODULE_AISense_Hearing_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAINoiseEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAINoiseEvent>();

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportNoiseEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_OBJECT(AActor,Z_Param_Instigator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAISense_Hearing::ReportNoiseEvent(Z_Param_WorldContextObject,Z_Param_NoiseLocation,Z_Param_Loudness,Z_Param_Instigator,Z_Param_MaxRange,Z_Param_Tag); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportNoiseEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_OBJECT(AActor,Z_Param_Instigator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAISense_Hearing::ReportNoiseEvent(Z_Param_WorldContextObject,Z_Param_NoiseLocation,Z_Param_Loudness,Z_Param_Instigator,Z_Param_MaxRange,Z_Param_Tag); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Hearing(); \
	friend struct Z_Construct_UClass_UAISense_Hearing_Statics; \
public: \
	DECLARE_CLASS(UAISense_Hearing, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Hearing) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Hearing(); \
	friend struct Z_Construct_UClass_UAISense_Hearing_Statics; \
public: \
	DECLARE_CLASS(UAISense_Hearing, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Hearing) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Hearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Hearing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Hearing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Hearing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Hearing(UAISense_Hearing&&); \
	NO_API UAISense_Hearing(const UAISense_Hearing&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Hearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Hearing(UAISense_Hearing&&); \
	NO_API UAISense_Hearing(const UAISense_Hearing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Hearing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Hearing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Hearing)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NoiseEvents() { return STRUCT_OFFSET(UAISense_Hearing, NoiseEvents); } \
	FORCEINLINE static uint32 __PPO__SpeedOfSoundSq() { return STRUCT_OFFSET(UAISense_Hearing, SpeedOfSoundSq); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_63_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Hearing."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Hearing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
