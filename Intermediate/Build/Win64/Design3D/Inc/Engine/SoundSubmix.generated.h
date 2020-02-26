// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
class UObject;
enum class EAudioRecordingExportType : uint8;
#ifdef ENGINE_SoundSubmix_generated_h
#error "SoundSubmix.generated.h already included, missing '#pragma once' in SoundSubmix.h"
#endif
#define ENGINE_SoundSubmix_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundSubmixSendInfo>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_83_DELEGATE \
struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms \
{ \
	TArray<float> Envelope; \
}; \
static inline void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope) \
{ \
	_Script_Engine_eventOnSubmixEnvelopeBP_Parms Parms; \
	Parms.Envelope=Envelope; \
	OnSubmixEnvelopeBP.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_81_DELEGATE \
struct _Script_Engine_eventOnSubmixEnvelope_Parms \
{ \
	TArray<float> Envelope; \
}; \
static inline void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope) \
{ \
	_Script_Engine_eventOnSubmixEnvelope_Parms Parms; \
	Parms.Envelope=Envelope; \
	OnSubmixEnvelope.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_76_DELEGATE \
struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms \
{ \
	const USoundWave* ResultingSoundWave; \
}; \
static inline void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave) \
{ \
	_Script_Engine_eventOnSubmixRecordedFileDone_Parms Parms; \
	Parms.ResultingSoundWave=ResultingSoundWave; \
	OnSubmixRecordedFileDone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnSubmixEnvelopeBP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddEnvelopeFollowerDelegate(Z_Param_WorldContextObject,FOnSubmixEnvelopeBP(Z_Param_Out_OnSubmixEnvelopeBP)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopEnvelopeFollowing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopEnvelopeFollowing(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEnvelopeFollowing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartEnvelopeFollowing(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_ExistingSoundWaveToOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExpectedDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnSubmixEnvelopeBP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddEnvelopeFollowerDelegate(Z_Param_WorldContextObject,FOnSubmixEnvelopeBP(Z_Param_Out_OnSubmixEnvelopeBP)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopEnvelopeFollowing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopEnvelopeFollowing(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEnvelopeFollowing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartEnvelopeFollowing(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_ExistingSoundWaveToOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExpectedDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_99_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h


#define FOREACH_ENUM_EAUDIORECORDINGEXPORTTYPE(op) \
	op(EAudioRecordingExportType::SoundWave) \
	op(EAudioRecordingExportType::WavFile) 

enum class EAudioRecordingExportType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>();

#define FOREACH_ENUM_ESUBMIXCHANNELFORMAT(op) \
	op(ESubmixChannelFormat::Device) \
	op(ESubmixChannelFormat::Stereo) \
	op(ESubmixChannelFormat::Quad) \
	op(ESubmixChannelFormat::FiveDotOne) \
	op(ESubmixChannelFormat::SevenDotOne) \
	op(ESubmixChannelFormat::Ambisonics) \
	op(ESubmixChannelFormat::Count) 

enum class ESubmixChannelFormat : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESubmixChannelFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
