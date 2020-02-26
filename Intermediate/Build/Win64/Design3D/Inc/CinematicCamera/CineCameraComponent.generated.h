// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CINEMATICCAMERA_CineCameraComponent_generated_h
#error "CineCameraComponent.generated.h already included, missing '#pragma once' in CineCameraComponent.h"
#endif
#define CINEMATICCAMERA_CineCameraComponent_generated_h

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFocusSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraTrackingFocusSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedLensPreset>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLensSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedFilmbackPreset>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFilmbackSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLensPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLensPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLensPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmbackPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilmbackPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmbackPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFilmbackPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLensPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLensPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLensPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmbackPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilmbackPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmbackPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFilmbackPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public:


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineCameraComponent)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FilmbackPresets() { return STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets); } \
	FORCEINLINE static uint32 __PPO__LensPresets() { return STRUCT_OFFSET(UCineCameraComponent, LensPresets); } \
	FORCEINLINE static uint32 __PPO__DefaultFilmbackPresetName() { return STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName); } \
	FORCEINLINE static uint32 __PPO__DefaultLensPresetName() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFocalLength() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFStop() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop); }


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_215_PROLOG
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_RPC_WRAPPERS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_INCLASS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class UCineCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h


#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::None) \
	op(ECameraFocusMethod::Manual) \
	op(ECameraFocusMethod::Tracking) 

enum class ECameraFocusMethod : uint8;
template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
