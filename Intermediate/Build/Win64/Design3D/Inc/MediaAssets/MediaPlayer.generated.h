// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
struct FRotator;
enum class EMediaPlayerTrack : uint8;
class UObject;
struct FLatentActionInfo;
class UMediaSource;
struct FMediaPlayerOptions;
class UMediaPlaylist;
struct FFloatRange;
struct FIntPoint;
#ifdef MEDIAASSETS_MediaPlayer_generated_h
#error "MediaPlayer.generated.h already included, missing '#pragma once' in MediaPlayer.h"
#endif
#define MEDIAASSETS_MediaPlayer_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_35_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms \
{ \
	FString FailedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpenFailed, const FString& FailedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms Parms; \
	Parms.FailedUrl=FailedUrl; \
	OnMediaPlayerMediaOpenFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_32_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_29_DELEGATE \
static inline void FOnMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaEvent) \
{ \
	OnMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeDelay) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_TimeDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeDelay(Z_Param_TimeDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetViewRotation(Z_Param_Out_Rotation,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Horizontal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Vertical); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetViewField(Z_Param_Horizontal,Z_Param_Vertical,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex,Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNativeVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetNativeVolume(Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlockOnTime) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlockOnTime(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSourceLatent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenSourceLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_MediaSource,Z_Param_Out_Options,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSourceWithOptions) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenSourceWithOptions(Z_Param_MediaSource,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClosed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPreparing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnecting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnecting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuffering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBuffering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetTimeDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetVideoTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=P_THIS->GetVideoTrackFrameRates(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetVideoTrackDimensions(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoTrackAspectRatio(Z_Param_TrackIndex,Z_Param_FormatIndex); \
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
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastVideoSampleProcessedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetLastVideoSampleProcessedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastAudioSampleProcessedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetLastAudioSampleProcessedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedRates) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_OutRates); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupportedRates(Z_Param_Out_OutRates,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylistIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlaylistIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlaylist**)Z_Param__Result=P_THIS->GetPlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTrackFormats) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumTrackFormats(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMediaName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAudioTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioTrackSampleRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackChannels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioTrackChannels(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeDelay) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_TimeDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeDelay(Z_Param_TimeDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetViewRotation(Z_Param_Out_Rotation,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Horizontal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Vertical); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetViewField(Z_Param_Horizontal,Z_Param_Vertical,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex,Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNativeVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetNativeVolume(Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlockOnTime) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlockOnTime(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSourceLatent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenSourceLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_MediaSource,Z_Param_Out_Options,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSourceWithOptions) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_GET_STRUCT_REF(FMediaPlayerOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenSourceWithOptions(Z_Param_MediaSource,Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClosed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPreparing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnecting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnecting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuffering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBuffering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetTimeDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetVideoTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=P_THIS->GetVideoTrackFrameRates(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetVideoTrackDimensions(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoTrackAspectRatio(Z_Param_TrackIndex,Z_Param_FormatIndex); \
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
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastVideoSampleProcessedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetLastVideoSampleProcessedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastAudioSampleProcessedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetLastAudioSampleProcessedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedRates) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_OutRates); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupportedRates(Z_Param_Out_OutRates,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylistIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlaylistIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlaylist**)Z_Param__Result=P_THIS->GetPlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTrackFormats) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumTrackFormats(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMediaName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAudioTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioTrackSampleRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackChannels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioTrackChannels(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend struct Z_Construct_UClass_UMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend struct Z_Construct_UClass_UMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UMediaPlayer, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UMediaPlayer, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__TimeDelay() { return STRUCT_OFFSET(UMediaPlayer, TimeDelay); } \
	FORCEINLINE static uint32 __PPO__HorizontalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, HorizontalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__VerticalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, VerticalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__ViewRotation() { return STRUCT_OFFSET(UMediaPlayer, ViewRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerGuid() { return STRUCT_OFFSET(UMediaPlayer, PlayerGuid); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_72_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h


#define FOREACH_ENUM_EMEDIAPLAYERTRACK(op) \
	op(EMediaPlayerTrack::Audio) \
	op(EMediaPlayerTrack::Caption) \
	op(EMediaPlayerTrack::Metadata) \
	op(EMediaPlayerTrack::Script) \
	op(EMediaPlayerTrack::Subtitle) \
	op(EMediaPlayerTrack::Text) \
	op(EMediaPlayerTrack::Video) 

enum class EMediaPlayerTrack : uint8;
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaPlayerTrack>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
