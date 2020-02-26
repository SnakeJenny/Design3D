// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimNotifyState;
class UAnimNotify;
class UAnimSequence;
struct FTransform;
class USkeletalMesh;
class UAnimMetaData;
enum class ERawCurveTrackTypes : uint8;
struct FVector;
struct FAnimNotifyEvent;
struct FAnimSyncMarker;
struct FLinearColor;
class UAnimSequenceBase;
class UObject;
enum class EAnimInterpolationType : uint8;
class UAnimCompress;
struct FQuat;
#ifdef ANIMATIONMODIFIERS_AnimationBlueprintLibrary_generated_h
#error "AnimationBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationBlueprintLibrary.h"
#endif
#define ANIMATIONMODIFIERS_AnimationBlueprintLibrary_generated_h

#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_26_DELEGATE \
struct _Script_AnimationModifiers_eventOnNotifyStateReplaced_Parms \
{ \
	const UAnimNotifyState* OldNotifyState; \
	const UAnimNotifyState* NewNotifyState; \
}; \
static inline void FOnNotifyStateReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyStateReplaced, const UAnimNotifyState* OldNotifyState, const UAnimNotifyState* NewNotifyState) \
{ \
	_Script_AnimationModifiers_eventOnNotifyStateReplaced_Parms Parms; \
	Parms.OldNotifyState=OldNotifyState; \
	Parms.NewNotifyState=NewNotifyState; \
	OnNotifyStateReplaced.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_23_DELEGATE \
struct _Script_AnimationModifiers_eventOnNotifyReplaced_Parms \
{ \
	const UAnimNotify* OldNotify; \
	const UAnimNotify* NewNotify; \
}; \
static inline void FOnNotifyReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyReplaced, const UAnimNotify* OldNotify, const UAnimNotify* NewNotify) \
{ \
	_Script_AnimationModifiers_eventOnNotifyReplaced_Parms Parms; \
	Parms.OldNotify=OldNotify; \
	Parms.NewNotify=NewNotify; \
	OnNotifyReplaced.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindBonePathToRoot) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_BonePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::FindBonePathToRoot(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Out_BonePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::IsValidTime(Z_Param_AnimationSequence,Z_Param_Time,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeAtFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetTimeAtFrame(Z_Param_AnimationSequence,Z_Param_Frame,Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameAtTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Frame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetFrameAtTime(Z_Param_AnimationSequence,Z_Param_Time,Z_Param_Out_Frame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRateScale) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RateScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRateScale(Z_Param_AnimationSequence,Z_Param_RateScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRateScale) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RateScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRateScale(Z_Param_AnimationSequence,Z_Param_Out_RateScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSequenceLength) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetSequenceLength(Z_Param_AnimationSequence,Z_Param_Out_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllVirtualBones) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllVirtualBones(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveVirtualBones) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_VirtualBoneNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveVirtualBones(Z_Param_AnimationSequence,Z_Param_VirtualBoneNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveVirtualBone) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VirtualBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveVirtualBone(Z_Param_AnimationSequence,Z_Param_VirtualBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVirtualBone) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceBoneName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetBoneName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_VirtualBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVirtualBone(Z_Param_AnimationSequence,Z_Param_SourceBoneName,Z_Param_TargetBoneName,Z_Param_Out_VirtualBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePosesForFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_BoneNames); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePosesForFrame(Z_Param_AnimationSequence,Z_Param_BoneNames,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePosesForTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_BoneNames); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePosesForTime(Z_Param_AnimationSequence,Z_Param_BoneNames,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePoseForFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePoseForFrame(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Pose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePoseForTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePoseForTime(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Pose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::ContainsMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaDataOfClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass,Z_Param_Out_MetaDataOfClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetMetaData(Z_Param_AnimationSequence,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveMetaData(Z_Param_AnimationSequence,Z_Param_MetaDataObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllMetaData(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMetaDataObject) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddMetaDataObject(Z_Param_AnimationSequence,Z_Param_MetaDataObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_GET_OBJECT_REF(UAnimMetaData,Z_Param_Out_MetaDataInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddMetaData(Z_Param_AnimationSequence,Z_Param_MetaDataClass,Z_Param_Out_MetaDataInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesCurveExist) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::DoesCurveExist(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinalizeBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::FinalizeBoneAnimation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllBoneAnimation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeChildren); \
		P_GET_UBOOL(Z_Param_bFinalize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveBoneAnimation(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_bIncludeChildren,Z_Param_bFinalize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformationKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetTransformationKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetVectorKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetFloatKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesBoneNameExist) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL_REF(Z_Param_Out_bExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::DoesBoneNameExist(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Out_bExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVectorCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVectorCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Vectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVectorCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVectorCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddFloatCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddFloatCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransformationCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddTransformationCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Transforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransformationCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddTransformationCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllCurveData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllCurveData(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCurve) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_UBOOL(Z_Param_bRemoveNameFromSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveCurve(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_bRemoveNameFromSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCurve) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType); \
		P_GET_UBOOL(Z_Param_bMetaDataCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddCurve(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType),Z_Param_bMetaDataCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEventsForTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEventsForTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSyncMarkersForTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationSyncMarkersForTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_Out_Markers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimNotifyEventTriggerTime) \
	{ \
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAnimationBlueprintLibrary::GetAnimNotifyEventTriggerTime(Z_Param_Out_NotifyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAnimNotifyTrackName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimNotifyTrackName(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllAnimationNotifyTracks) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllAnimationNotifyTracks(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAnimationNotifyTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_STRUCT(FLinearColor,Z_Param_TrackColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationNotifyTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_TrackColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyTrackNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyTrackNames(Z_Param_AnimationSequence,Z_Param_Out_TrackNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyAnimNotifiesFromSequence) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_SrcAnimSequence); \
		P_GET_OBJECT(UAnimSequence,Z_Param_DestAnimSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::CopyAnimNotifiesFromSequence(Z_Param_SrcAnimSequence,Z_Param_DestAnimSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceAnimNotifies) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass); \
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnNotifyReplaced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::ReplaceAnimNotifies(Z_Param_AnimationSequence,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyReplaced(Z_Param_OnNotifyReplaced)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceAnimNotifyStates) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass); \
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnNotifyStateReplaced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::ReplaceAnimNotifyStates(Z_Param_AnimationSequence,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyStateReplaced(Z_Param_OnNotifyStateReplaced)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByName(Z_Param_AnimationSequence,Z_Param_NotifyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyEventObject) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UAnimNotify,Z_Param_Notify); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationNotifyEventObject(Z_Param_AnimationSequence,Z_Param_StartTime,Z_Param_Notify,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyEvent) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_OBJECT(UClass,Z_Param_NotifyClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimNotify**)Z_Param__Result=UAnimationBlueprintLibrary::AddAnimationNotifyEvent(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_StartTime,Z_Param_Duration,Z_Param_NotifyClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEventNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEventNames(Z_Param_AnimationSequence,Z_Param_Out_EventNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEvents) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEvents(Z_Param_AnimationSequence,Z_Param_Out_NotifyEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllAnimationSyncMarkers) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllAnimationSyncMarkers(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByName(Z_Param_AnimationSequence,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAnimationSyncMarkerName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimationSyncMarkerName(Z_Param_AnimationSequence,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationSyncMarker) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationSyncMarker(Z_Param_AnimationSequence,Z_Param_MarkerName,Z_Param_Time,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueMarkerNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_MarkerNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetUniqueMarkerNames(Z_Param_AnimationSequence,Z_Param_Out_MarkerNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSyncMarkers) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationSyncMarkers(Z_Param_AnimationSequence,Z_Param_Out_Markers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRootMotionLockForced) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_UBOOL(Z_Param_bForced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetIsRootMotionLockForced(Z_Param_AnimationSequence,Z_Param_bForced); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRootMotionLockForced) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionLockForced(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionLockType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RootMotionLockType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRootMotionLockType(Z_Param_AnimationSequence,ERootMotionRootLock::Type(Z_Param_RootMotionLockType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootMotionLockType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_LockType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRootMotionLockType(Z_Param_AnimationSequence,(TEnumAsByte<ERootMotionRootLock::Type>&)(Z_Param_Out_LockType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionEnabled) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRootMotionEnabled(Z_Param_AnimationSequence,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRootMotionEnabled) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionEnabled(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationInterpolationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_ENUM(EAnimInterpolationType,Z_Param_InterpolationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAnimationInterpolationType(Z_Param_AnimationSequence,EAnimInterpolationType(Z_Param_InterpolationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationInterpolationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_ENUM_REF(EAnimInterpolationType,Z_Param_Out_InterpolationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationInterpolationType(Z_Param_AnimationSequence,(EAnimInterpolationType&)(Z_Param_Out_InterpolationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveBasePoseType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AdditiveBasePoseType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAdditiveBasePoseType(Z_Param_AnimationSequence,EAdditiveBasePoseType(Z_Param_AdditiveBasePoseType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveBasePoseType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_AdditiveBasePoseType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAdditiveBasePoseType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveBasePoseType>&)(Z_Param_Out_AdditiveBasePoseType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveAnimationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AdditiveAnimationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAdditiveAnimationType(Z_Param_AnimationSequence,EAdditiveAnimationType(Z_Param_AdditiveAnimationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveAnimationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_AdditiveAnimationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAdditiveAnimationType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveAnimationType>&)(Z_Param_Out_AdditiveAnimationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompressionScheme) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimCompress,Z_Param_CompressionScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetCompressionScheme(Z_Param_AnimationSequence,Z_Param_CompressionScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompressionScheme) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT_REF(UAnimCompress,Z_Param_Out_CompressionScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetCompressionScheme(Z_Param_AnimationSequence,Z_Param_Out_CompressionScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidRawAnimationTrackName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidRawAnimationTrackName(Z_Param_AnimationSequence,Z_Param_TrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionKeys); \
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationKeys); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScalingKeys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_PositionKeys,Z_Param_Out_RotationKeys,Z_Param_Out_ScalingKeys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackScaleData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScaleData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackScaleData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_ScaleData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackRotationData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackRotationData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_RotationData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackPositionData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackPositionData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_PositionData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTrackNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationTrackNames(Z_Param_AnimationSequence,Z_Param_Out_TrackNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumFrames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumFrames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetNumFrames(Z_Param_AnimationSequence,Z_Param_Out_NumFrames); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindBonePathToRoot) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_BonePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::FindBonePathToRoot(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Out_BonePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::IsValidTime(Z_Param_AnimationSequence,Z_Param_Time,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeAtFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetTimeAtFrame(Z_Param_AnimationSequence,Z_Param_Frame,Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameAtTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Frame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetFrameAtTime(Z_Param_AnimationSequence,Z_Param_Time,Z_Param_Out_Frame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRateScale) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RateScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRateScale(Z_Param_AnimationSequence,Z_Param_RateScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRateScale) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RateScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRateScale(Z_Param_AnimationSequence,Z_Param_Out_RateScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSequenceLength) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetSequenceLength(Z_Param_AnimationSequence,Z_Param_Out_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllVirtualBones) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllVirtualBones(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveVirtualBones) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_VirtualBoneNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveVirtualBones(Z_Param_AnimationSequence,Z_Param_VirtualBoneNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveVirtualBone) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VirtualBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveVirtualBone(Z_Param_AnimationSequence,Z_Param_VirtualBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVirtualBone) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SourceBoneName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetBoneName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_VirtualBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVirtualBone(Z_Param_AnimationSequence,Z_Param_SourceBoneName,Z_Param_TargetBoneName,Z_Param_Out_VirtualBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePosesForFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_BoneNames); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePosesForFrame(Z_Param_AnimationSequence,Z_Param_BoneNames,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePosesForTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY(FName,Z_Param_BoneNames); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePosesForTime(Z_Param_AnimationSequence,Z_Param_BoneNames,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePoseForFrame) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frame); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePoseForFrame(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Pose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBonePoseForTime) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bExtractRootMotion); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetBonePoseForTime(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Pose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContainsMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::ContainsMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaDataOfClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass,Z_Param_Out_MetaDataOfClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetMetaData(Z_Param_AnimationSequence,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetaDataOfClass) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveMetaDataOfClass(Z_Param_AnimationSequence,Z_Param_MetaDataClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveMetaData(Z_Param_AnimationSequence,Z_Param_MetaDataObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllMetaData(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMetaDataObject) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddMetaDataObject(Z_Param_AnimationSequence,Z_Param_MetaDataObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMetaData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass); \
		P_GET_OBJECT_REF(UAnimMetaData,Z_Param_Out_MetaDataInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddMetaData(Z_Param_AnimationSequence,Z_Param_MetaDataClass,Z_Param_Out_MetaDataInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesCurveExist) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::DoesCurveExist(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinalizeBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::FinalizeBoneAnimation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllBoneAnimation(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBoneAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeChildren); \
		P_GET_UBOOL(Z_Param_bFinalize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveBoneAnimation(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_bIncludeChildren,Z_Param_bFinalize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformationKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetTransformationKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetVectorKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetFloatKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesBoneNameExist) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL_REF(Z_Param_Out_bExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::DoesBoneNameExist(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Out_bExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVectorCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVectorCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Vectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVectorCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddVectorCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddFloatCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddFloatCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransformationCurveKeys) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Times); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddTransformationCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Transforms); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransformationCurveKey) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddTransformationCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllCurveData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllCurveData(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCurve) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_UBOOL(Z_Param_bRemoveNameFromSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveCurve(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_bRemoveNameFromSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCurve) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType); \
		P_GET_UBOOL(Z_Param_bMetaDataCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddCurve(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType),Z_Param_bMetaDataCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEventsForTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEventsForTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSyncMarkersForTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationSyncMarkersForTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_Out_Markers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimNotifyEventTriggerTime) \
	{ \
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAnimationBlueprintLibrary::GetAnimNotifyEventTriggerTime(Z_Param_Out_NotifyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAnimNotifyTrackName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimNotifyTrackName(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllAnimationNotifyTracks) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllAnimationNotifyTracks(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAnimationNotifyTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_STRUCT(FLinearColor,Z_Param_TrackColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationNotifyTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_TrackColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyTrackNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyTrackNames(Z_Param_AnimationSequence,Z_Param_Out_TrackNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyAnimNotifiesFromSequence) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_SrcAnimSequence); \
		P_GET_OBJECT(UAnimSequence,Z_Param_DestAnimSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::CopyAnimNotifiesFromSequence(Z_Param_SrcAnimSequence,Z_Param_DestAnimSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceAnimNotifies) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass); \
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnNotifyReplaced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::ReplaceAnimNotifies(Z_Param_AnimationSequence,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyReplaced(Z_Param_OnNotifyReplaced)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceAnimNotifyStates) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass); \
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_OnNotifyStateReplaced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::ReplaceAnimNotifyStates(Z_Param_AnimationSequence,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyStateReplaced(Z_Param_OnNotifyStateReplaced)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByName(Z_Param_AnimationSequence,Z_Param_NotifyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyEventObject) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UAnimNotify,Z_Param_Notify); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationNotifyEventObject(Z_Param_AnimationSequence,Z_Param_StartTime,Z_Param_Notify,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationNotifyEvent) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_OBJECT(UClass,Z_Param_NotifyClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimNotify**)Z_Param__Result=UAnimationBlueprintLibrary::AddAnimationNotifyEvent(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_StartTime,Z_Param_Duration,Z_Param_NotifyClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEventNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEventNames(Z_Param_AnimationSequence,Z_Param_Out_EventNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationNotifyEvents) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationNotifyEvents(Z_Param_AnimationSequence,Z_Param_Out_NotifyEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllAnimationSyncMarkers) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::RemoveAllAnimationSyncMarkers(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByTrack) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByName(Z_Param_AnimationSequence,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidAnimationSyncMarkerName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimationSyncMarkerName(Z_Param_AnimationSequence,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAnimationSyncMarker) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NotifyTrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::AddAnimationSyncMarker(Z_Param_AnimationSequence,Z_Param_MarkerName,Z_Param_Time,Z_Param_NotifyTrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueMarkerNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_MarkerNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetUniqueMarkerNames(Z_Param_AnimationSequence,Z_Param_Out_MarkerNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSyncMarkers) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationSyncMarkers(Z_Param_AnimationSequence,Z_Param_Out_Markers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRootMotionLockForced) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_UBOOL(Z_Param_bForced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetIsRootMotionLockForced(Z_Param_AnimationSequence,Z_Param_bForced); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRootMotionLockForced) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionLockForced(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionLockType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RootMotionLockType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRootMotionLockType(Z_Param_AnimationSequence,ERootMotionRootLock::Type(Z_Param_RootMotionLockType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootMotionLockType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_LockType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRootMotionLockType(Z_Param_AnimationSequence,(TEnumAsByte<ERootMotionRootLock::Type>&)(Z_Param_Out_LockType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionEnabled) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetRootMotionEnabled(Z_Param_AnimationSequence,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRootMotionEnabled) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionEnabled(Z_Param_AnimationSequence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationInterpolationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_ENUM(EAnimInterpolationType,Z_Param_InterpolationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAnimationInterpolationType(Z_Param_AnimationSequence,EAnimInterpolationType(Z_Param_InterpolationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationInterpolationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_ENUM_REF(EAnimInterpolationType,Z_Param_Out_InterpolationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationInterpolationType(Z_Param_AnimationSequence,(EAnimInterpolationType&)(Z_Param_Out_InterpolationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveBasePoseType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AdditiveBasePoseType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAdditiveBasePoseType(Z_Param_AnimationSequence,EAdditiveBasePoseType(Z_Param_AdditiveBasePoseType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveBasePoseType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_AdditiveBasePoseType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAdditiveBasePoseType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveBasePoseType>&)(Z_Param_Out_AdditiveBasePoseType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveAnimationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AdditiveAnimationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetAdditiveAnimationType(Z_Param_AnimationSequence,EAdditiveAnimationType(Z_Param_AdditiveAnimationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveAnimationType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_AdditiveAnimationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAdditiveAnimationType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveAnimationType>&)(Z_Param_Out_AdditiveAnimationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompressionScheme) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT(UAnimCompress,Z_Param_CompressionScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::SetCompressionScheme(Z_Param_AnimationSequence,Z_Param_CompressionScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompressionScheme) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_OBJECT_REF(UAnimCompress,Z_Param_Out_CompressionScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetCompressionScheme(Z_Param_AnimationSequence,Z_Param_Out_CompressionScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidRawAnimationTrackName) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidRawAnimationTrackName(Z_Param_AnimationSequence,Z_Param_TrackName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionKeys); \
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationKeys); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScalingKeys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_PositionKeys,Z_Param_Out_RotationKeys,Z_Param_Out_ScalingKeys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackScaleData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScaleData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackScaleData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_ScaleData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackRotationData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackRotationData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_RotationData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawTrackPositionData) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TrackName); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetRawTrackPositionData(Z_Param_AnimationSequence,Z_Param_TrackName,Z_Param_Out_PositionData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTrackNames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetAnimationTrackNames(Z_Param_AnimationSequence,Z_Param_Out_TrackNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumFrames) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumFrames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAnimationBlueprintLibrary::GetNumFrames(Z_Param_AnimationSequence,Z_Param_Out_NumFrames); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBlueprintLibrary)


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBlueprintLibrary)


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBlueprintLibrary(UAnimationBlueprintLibrary&&); \
	NO_API UAnimationBlueprintLibrary(const UAnimationBlueprintLibrary&); \
public:


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBlueprintLibrary(UAnimationBlueprintLibrary&&); \
	NO_API UAnimationBlueprintLibrary(const UAnimationBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlueprintLibrary)


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_29_PROLOG
#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_RPC_WRAPPERS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_INCLASS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERS_API UClass* StaticClass<class UAnimationBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimationModifiers_Public_AnimationBlueprintLibrary_h


#define FOREACH_ENUM_ESMARTNAMECONTAINERTYPE(op) \
	op(ESmartNameContainerType::SNCT_CurveMapping) \
	op(ESmartNameContainerType::SNCT_TrackCurveMapping) 

enum class ESmartNameContainerType : uint8;
template<> ANIMATIONMODIFIERS_API UEnum* StaticEnum<ESmartNameContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
