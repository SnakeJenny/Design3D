// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteriorSettings;
struct FReverbSettings;
#ifdef ENGINE_AudioVolume_generated_h
#error "AudioVolume.generated.h already included, missing '#pragma once' in AudioVolume.h"
#endif
#define ENGINE_AudioVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteriorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInteriorSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReverbSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReverbSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_bEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInteriorSettings) \
	{ \
		P_GET_STRUCT_REF(FInteriorSettings,Z_Param_Out_NewInteriorSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInteriorSettings(Z_Param_Out_NewInteriorSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverbSettings) \
	{ \
		P_GET_STRUCT_REF(FReverbSettings,Z_Param_Out_NewReverbSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bNewEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bNewEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_bEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInteriorSettings) \
	{ \
		P_GET_STRUCT_REF(FInteriorSettings,Z_Param_Out_NewInteriorSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInteriorSettings(Z_Param_Out_NewInteriorSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReverbSettings) \
	{ \
		P_GET_STRUCT_REF(FReverbSettings,Z_Param_Out_NewReverbSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bNewEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bNewEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioVolume(); \
	friend struct Z_Construct_UClass_AAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAudioVolume)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_INCLASS \
private: \
	static void StaticRegisterNativesAAudioVolume(); \
	friend struct Z_Construct_UClass_AAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAudioVolume)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioVolume(AAudioVolume&&); \
	NO_API AAudioVolume(const AAudioVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioVolume(AAudioVolume&&); \
	NO_API AAudioVolume(const AAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioVolume)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAudioVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(AAudioVolume, Settings); } \
	FORCEINLINE static uint32 __PPO__AmbientZoneSettings() { return STRUCT_OFFSET(AAudioVolume, AmbientZoneSettings); }


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_201_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_204_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAudioVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h


#define FOREACH_ENUM_REVERBPRESET(op) \
	op(REVERB_Default) \
	op(REVERB_Bathroom) \
	op(REVERB_StoneRoom) \
	op(REVERB_Auditorium) \
	op(REVERB_ConcertHall) \
	op(REVERB_Cave) \
	op(REVERB_Hallway) \
	op(REVERB_StoneCorridor) \
	op(REVERB_Alley) \
	op(REVERB_Forest) \
	op(REVERB_City) \
	op(REVERB_Mountains) \
	op(REVERB_Quarry) \
	op(REVERB_Plain) \
	op(REVERB_ParkingLot) \
	op(REVERB_SewerPipe) \
	op(REVERB_Underwater) \
	op(REVERB_SmallRoom) \
	op(REVERB_MediumRoom) \
	op(REVERB_LargeRoom) \
	op(REVERB_MediumHall) \
	op(REVERB_LargeHall) \
	op(REVERB_Plate) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
