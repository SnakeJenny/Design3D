// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaSoundComponentSpectralData;
enum class EMediaSoundComponentFFTSize : uint8;
class UMediaPlayer;
struct FSoundAttenuationSettings;
#ifdef MEDIAASSETS_MediaSoundComponent_generated_h
#error "MediaSoundComponent.generated.h already included, missing '#pragma once' in MediaSoundComponent.h"
#endif
#define MEDIAASSETS_MediaSoundComponent_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics; \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


template<> MEDIAASSETS_API UScriptStruct* StaticStruct<struct FMediaSoundComponentSpectralData>();

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnvelopeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnvelopeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnvelopeFollowingsettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AttackTimeMsec); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ReleaseTimeMsec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnvelopeFollowingsettings(Z_Param_AttackTimeMsec,Z_Param_ReleaseTimeMsec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableEnvelopeFollowing) \
	{ \
		P_GET_UBOOL(Z_Param_bInEnvelopeFollowing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableEnvelopeFollowing(Z_Param_bInEnvelopeFollowing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectralData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetSpectralData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectralAnalysisSettings) \
	{ \
		P_GET_TARRAY(float,Z_Param_InFrequenciesToAnalyze); \
		P_GET_ENUM(EMediaSoundComponentFFTSize,Z_Param_InFFTSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpectralAnalysisSettings(Z_Param_InFrequenciesToAnalyze,EMediaSoundComponentFFTSize(Z_Param_InFFTSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableSpectralAnalysis) \
	{ \
		P_GET_UBOOL(Z_Param_bInSpectralAnalysisEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableSpectralAnalysis(Z_Param_bInSpectralAnalysisEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnvelopeValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnvelopeValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnvelopeFollowingsettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AttackTimeMsec); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ReleaseTimeMsec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnvelopeFollowingsettings(Z_Param_AttackTimeMsec,Z_Param_ReleaseTimeMsec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableEnvelopeFollowing) \
	{ \
		P_GET_UBOOL(Z_Param_bInEnvelopeFollowing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableEnvelopeFollowing(Z_Param_bInEnvelopeFollowing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectralData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetSpectralData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpectralAnalysisSettings) \
	{ \
		P_GET_TARRAY(float,Z_Param_InFrequenciesToAnalyze); \
		P_GET_ENUM(EMediaSoundComponentFFTSize,Z_Param_InFFTSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpectralAnalysisSettings(Z_Param_InFrequenciesToAnalyze,EMediaSoundComponentFFTSize(Z_Param_InFFTSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableSpectralAnalysis) \
	{ \
		P_GET_UBOOL(Z_Param_bInSpectralAnalysisEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableSpectralAnalysis(Z_Param_bInSpectralAnalysisEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend struct Z_Construct_UClass_UMediaSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend struct Z_Construct_UClass_UMediaSoundComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_72_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaSoundComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h


#define FOREACH_ENUM_EMEDIASOUNDCOMPONENTFFTSIZE(op) \
	op(EMediaSoundComponentFFTSize::Min_64) \
	op(EMediaSoundComponentFFTSize::Small_256) \
	op(EMediaSoundComponentFFTSize::Medium_512) \
	op(EMediaSoundComponentFFTSize::Large_1024) 

enum class EMediaSoundComponentFFTSize : uint8;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundComponentFFTSize>();

#define FOREACH_ENUM_EMEDIASOUNDCHANNELS(op) \
	op(EMediaSoundChannels::Mono) \
	op(EMediaSoundChannels::Stereo) \
	op(EMediaSoundChannels::Surround) 

enum class EMediaSoundChannels;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
