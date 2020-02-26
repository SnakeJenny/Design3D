// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FPrimaryAssetType;
struct FPrimaryAssetId;
struct FUserActivity;
class APlayerController;
struct FIntPoint;
class AActor;
struct FVector;
class USceneComponent;
struct FDebugFloatHistory;
struct FVector2D;
struct FLinearColor;
struct FTransform;
class ACameraActor;
struct FPlane;
struct FRotator;
class UPrimitiveComponent;
struct FHitResult;
class IInterface;
struct FTimerHandle;
struct FLatentActionInfo;
struct FSoftClassPath;
struct FSoftObjectPath;
class UInterface;
struct FCollisionProfileName;
struct FGenericStruct;
#ifdef ENGINE_KismetSystemLibrary_generated_h
#error "KismetSystemLibrary.generated.h already included, missing '#pragma once' in KismetSystemLibrary.h"
#endif
#define ENGINE_KismetSystemLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenericStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGenericStruct>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_274_DELEGATE \
struct KismetSystemLibrary_eventOnAssetClassLoaded_Parms \
{ \
	TSubclassOf<UObject>  Loaded; \
}; \
static inline void FOnAssetClassLoaded_DelegateWrapper(const FScriptDelegate& OnAssetClassLoaded, TSubclassOf<UObject>  Loaded) \
{ \
	KismetSystemLibrary_eventOnAssetClassLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnAssetClassLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_266_DELEGATE \
struct KismetSystemLibrary_eventOnAssetLoaded_Parms \
{ \
	UObject* Loaded; \
}; \
static inline void FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Loaded) \
{ \
	KismetSystemLibrary_eventOnAssetLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnAssetLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetsWithBundleState) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_RequiredBundles); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_ExcludedBundles); \
		P_GET_TARRAY_REF(FPrimaryAssetType,Z_Param_Out_ValidTypes); \
		P_GET_UBOOL(Z_Param_bForceCurrentState); \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_OutPrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetPrimaryAssetsWithBundleState(Z_Param_Out_RequiredBundles,Z_Param_Out_ExcludedBundles,Z_Param_Out_ValidTypes,Z_Param_bForceCurrentState,Z_Param_Out_OutPrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBundleState) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_GET_UBOOL(Z_Param_bForceCurrentState); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutBundles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetCurrentBundleState(Z_Param_PrimaryAssetId,Z_Param_bForceCurrentState,Z_Param_Out_OutBundles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadPrimaryAssetList) \
	{ \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_PrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnloadPrimaryAssetList(Z_Param_Out_PrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadPrimaryAsset) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnloadPrimaryAsset(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_PrimaryAssetType(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_PrimaryAssetType(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_PrimaryAssetTypeToString) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_PrimaryAssetTypeToString(Z_Param_PrimaryAssetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidPrimaryAssetType(Z_Param_PrimaryAssetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_PrimaryAssetId(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_PrimaryAssetId(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_PrimaryAssetIdToString) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_PrimaryAssetIdToString(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdList) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_OutPrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetPrimaryAssetIdList(Z_Param_PrimaryAssetType,Z_Param_Out_OutPrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftClassReference) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(Z_Param_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference(Z_Param_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoftClassReferenceFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoftObjectReferenceFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UKismetSystemLibrary::GetClassFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::GetObjectFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransactObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::TransactObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelTransaction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CancelTransaction(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndTransaction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::EndTransaction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTransaction) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Context); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Description); \
		P_GET_OBJECT(UObject,Z_Param_PrimaryObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::BeginTransaction(Z_Param_Context,Z_Param_Description,Z_Param_PrimaryObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnattended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsUnattended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetCommandLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserActivity) \
	{ \
		P_GET_STRUCT_REF(FUserActivity,Z_Param_Out_UserActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetUserActivity(Z_Param_Out_UserActivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterForRemoteNotifications) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnregisterForRemoteNotifications(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForRemoteNotifications) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::RegisterForRemoteNotifications(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalCurrencySymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetLocalCurrencySymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalCurrencyCode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetLocalCurrencyCode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultLocale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDefaultLocale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDefaultLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreferredLanguages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetSystemLibrary::GetPreferredLanguages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuppressViewportTransitionMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSuppressViewportTransitionMessage(Z_Param_WorldContextObject,Z_Param_bState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadControllerName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGamepadControllerName(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerAssignedToGamepad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsControllerAssignedToGamepad(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamepadAssignmentToController) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ResetGamepadAssignmentToController(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamepadAssignments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ResetGamepadAssignments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolumeButtonsHandledBySystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetVolumeButtonsHandledBySystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeButtonsHandledBySystem) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetVolumeButtonsHandledBySystem(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControlScreensaver) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowScreenSaver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ControlScreensaver(Z_Param_bAllowScreenSaver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsScreensaverEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsScreensaverEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoggedIn) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsLoggedIn(Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowPlatformSpecificAchievementsScreen) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowPlatformSpecificLeaderboardScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInterstitialAd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowInterstitialAd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialAdRequested) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsInterstitialAdRequested(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialAdAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsInterstitialAdAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadInterstitialAd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AdIdIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadInterstitialAd(Z_Param_AdIdIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceCloseAdBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ForceCloseAdBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAdBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::HideAdBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdIDCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetAdIDCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAdBanner) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AdIdIndex); \
		P_GET_UBOOL(Z_Param_bShowOnBottomOfScreen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowAdBanner(Z_Param_AdIdIndex,Z_Param_bShowOnBottomOfScreen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectGarbage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CollectGarbage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanLaunchURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CanLaunchURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LaunchURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinYResolutionFor3DView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetMinYResolutionFor3DView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinYResolutionForUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetMinYResolutionForUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvenientWindowedResolutions) \
	{ \
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetConvenientWindowedResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedFullscreenResolutions) \
	{ \
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetSupportedFullscreenResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderingMaterialQualityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetRenderingMaterialQualityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderingDetailMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetRenderingDetailMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorBounds) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetActorBounds(Z_Param_Actor,Z_Param_Out_Origin,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentBounds) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetComponentBounds(Z_Param_Component,Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCopyForUndoBuffer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CreateCopyForUndoBuffer(Z_Param_ObjectToModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatHistorySample) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDebugFloatHistory*)Z_Param__Result=UKismetSystemLibrary::AddFloatHistorySample(Z_Param_Value,Z_Param_Out_FloatHistory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_GET_STRUCT(FVector,Z_Param_DrawLocation); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_DrawColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFloatHistoryLocation(Z_Param_WorldContextObject,Z_Param_Out_FloatHistory,Z_Param_DrawLocation,Z_Param_DrawSize,Z_Param_DrawColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DrawTransform); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_DrawColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFloatHistoryTransform(Z_Param_WorldContextObject,Z_Param_Out_FloatHistory,Z_Param_Out_DrawTransform,Z_Param_DrawSize,Z_Param_DrawColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCamera) \
	{ \
		P_GET_OBJECT(ACameraActor,Z_Param_CameraActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_CameraColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCamera(Z_Param_CameraActor,Z_Param_CameraColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFrustum) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FrustumTransform); \
		P_GET_STRUCT(FLinearColor,Z_Param_FrustumColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFrustum(Z_Param_WorldContextObject,Z_Param_Out_FrustumTransform,Z_Param_FrustumColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPersistentDebugLines) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::FlushPersistentDebugLines(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugPlane) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_PlaneCoordinates); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_GET_STRUCT(FLinearColor,Z_Param_PlaneColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugPlane(Z_Param_WorldContextObject,Z_Param_Out_PlaneCoordinates,Z_Param_Location,Z_Param_Size,Z_Param_PlaneColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushDebugStrings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::FlushDebugStrings(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_TextLocation); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_OBJECT(AActor,Z_Param_TestBaseActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugString(Z_Param_WorldContextObject,Z_Param_TextLocation,Z_Param_Text,Z_Param_TestBaseActor,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCapsule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCapsule(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_HalfHeight,Z_Param_Radius,Z_Param_Rotation,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugConeInDegrees) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugConeInDegrees(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_AngleWidth,Z_Param_AngleHeight,Z_Param_NumSides,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCone(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_AngleWidth,Z_Param_AngleHeight,Z_Param_NumSides,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCylinder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Segments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCylinder(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugSphere) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Segments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugSphere(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCoordinateSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_AxisLoc); \
		P_GET_STRUCT(FRotator,Z_Param_AxisRot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCoordinateSystem(Z_Param_WorldContextObject,Z_Param_AxisLoc,Z_Param_AxisRot,Z_Param_Scale,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugBox(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Extent,Z_Param_LineColor,Z_Param_Rotation,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugArrow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugArrow(Z_Param_WorldContextObject,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_ArrowSize,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_GET_STRUCT(FLinearColor,Z_Param_PointColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugPoint(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_Size,Z_Param_PointColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCircle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSegments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FVector,Z_Param_YAxis); \
		P_GET_STRUCT(FVector,Z_Param_ZAxis); \
		P_GET_UBOOL(Z_Param_bDrawAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCircle(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_NumSegments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_YAxis,Z_Param_ZAxis,Z_Param_bDrawAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugLine) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugLine(Z_Param_WorldContextObject,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorListFromComponentList) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_ComponentList); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActorList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetActorListFromComponentList(Z_Param_Out_ComponentList,Z_Param_ActorClassFilter,Z_Param_Out_OutActorList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentOverlapComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentTransform); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::ComponentOverlapComponents(Z_Param_Component,Z_Param_Out_ComponentTransform,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentOverlapActors) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentTransform); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::ComponentOverlapActors(Z_Param_Component,Z_Param_Out_ComponentTransform,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_CapsulePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleOverlapComponents(Z_Param_WorldContextObject,Z_Param_CapsulePos,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_CapsulePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleOverlapActors(Z_Param_WorldContextObject,Z_Param_CapsulePos,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_BoxPos); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxOverlapComponents(Z_Param_WorldContextObject,Z_Param_BoxPos,Z_Param_Extent,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_BoxPos); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxOverlapActors(Z_Param_WorldContextObject,Z_Param_BoxPos,Z_Param_BoxExtent,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SpherePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereOverlapComponents(Z_Param_WorldContextObject,Z_Param_SpherePos,Z_Param_SphereRadius,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SpherePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereOverlapActors(Z_Param_WorldContextObject,Z_Param_SpherePos,Z_Param_SphereRadius,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransformPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetTransformPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearColorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetLinearColorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotatorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetRotatorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetVectorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetTextPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetStringPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftClassPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSoftClassPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftObjectPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSoftObjectPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNamePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetNamePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInterfacePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_TINTERFACE_REF(IInterface,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetInterfacePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClassPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT(UClass,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetClassPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetObjectPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetBoolPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetFloatPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBytePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetBytePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt64PropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetInt64PropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetIntPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTime(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTime(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExists) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExists(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPaused(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActive) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActive(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_SetTimer(Z_Param_Object,Z_Param_FunctionName,Z_Param_Time,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExistsHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExistsHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPausedHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPausedHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActiveHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActiveHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearAndInvalidateTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTimerHandle,Z_Param_Out_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(Z_Param_WorldContextObject,Z_Param_Out_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_InvalidateTimerHandle) \
	{ \
		P_GET_STRUCT_REF(FTimerHandle,Z_Param_Out_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_InvalidateTimerHandle(Z_Param_Out_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsValidTimerHandle) \
	{ \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsValidTimerHandle(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExistsDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExistsDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPausedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPausedDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActiveDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActiveDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_SetTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate),Z_Param_Time,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveComponentTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_TargetRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_TargetRelativeRotation); \
		P_GET_UBOOL(Z_Param_bEaseOut); \
		P_GET_UBOOL(Z_Param_bEaseIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverTime); \
		P_GET_UBOOL(Z_Param_bForceShortestRotationPath); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MoveAction); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::MoveComponentTo(Z_Param_Component,Z_Param_TargetRelativeLocation,Z_Param_TargetRelativeRotation,Z_Param_bEaseOut,Z_Param_bEaseIn,Z_Param_OverTime,Z_Param_bForceShortestRotationPath,EMoveComponentAction::Type(Z_Param_MoveAction),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRetriggerableDelay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::RetriggerableDelay(Z_Param_WorldContextObject,Z_Param_Duration,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDelay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::Delay(Z_Param_WorldContextObject,Z_Param_Duration,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuitGame) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_GET_PROPERTY(UByteProperty,Z_Param_QuitPreference); \
		P_GET_UBOOL(Z_Param_bIgnorePlatformRestrictions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::QuitGame(Z_Param_WorldContextObject,Z_Param_SpecificPlayer,EQuitPreference::Type(Z_Param_QuitPreference),Z_Param_bIgnorePlatformRestrictions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableBoolValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableBoolValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableIntValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableIntValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloatValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableFloatValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ExecuteConsoleCommand(Z_Param_WorldContextObject,Z_Param_Command,Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitle) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Title); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetWindowTitle(Z_Param_Out_Title); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintWarning) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintWarning(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintText(Z_Param_WorldContextObject,Z_Param_InText,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintString(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralText(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralString(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralByte(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralName(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralBool) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralBool(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralFloat(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralInt(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_AssetClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnLoaded); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadAssetClass(Z_Param_WorldContextObject,Z_Param_AssetClass,FOnAssetClassLoaded(Z_Param_OnLoaded),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset_Blocking) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::LoadAsset_Blocking(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Asset); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnLoaded); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadAsset(Z_Param_WorldContextObject,Z_Param_Asset,FOnAssetLoaded(Z_Param_OnLoaded),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ClassToSoftClassReference) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UObject> ,Z_Param_Out_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UKismetSystemLibrary::Conv_ClassToSoftClassReference(Z_Param_Out_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToSoftObjectReference) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToClass) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UKismetSystemLibrary::Conv_SoftClassReferenceToClass(Z_Param_Out_SoftClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToObject) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(Z_Param_Out_SoftObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_A); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_SoftClassReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_A); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_SoftClassReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToString) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftClassReferenceToString(Z_Param_Out_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidSoftClassReference(Z_Param_Out_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_A); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_SoftObjectReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_A); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_SoftObjectReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToString) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjectReferenceToString(Z_Param_Out_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidSoftObjectReference(Z_Param_Out_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakSoftClassPath) \
	{ \
		P_GET_STRUCT(FSoftClassPath,Z_Param_InSoftClassPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::BreakSoftClassPath(Z_Param_InSoftClassPath,Z_Param_Out_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSoftClassPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftClassPath*)Z_Param__Result=UKismetSystemLibrary::MakeSoftClassPath(Z_Param_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjPathToSoftObjRef) \
	{ \
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_SoftObjectPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjPathToSoftObjRef(Z_Param_Out_SoftObjectPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakSoftObjectPath) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InSoftObjectPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::BreakSoftObjectPath(Z_Param_InSoftObjectPath,Z_Param_Out_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSoftObjectPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftObjectPath*)Z_Param__Result=UKismetSystemLibrary::MakeSoftObjectPath(Z_Param_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_InterfaceToObject) \
	{ \
		P_GET_TINTERFACE_REF(IInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::Conv_InterfaceToObject(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDeviceId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetUniqueDeviceId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPackagedForDistribution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsPackagedForDistribution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandalone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsStandalone(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDedicatedServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsDedicatedServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::GetGameTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesImplementInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_TestObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::DoesImplementInterface(Z_Param_TestObject,Z_Param_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetPlatformUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameBundleId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGameBundleId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::NormalizeFilename(Z_Param_InFilename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToAbsolutePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::ConvertToAbsolutePath(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToRelativePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::ConvertToRelativePath(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectSavedDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectSavedDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectContentDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectContentDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGameName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetEngineVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::GetOuterObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetClassDisplayName(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDisplayName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetPathName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetObjectName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValid(Z_Param_Object); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetsWithBundleState) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_RequiredBundles); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_ExcludedBundles); \
		P_GET_TARRAY_REF(FPrimaryAssetType,Z_Param_Out_ValidTypes); \
		P_GET_UBOOL(Z_Param_bForceCurrentState); \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_OutPrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetPrimaryAssetsWithBundleState(Z_Param_Out_RequiredBundles,Z_Param_Out_ExcludedBundles,Z_Param_Out_ValidTypes,Z_Param_bForceCurrentState,Z_Param_Out_OutPrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBundleState) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_GET_UBOOL(Z_Param_bForceCurrentState); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutBundles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetCurrentBundleState(Z_Param_PrimaryAssetId,Z_Param_bForceCurrentState,Z_Param_Out_OutBundles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadPrimaryAssetList) \
	{ \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_PrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnloadPrimaryAssetList(Z_Param_Out_PrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadPrimaryAsset) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnloadPrimaryAsset(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_PrimaryAssetType(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_PrimaryAssetType(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_PrimaryAssetTypeToString) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_PrimaryAssetTypeToString(Z_Param_PrimaryAssetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPrimaryAssetType) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidPrimaryAssetType(Z_Param_PrimaryAssetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_PrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_PrimaryAssetId(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_PrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_A); \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_PrimaryAssetId(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_PrimaryAssetIdToString) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_PrimaryAssetIdToString(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdList) \
	{ \
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_PrimaryAssetType); \
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_OutPrimaryAssetIdList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetPrimaryAssetIdList(Z_Param_PrimaryAssetType,Z_Param_Out_OutPrimaryAssetIdList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftClassReference) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(Z_Param_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromSoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference(Z_Param_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPrimaryAssetId*)Z_Param__Result=UKismetSystemLibrary::GetPrimaryAssetIdFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoftClassReferenceFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoftObjectReferenceFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UKismetSystemLibrary::GetClassFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectFromPrimaryAssetId) \
	{ \
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::GetObjectFromPrimaryAssetId(Z_Param_PrimaryAssetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransactObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::TransactObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelTransaction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CancelTransaction(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndTransaction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::EndTransaction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginTransaction) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Context); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Description); \
		P_GET_OBJECT(UObject,Z_Param_PrimaryObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::BeginTransaction(Z_Param_Context,Z_Param_Description,Z_Param_PrimaryObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnattended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsUnattended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetCommandLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserActivity) \
	{ \
		P_GET_STRUCT_REF(FUserActivity,Z_Param_Out_UserActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetUserActivity(Z_Param_Out_UserActivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterForRemoteNotifications) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::UnregisterForRemoteNotifications(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterForRemoteNotifications) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::RegisterForRemoteNotifications(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalCurrencySymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetLocalCurrencySymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalCurrencyCode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetLocalCurrencyCode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultLocale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDefaultLocale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDefaultLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreferredLanguages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UKismetSystemLibrary::GetPreferredLanguages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuppressViewportTransitionMessage) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSuppressViewportTransitionMessage(Z_Param_WorldContextObject,Z_Param_bState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadControllerName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGamepadControllerName(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsControllerAssignedToGamepad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsControllerAssignedToGamepad(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamepadAssignmentToController) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ResetGamepadAssignmentToController(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamepadAssignments) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ResetGamepadAssignments(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolumeButtonsHandledBySystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetVolumeButtonsHandledBySystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeButtonsHandledBySystem) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetVolumeButtonsHandledBySystem(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControlScreensaver) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowScreenSaver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ControlScreensaver(Z_Param_bAllowScreenSaver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsScreensaverEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsScreensaverEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoggedIn) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsLoggedIn(Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowPlatformSpecificAchievementsScreen) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowPlatformSpecificLeaderboardScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInterstitialAd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowInterstitialAd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialAdRequested) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsInterstitialAdRequested(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialAdAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsInterstitialAdAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadInterstitialAd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AdIdIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadInterstitialAd(Z_Param_AdIdIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceCloseAdBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ForceCloseAdBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAdBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::HideAdBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdIDCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetAdIDCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAdBanner) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AdIdIndex); \
		P_GET_UBOOL(Z_Param_bShowOnBottomOfScreen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ShowAdBanner(Z_Param_AdIdIndex,Z_Param_bShowOnBottomOfScreen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectGarbage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CollectGarbage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanLaunchURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CanLaunchURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LaunchURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinYResolutionFor3DView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetMinYResolutionFor3DView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinYResolutionForUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetMinYResolutionForUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvenientWindowedResolutions) \
	{ \
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetConvenientWindowedResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedFullscreenResolutions) \
	{ \
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetSupportedFullscreenResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderingMaterialQualityLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetRenderingMaterialQualityLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderingDetailMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetRenderingDetailMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorBounds) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetActorBounds(Z_Param_Actor,Z_Param_Out_Origin,Z_Param_Out_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentBounds) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetComponentBounds(Z_Param_Component,Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCopyForUndoBuffer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::CreateCopyForUndoBuffer(Z_Param_ObjectToModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatHistorySample) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDebugFloatHistory*)Z_Param__Result=UKismetSystemLibrary::AddFloatHistorySample(Z_Param_Value,Z_Param_Out_FloatHistory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_GET_STRUCT(FVector,Z_Param_DrawLocation); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_DrawColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFloatHistoryLocation(Z_Param_WorldContextObject,Z_Param_Out_FloatHistory,Z_Param_DrawLocation,Z_Param_DrawSize,Z_Param_DrawColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFloatHistoryTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FDebugFloatHistory,Z_Param_Out_FloatHistory); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DrawTransform); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_DrawColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFloatHistoryTransform(Z_Param_WorldContextObject,Z_Param_Out_FloatHistory,Z_Param_Out_DrawTransform,Z_Param_DrawSize,Z_Param_DrawColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCamera) \
	{ \
		P_GET_OBJECT(ACameraActor,Z_Param_CameraActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_CameraColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCamera(Z_Param_CameraActor,Z_Param_CameraColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugFrustum) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FrustumTransform); \
		P_GET_STRUCT(FLinearColor,Z_Param_FrustumColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugFrustum(Z_Param_WorldContextObject,Z_Param_Out_FrustumTransform,Z_Param_FrustumColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPersistentDebugLines) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::FlushPersistentDebugLines(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugPlane) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_PlaneCoordinates); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_GET_STRUCT(FLinearColor,Z_Param_PlaneColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugPlane(Z_Param_WorldContextObject,Z_Param_Out_PlaneCoordinates,Z_Param_Location,Z_Param_Size,Z_Param_PlaneColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushDebugStrings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::FlushDebugStrings(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_TextLocation); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_OBJECT(AActor,Z_Param_TestBaseActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugString(Z_Param_WorldContextObject,Z_Param_TextLocation,Z_Param_Text,Z_Param_TestBaseActor,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCapsule) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCapsule(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_HalfHeight,Z_Param_Radius,Z_Param_Rotation,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugConeInDegrees) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugConeInDegrees(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_AngleWidth,Z_Param_AngleHeight,Z_Param_NumSides,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSides); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCone(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_AngleWidth,Z_Param_AngleHeight,Z_Param_NumSides,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCylinder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Segments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCylinder(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugSphere) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Segments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugSphere(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_Segments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCoordinateSystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_AxisLoc); \
		P_GET_STRUCT(FRotator,Z_Param_AxisRot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCoordinateSystem(Z_Param_WorldContextObject,Z_Param_AxisLoc,Z_Param_AxisRot,Z_Param_Scale,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugBox(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Extent,Z_Param_LineColor,Z_Param_Rotation,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugArrow) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ArrowSize); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugArrow(Z_Param_WorldContextObject,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_ArrowSize,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_GET_STRUCT(FLinearColor,Z_Param_PointColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugPoint(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_Size,Z_Param_PointColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugCircle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSegments); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FVector,Z_Param_YAxis); \
		P_GET_STRUCT(FVector,Z_Param_ZAxis); \
		P_GET_UBOOL(Z_Param_bDrawAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugCircle(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_NumSegments,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_YAxis,Z_Param_ZAxis,Z_Param_bDrawAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugLine) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::DrawDebugLine(Z_Param_WorldContextObject,Z_Param_LineStart,Z_Param_LineEnd,Z_Param_LineColor,Z_Param_Duration,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorListFromComponentList) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_ComponentList); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActorList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::GetActorListFromComponentList(Z_Param_Out_ComponentList,Z_Param_ActorClassFilter,Z_Param_Out_OutActorList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByProfile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleForObjects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMulti) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::LineTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentOverlapComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentTransform); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::ComponentOverlapComponents(Z_Param_Component,Z_Param_Out_ComponentTransform,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentOverlapActors) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentTransform); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::ComponentOverlapActors(Z_Param_Component,Z_Param_Out_ComponentTransform,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_CapsulePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleOverlapComponents(Z_Param_WorldContextObject,Z_Param_CapsulePos,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_CapsulePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::CapsuleOverlapActors(Z_Param_WorldContextObject,Z_Param_CapsulePos,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_BoxPos); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxOverlapComponents(Z_Param_WorldContextObject,Z_Param_BoxPos,Z_Param_Extent,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_BoxPos); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::BoxOverlapActors(Z_Param_WorldContextObject,Z_Param_BoxPos,Z_Param_BoxExtent,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereOverlapComponents) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SpherePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_OutComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereOverlapComponents(Z_Param_WorldContextObject,Z_Param_SpherePos,Z_Param_SphereRadius,Z_Param_Out_ObjectTypes,Z_Param_ComponentClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereOverlapActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_SpherePos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_OBJECT(UClass,Z_Param_ActorClassFilter); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::SphereOverlapActors(Z_Param_WorldContextObject,Z_Param_SpherePos,Z_Param_SphereRadius,Z_Param_Out_ObjectTypes,Z_Param_ActorClassFilter,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransformPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetTransformPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearColorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetLinearColorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotatorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetRotatorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetVectorPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetTextPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetStringPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftClassPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSoftClassPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftObjectPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetSoftObjectPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNamePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetNamePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInterfacePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_TINTERFACE_REF(IInterface,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetInterfacePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClassPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT(UClass,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetClassPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetObjectPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetBoolPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetFloatPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBytePropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetBytePropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt64PropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetInt64PropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntPropertyByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetIntPropertyByName(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTime(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTime(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExists) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExists(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPaused) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPaused(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActive) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActive(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimer(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetTimer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_SetTimer(Z_Param_Object,Z_Param_FunctionName,Z_Param_Time,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExistsHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExistsHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPausedHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPausedHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActiveHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActiveHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearAndInvalidateTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTimerHandle,Z_Param_Out_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(Z_Param_WorldContextObject,Z_Param_Out_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimerHandle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimerHandle(Z_Param_WorldContextObject,Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_InvalidateTimerHandle) \
	{ \
		P_GET_STRUCT_REF(FTimerHandle,Z_Param_Out_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_InvalidateTimerHandle(Z_Param_Out_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsValidTimerHandle) \
	{ \
		P_GET_STRUCT(FTimerHandle,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsValidTimerHandle(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerRemainingTimeDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTimerElapsedTimeDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TimerExistsDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_TimerExistsDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerPausedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerPausedDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsTimerActiveDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::K2_IsTimerActiveDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_UnPauseTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_UnPauseTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_PauseTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_PauseTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ClearTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::K2_ClearTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetTimerDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimerHandle*)Z_Param__Result=UKismetSystemLibrary::K2_SetTimerDelegate(FTimerDynamicDelegate(Z_Param_Delegate),Z_Param_Time,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveComponentTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_TargetRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_TargetRelativeRotation); \
		P_GET_UBOOL(Z_Param_bEaseOut); \
		P_GET_UBOOL(Z_Param_bEaseIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverTime); \
		P_GET_UBOOL(Z_Param_bForceShortestRotationPath); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MoveAction); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::MoveComponentTo(Z_Param_Component,Z_Param_TargetRelativeLocation,Z_Param_TargetRelativeRotation,Z_Param_bEaseOut,Z_Param_bEaseIn,Z_Param_OverTime,Z_Param_bForceShortestRotationPath,EMoveComponentAction::Type(Z_Param_MoveAction),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRetriggerableDelay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::RetriggerableDelay(Z_Param_WorldContextObject,Z_Param_Duration,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDelay) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::Delay(Z_Param_WorldContextObject,Z_Param_Duration,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuitGame) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_GET_PROPERTY(UByteProperty,Z_Param_QuitPreference); \
		P_GET_UBOOL(Z_Param_bIgnorePlatformRestrictions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::QuitGame(Z_Param_WorldContextObject,Z_Param_SpecificPlayer,EQuitPreference::Type(Z_Param_QuitPreference),Z_Param_bIgnorePlatformRestrictions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableBoolValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableBoolValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableIntValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableIntValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloatValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::GetConsoleVariableFloatValue(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::ExecuteConsoleCommand(Z_Param_WorldContextObject,Z_Param_Command,Z_Param_SpecificPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitle) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Title); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::SetWindowTitle(Z_Param_Out_Title); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintWarning) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintWarning(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintText(Z_Param_WorldContextObject,Z_Param_InText,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_UBOOL(Z_Param_bPrintToScreen); \
		P_GET_UBOOL(Z_Param_bPrintToLog); \
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::PrintString(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralText(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralString(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralByte(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralName(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralBool) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralBool(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralFloat(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetSystemLibrary::MakeLiteralInt(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_AssetClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnLoaded); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadAssetClass(Z_Param_WorldContextObject,Z_Param_AssetClass,FOnAssetClassLoaded(Z_Param_OnLoaded),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset_Blocking) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::LoadAsset_Blocking(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Asset); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnLoaded); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::LoadAsset(Z_Param_WorldContextObject,Z_Param_Asset,FOnAssetLoaded(Z_Param_OnLoaded),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ClassToSoftClassReference) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UObject> ,Z_Param_Out_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UKismetSystemLibrary::Conv_ClassToSoftClassReference(Z_Param_Out_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ObjectToSoftObjectReference) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToClass) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UKismetSystemLibrary::Conv_SoftClassReferenceToClass(Z_Param_Out_SoftClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToObject) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(Z_Param_Out_SoftObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_A); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_SoftClassReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_A); \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_SoftClassReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftClassReferenceToString) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftClassReferenceToString(Z_Param_Out_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSoftClassReference) \
	{ \
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UObject> ,Z_Param_Out_SoftClassReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidSoftClassReference(Z_Param_Out_SoftClassReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_A); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::NotEqual_SoftObjectReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_SoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_A); \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::EqualEqual_SoftObjectReference(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjectReferenceToString) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjectReferenceToString(Z_Param_Out_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSoftObjectReference) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_SoftObjectReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidSoftObjectReference(Z_Param_Out_SoftObjectReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakSoftClassPath) \
	{ \
		P_GET_STRUCT(FSoftClassPath,Z_Param_InSoftClassPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::BreakSoftClassPath(Z_Param_InSoftClassPath,Z_Param_Out_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSoftClassPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftClassPath*)Z_Param__Result=UKismetSystemLibrary::MakeSoftClassPath(Z_Param_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_SoftObjPathToSoftObjRef) \
	{ \
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_SoftObjectPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=UKismetSystemLibrary::Conv_SoftObjPathToSoftObjRef(Z_Param_Out_SoftObjectPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakSoftObjectPath) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InSoftObjectPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetSystemLibrary::BreakSoftObjectPath(Z_Param_InSoftObjectPath,Z_Param_Out_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeSoftObjectPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSoftObjectPath*)Z_Param__Result=UKismetSystemLibrary::MakeSoftObjectPath(Z_Param_PathString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_InterfaceToObject) \
	{ \
		P_GET_TINTERFACE_REF(IInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::Conv_InterfaceToObject(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDeviceId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetUniqueDeviceId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPackagedForDistribution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsPackagedForDistribution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandalone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsStandalone(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDedicatedServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsDedicatedServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsServer(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameTimeInSeconds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetSystemLibrary::GetGameTimeInSeconds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesImplementInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_TestObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::DoesImplementInterface(Z_Param_TestObject,Z_Param_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlatformUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetPlatformUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameBundleId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGameBundleId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::NormalizeFilename(Z_Param_InFilename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToAbsolutePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::ConvertToAbsolutePath(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToRelativePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::ConvertToRelativePath(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectSavedDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectSavedDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectContentDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectContentDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetGameName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetEngineVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetSystemLibrary::GetOuterObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetClassDisplayName(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetDisplayName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetPathName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetSystemLibrary::GetObjectName(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValidClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetSystemLibrary::IsValid(Z_Param_Object); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetSystemLibrary(); \
	friend struct Z_Construct_UClass_UKismetSystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetSystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUKismetSystemLibrary(); \
	friend struct Z_Construct_UClass_UKismetSystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetSystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetSystemLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetSystemLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetSystemLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetSystemLibrary(UKismetSystemLibrary&&); \
	NO_API UKismetSystemLibrary(const UKismetSystemLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetSystemLibrary(UKismetSystemLibrary&&); \
	NO_API UKismetSystemLibrary(const UKismetSystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetSystemLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetSystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetSystemLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetSystemLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetSystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetSystemLibrary_h


#define FOREACH_ENUM_EQUITPREFERENCE(op) \
	op(EQuitPreference::Quit) \
	op(EQuitPreference::Background) 
#define FOREACH_ENUM_EMOVECOMPONENTACTION(op) \
	op(EMoveComponentAction::Move) \
	op(EMoveComponentAction::Stop) \
	op(EMoveComponentAction::Return) 
#define FOREACH_ENUM_EDRAWDEBUGTRACE(op) \
	op(EDrawDebugTrace::None) \
	op(EDrawDebugTrace::ForOneFrame) \
	op(EDrawDebugTrace::ForDuration) \
	op(EDrawDebugTrace::Persistent) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
