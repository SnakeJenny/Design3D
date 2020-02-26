// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
struct FRotator;
struct FSplinePoint;
struct FLinearColor;
#ifdef ENGINE_SplineComponent_generated_h
#error "SplineComponent.generated.h already included, missing '#pragma once' in SplineComponent.h"
#endif
#define ENGINE_SplineComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_729_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplinePoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplinePoint>();

#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineCurves>();

#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindTransformClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->FindTransformClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindScaleClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindScaleClosestToWorldLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRollClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->FindRollClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRightVectorClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindRightVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindUpVectorClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindUpVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRotationClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->FindRotationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTangentClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindTangentClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDirectionClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindDirectionClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindLocationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindInputKeyClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->FindInputKeyClosestToWorldLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity,Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldRotationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDirectionAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldRotationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldTangentAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldTangentAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDirectionAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputKeyAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultUpVector) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDefaultUpVector(ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultUpVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultUpVector(Z_Param_Out_UpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSplineLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceAlongSplineAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalLocationAndTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalTangent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocalLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_LocalLocation,Z_Param_Out_LocalTangent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAndTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_Location,Z_Param_Out_Tangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeaveTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLeaveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArriveTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetArriveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfSplinePoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSplinePoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplinePointType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplinePointType(Z_Param_PointIndex,ESplinePointType::Type(Z_Param_Type),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplinePointType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplinePointType::Type>*)Z_Param__Result=P_THIS->GetSplinePointType(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InUpVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpVectorAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InUpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTangentsAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InArriveTangent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLeaveTangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTangentsAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InArriveTangent,Z_Param_Out_InLeaveTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InTangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineLocalPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineLocalPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineWorldPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineWorldPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplinePoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplinePoints(Z_Param_Out_Points,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplineLocalPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplineLocalPoint(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplineWorldPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplineWorldPoint(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSplinePoint(Z_Param_Index,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplinePointAtIndex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplinePointAtIndex(Z_Param_Out_Position,Z_Param_Index,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplinePoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplinePoint(Z_Param_Out_Position,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPoints) \
	{ \
		P_GET_TARRAY_REF(FSplinePoint,Z_Param_Out_Points); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPoints(Z_Param_Out_Points,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPoint) \
	{ \
		P_GET_STRUCT_REF(FSplinePoint,Z_Param_Out_Point); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPoint(Z_Param_Out_Point,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSplinePoints) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSplinePoints(Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosedLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClosedLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosedLoopAtPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bInClosedLoop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosedLoopAtPosition(Z_Param_bInClosedLoop,Z_Param_Key,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosedLoop) \
	{ \
		P_GET_UBOOL(Z_Param_bInClosedLoop); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosedLoop(Z_Param_bInClosedLoop,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawDebug) \
	{ \
		P_GET_UBOOL(Z_Param_bShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawDebug(Z_Param_bShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedSplineSegmentColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedSplineSegmentColor(Z_Param_Out_SegmentColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUnselectedSplineSegmentColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUnselectedSplineSegmentColor(Z_Param_Out_SegmentColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSpline(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindTransformClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->FindTransformClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindScaleClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindScaleClosestToWorldLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRollClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->FindRollClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRightVectorClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindRightVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindUpVectorClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindUpVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRotationClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->FindRotationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTangentClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindTangentClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDirectionClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindDirectionClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLocationClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindLocationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindInputKeyClosestToWorldLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->FindInputKeyClosestToWorldLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity,Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldRotationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDirectionAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseConstantVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldRotationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldTangentAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldTangentAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldDirectionAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInputKeyAtDistanceAlongSpline(Z_Param_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultUpVector) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDefaultUpVector(ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultUpVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultUpVector(Z_Param_Out_UpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSplineLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceAlongSplineAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalLocationAndTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalTangent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocalLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_LocalLocation,Z_Param_Out_LocalTangent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAndTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_Location,Z_Param_Out_Tangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUseScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaleAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRollAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRollAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeaveTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLeaveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArriveTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetArriveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtSplinePoint(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfSplinePoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSplinePoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplinePointType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplinePointType(Z_Param_PointIndex,ESplinePointType::Type(Z_Param_Type),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplinePointType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplinePointType::Type>*)Z_Param__Result=P_THIS->GetSplinePointType(Z_Param_PointIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpVectorAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InUpVector); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpVectorAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InUpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTangentsAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InArriveTangent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLeaveTangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTangentsAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InArriveTangent,Z_Param_Out_InLeaveTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTangentAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InTangent); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocationAtSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointIndex); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineLocalPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineLocalPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineWorldPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineWorldPoints(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplinePoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplinePoints(Z_Param_Out_Points,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplineLocalPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplineLocalPoint(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplineWorldPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplineWorldPoint(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSplinePoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSplinePoint(Z_Param_Index,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplinePointAtIndex) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplinePointAtIndex(Z_Param_Out_Position,Z_Param_Index,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSplinePoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CoordinateSpace); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSplinePoint(Z_Param_Out_Position,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPoints) \
	{ \
		P_GET_TARRAY_REF(FSplinePoint,Z_Param_Out_Points); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPoints(Z_Param_Out_Points,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPoint) \
	{ \
		P_GET_STRUCT_REF(FSplinePoint,Z_Param_Out_Point); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPoint(Z_Param_Out_Point,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSplinePoints) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSplinePoints(Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosedLoop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClosedLoop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosedLoopAtPosition) \
	{ \
		P_GET_UBOOL(Z_Param_bInClosedLoop); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosedLoopAtPosition(Z_Param_bInClosedLoop,Z_Param_Key,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosedLoop) \
	{ \
		P_GET_UBOOL(Z_Param_bInClosedLoop); \
		P_GET_UBOOL(Z_Param_bUpdateSpline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosedLoop(Z_Param_bInClosedLoop,Z_Param_bUpdateSpline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawDebug) \
	{ \
		P_GET_UBOOL(Z_Param_bShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawDebug(Z_Param_bShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedSplineSegmentColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedSplineSegmentColor(Z_Param_Out_SegmentColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUnselectedSplineSegmentColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUnselectedSplineSegmentColor(Z_Param_Out_SegmentColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSpline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSpline(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USplineComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineComponent(); \
	friend struct Z_Construct_UClass_USplineComponent_Statics; \
public: \
	DECLARE_CLASS(USplineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUSplineComponent(); \
	friend struct Z_Construct_UClass_USplineComponent_Statics; \
public: \
	DECLARE_CLASS(USplineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponent(USplineComponent&&); \
	NO_API USplineComponent(const USplineComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponent(USplineComponent&&); \
	NO_API USplineComponent(const USplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bClosedLoop() { return STRUCT_OFFSET(USplineComponent, bClosedLoop); } \
	FORCEINLINE static uint32 __PPO__bLoopPositionOverride() { return STRUCT_OFFSET(USplineComponent, bLoopPositionOverride); } \
	FORCEINLINE static uint32 __PPO__LoopPosition() { return STRUCT_OFFSET(USplineComponent, LoopPosition); }


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_169_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_172_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h


#define FOREACH_ENUM_ESPLINECOORDINATESPACE(op) \
	op(ESplineCoordinateSpace::Local) \
	op(ESplineCoordinateSpace::World) 
#define FOREACH_ENUM_ESPLINEPOINTTYPE(op) \
	op(ESplinePointType::Linear) \
	op(ESplinePointType::Curve) \
	op(ESplinePointType::Constant) \
	op(ESplinePointType::CurveClamped) \
	op(ESplinePointType::CurveCustomTangent) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
