// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameUserSettings;
struct FIntPoint;
#ifdef ENGINE_GameUserSettings_generated_h
#error "GameUserSettings.generated.h already included, missing '#pragma once' in GameUserSettings.h"
#endif
#define ENGINE_GameUserSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_32_DELEGATE \
static inline void FOnGameUserSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGameUserSettingsUINeedsUpdate) \
{ \
	OnGameUserSettingsUINeedsUpdate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHDREnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHDREnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHDRDisplayNits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DisplayNits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableHDRDisplayOutput(Z_Param_bEnable,Z_Param_DisplayNits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsHDRDisplayOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyHardwareBenchmarkResults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunHardwareBenchmark) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WorkScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CPUMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GPUMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunHardwareBenchmark(Z_Param_WorkScale,Z_Param_CPUMultiplier,Z_Param_GPUMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameUserSettings**)Z_Param__Result=UGameUserSettings::GetGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameUserSettings::GetSyncInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWindowMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=UGameUserSettings::GetDefaultWindowMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWindowPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultWindowPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRecommendedResolutionScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultResolutionScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultResolutionScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToDefaults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToCurrentSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetToCurrentSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_GET_UBOOL(Z_Param_bForceReload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadSettings(Z_Param_bForceReload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFoliageQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFoliageQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFoliageQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPostProcessingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessingQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPostProcessingQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisualEffectQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVisualEffectQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisualEffectQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisualEffectQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextureQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAntiAliasingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAntiAliasingQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAntiAliasingQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShadowQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewDistanceQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetViewDistanceQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewDistanceQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewDistanceQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScaleNormalized); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleNormalized(Z_Param_NewScaleNormalized); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleValueEx(Z_Param_NewScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleValue(Z_Param_NewScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleNormalized); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinScaleValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetResolutionScaleInformationEx(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionScaleInformation) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleNormalized); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_CurrentScaleValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinScaleValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetResolutionScaleInformation(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOverallScalabilityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverallScalabilityLevel(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRateLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRateLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRateLimit(Z_Param_NewLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioQualityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioQualityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioQualityLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QualityLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioQualityLevel(Z_Param_QualityLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBenchmarkFallbackValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevertVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RevertVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfirmVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfirmVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVSyncDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullscreenModeDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFullscreenModeDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsScreenResolutionDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsScreenResolutionDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicResolutionEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVSyncEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVSyncEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVSyncEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetPreferredFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullscreenMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InFullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFullscreenMode(EWindowMode::Type(Z_Param_InFullscreenMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetLastConfirmedFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenResolution) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_Resolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenResolution(Z_Param_Resolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesktopResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetDesktopResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetLastConfirmedScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyResolutionSettings) \
	{ \
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyResolutionSettings(Z_Param_bCheckForCommandLineOverrides); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyNonResolutionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyNonResolutionSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySettings) \
	{ \
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySettings(Z_Param_bCheckForCommandLineOverrides); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHDREnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHDREnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHDRDisplayNits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DisplayNits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableHDRDisplayOutput(Z_Param_bEnable,Z_Param_DisplayNits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SupportsHDRDisplayOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyHardwareBenchmarkResults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunHardwareBenchmark) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WorkScale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CPUMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GPUMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunHardwareBenchmark(Z_Param_WorkScale,Z_Param_CPUMultiplier,Z_Param_GPUMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameUserSettings**)Z_Param__Result=UGameUserSettings::GetGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UGameUserSettings::GetSyncInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWindowMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=UGameUserSettings::GetDefaultWindowMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWindowPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultWindowPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRecommendedResolutionScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultResolutionScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultResolutionScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToDefaults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToCurrentSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetToCurrentSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_GET_UBOOL(Z_Param_bForceReload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadSettings(Z_Param_bForceReload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFoliageQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFoliageQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFoliageQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPostProcessingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessingQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPostProcessingQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisualEffectQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVisualEffectQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisualEffectQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisualEffectQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextureQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAntiAliasingQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasingQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAntiAliasingQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAntiAliasingQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShadowQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewDistanceQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetViewDistanceQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewDistanceQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewDistanceQuality(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScaleNormalized); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleNormalized(Z_Param_NewScaleNormalized); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleValueEx(Z_Param_NewScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResolutionScaleValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResolutionScaleValue(Z_Param_NewScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleNormalized); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinScaleValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetResolutionScaleInformationEx(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionScaleInformation) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentScaleNormalized); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_CurrentScaleValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinScaleValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetResolutionScaleInformation(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOverallScalabilityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOverallScalabilityLevel(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRateLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRateLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRateLimit(Z_Param_NewLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioQualityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAudioQualityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioQualityLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QualityLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioQualityLevel(Z_Param_QualityLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBenchmarkFallbackValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevertVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RevertVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfirmVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfirmVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVSyncDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullscreenModeDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFullscreenModeDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsScreenResolutionDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsScreenResolutionDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicResolutionEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVSyncEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVSyncEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVSyncEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetPreferredFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullscreenMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InFullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFullscreenMode(EWindowMode::Type(Z_Param_InFullscreenMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetLastConfirmedFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullscreenMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetFullscreenMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenResolution) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_Resolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenResolution(Z_Param_Resolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesktopResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetDesktopResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetLastConfirmedScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyResolutionSettings) \
	{ \
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyResolutionSettings(Z_Param_bCheckForCommandLineOverrides); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyNonResolutionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyNonResolutionSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySettings) \
	{ \
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySettings(Z_Param_bCheckForCommandLineOverrides); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResolutionSizeX() { return STRUCT_OFFSET(UGameUserSettings, ResolutionSizeX); } \
	FORCEINLINE static uint32 __PPO__ResolutionSizeY() { return STRUCT_OFFSET(UGameUserSettings, ResolutionSizeY); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedResolutionSizeX() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeX); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedResolutionSizeY() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeY); } \
	FORCEINLINE static uint32 __PPO__WindowPosX() { return STRUCT_OFFSET(UGameUserSettings, WindowPosX); } \
	FORCEINLINE static uint32 __PPO__WindowPosY() { return STRUCT_OFFSET(UGameUserSettings, WindowPosY); } \
	FORCEINLINE static uint32 __PPO__FullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, FullscreenMode); } \
	FORCEINLINE static uint32 __PPO__LastConfirmedFullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, LastConfirmedFullscreenMode); } \
	FORCEINLINE static uint32 __PPO__PreferredFullscreenMode() { return STRUCT_OFFSET(UGameUserSettings, PreferredFullscreenMode); } \
	FORCEINLINE static uint32 __PPO__Version() { return STRUCT_OFFSET(UGameUserSettings, Version); } \
	FORCEINLINE static uint32 __PPO__AudioQualityLevel() { return STRUCT_OFFSET(UGameUserSettings, AudioQualityLevel); } \
	FORCEINLINE static uint32 __PPO__LastConfirmedAudioQualityLevel() { return STRUCT_OFFSET(UGameUserSettings, LastConfirmedAudioQualityLevel); } \
	FORCEINLINE static uint32 __PPO__FrameRateLimit() { return STRUCT_OFFSET(UGameUserSettings, FrameRateLimit); } \
	FORCEINLINE static uint32 __PPO__DesiredScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, DesiredScreenWidth); } \
	FORCEINLINE static uint32 __PPO__bUseDesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, bUseDesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__DesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, DesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedDesiredScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenWidth); } \
	FORCEINLINE static uint32 __PPO__LastUserConfirmedDesiredScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastRecommendedScreenWidth() { return STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenWidth); } \
	FORCEINLINE static uint32 __PPO__LastRecommendedScreenHeight() { return STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenHeight); } \
	FORCEINLINE static uint32 __PPO__LastCPUBenchmarkResult() { return STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkResult); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkResult() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkResult); } \
	FORCEINLINE static uint32 __PPO__LastCPUBenchmarkSteps() { return STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkSteps); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkSteps() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkSteps); } \
	FORCEINLINE static uint32 __PPO__LastGPUBenchmarkMultiplier() { return STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkMultiplier); } \
	FORCEINLINE static uint32 __PPO__bUseHDRDisplayOutput() { return STRUCT_OFFSET(UGameUserSettings, bUseHDRDisplayOutput); } \
	FORCEINLINE static uint32 __PPO__HDRDisplayOutputNits() { return STRUCT_OFFSET(UGameUserSettings, HDRDisplayOutputNits); } \
	FORCEINLINE static uint32 __PPO__OnGameUserSettingsUINeedsUpdate() { return STRUCT_OFFSET(UGameUserSettings, OnGameUserSettingsUINeedsUpdate); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_37_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameUserSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h


#define FOREACH_ENUM_EWINDOWMODE(op) \
	op(EWindowMode::Fullscreen) \
	op(EWindowMode::WindowedFullscreen) \
	op(EWindowMode::Windowed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
