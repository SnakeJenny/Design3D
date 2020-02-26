// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FPlane;
struct FTransform;
class UObject;
struct FRotator;
struct FRandomStream;
struct FVectorSpringState;
struct FFloatSpringState;
struct FLinearColor;
struct FVector2D;
struct FBox2D;
struct FBox;
struct FIntVector;
struct FColor;
struct FFrameRate;
struct FQualifiedFrameTime;
struct FFrameNumber;
struct FTimespan;
struct FDateTime;
struct FQuat;
struct FMatrix;
struct FVector4;
struct FIntPoint;
#ifdef ENGINE_KismetMathLibrary_generated_h
#error "KismetMathLibrary.generated.h already included, missing '#pragma once' in KismetMathLibrary.h"
#endif
#define ENGINE_KismetMathLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorSpringState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorSpringState>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatSpringState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFloatSpringState>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinePlaneIntersection_OriginNormal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_T); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Intersection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinePlaneIntersection_OriginNormal(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_PlaneOrigin,Z_Param_PlaneNormal,Z_Param_Out_T,Z_Param_Out_Intersection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinePlaneIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_APlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_T); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Intersection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinePlaneIntersection(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_Out_APlane,Z_Param_Out_T,Z_Param_Out_Intersection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlopeDegreeAngles) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyRightYAxis); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FloorNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSlopePitchDegreeAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSlopeRollDegreeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetSlopeDegreeAngles(Z_Param_Out_MyRightYAxis,Z_Param_Out_FloorNormal,Z_Param_Out_UpVector,Z_Param_Out_OutSlopePitchDegreeAngle,Z_Param_Out_OutSlopeRollDegreeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInBoxWithTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BoxWorldTransform); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsPointInBoxWithTransform(Z_Param_Point,Z_Param_Out_BoxWorldTransform,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsPointInBox(Z_Param_Point,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointsAreCoplanar) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::PointsAreCoplanar(Z_Param_Out_Points,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinimumAreaRectangle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthY); \
		P_GET_UBOOL(Z_Param_bDebugDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::PerlinNoise1D(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegreesFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInDegrees); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegreesFromStream(Z_Param_Out_ConeDir,Z_Param_MaxYawInDegrees,Z_Param_MaxPitchInDegrees,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadiansFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInRadians); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInRadians); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadiansFromStream(Z_Param_Out_ConeDir,Z_Param_MaxYawInRadians,Z_Param_MaxPitchInRadians,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegreesFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInDegrees); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInDegreesFromStream(Z_Param_Out_ConeDir,Z_Param_ConeHalfAngleInDegrees,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadiansFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInRadians); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInRadiansFromStream(Z_Param_Out_ConeDir,Z_Param_ConeHalfAngleInRadians,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomStreamSeed) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::SetRandomStreamSeed(Z_Param_Out_Stream,Z_Param_NewSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeedRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::SeedRandomStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetRandomStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRotatorFromStream) \
	{ \
		P_GET_UBOOL(Z_Param_bRoll); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RandomRotatorFromStream(Z_Param_bRoll,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRangeFromStream) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatInRangeFromStream(Z_Param_Min,Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRangeFromStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerInRangeFromStream(Z_Param_Min,Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerFromStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerFromStream(Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetVectorSpringState) \
	{ \
		P_GET_STRUCT_REF(FVectorSpringState,Z_Param_Out_SpringState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetVectorSpringState(Z_Param_Out_SpringState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFloatSpringState) \
	{ \
		P_GET_STRUCT_REF(FFloatSpringState,Z_Param_Out_SpringState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetFloatSpringState(Z_Param_Out_SpringState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatSpringInterp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_STRUCT_REF(FFloatSpringState,Z_Param_Out_SpringState); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Stiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CriticalDampingFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FloatSpringInterp(Z_Param_Current,Z_Param_Target,Z_Param_Out_SpringState,Z_Param_Stiffness,Z_Param_CriticalDampingFactor,Z_Param_DeltaTime,Z_Param_Mass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Current); \
		P_GET_STRUCT(FRotator,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRInterpTo) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Current); \
		P_GET_STRUCT(FRotator,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpTo_Constant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpTo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransform_Determinant) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Transform_Determinant(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTInterpTo) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Current); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TInterpTo(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTEase) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TEase(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTLerp) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InterpMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TLerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,ELerpInterpolationMode::Type(Z_Param_InterpMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::InvertTransform(Z_Param_Out_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertTransformToRelative) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::ConvertTransformToRelative(Z_Param_Out_Transform,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::MakeRelativeTransform(Z_Param_Out_A,Z_Param_Out_RelativeTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformRotation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::InverseTransformRotation(Z_Param_Out_T,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformDirection) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::InverseTransformDirection(Z_Param_Out_T,Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformLocation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::InverseTransformLocation(Z_Param_Out_T,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::TransformRotation(Z_Param_Out_T,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirection) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::TransformDirection(Z_Param_Out_T,Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformLocation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::TransformLocation(Z_Param_Out_T,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComposeTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::ComposeTransforms(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNearlyEqual_TransformTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationTolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationTolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale3DTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NearlyEqual_TransformTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_LocationTolerance,Z_Param_RotationTolerance,Z_Param_Scale3DTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TransformTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_TransformTransform(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTransform(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::MakeTransform(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_NameName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_A); \
		P_GET_PROPERTY(UNameProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_NameName(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_NameName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_A); \
		P_GET_PROPERTY(UNameProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_NameName(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClassIsChildOf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TestClass); \
		P_GET_OBJECT(UClass,Z_Param_ParentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::ClassIsChildOf(Z_Param_TestClass,Z_Param_ParentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ClassClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ClassClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ClassClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ClassClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ObjectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ObjectObject(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ObjectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ObjectObject(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bSelectA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UKismetMathLibrary::SelectClass(Z_Param_A,Z_Param_B,Z_Param_bSelectA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bSelectA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetMathLibrary::SelectObject(Z_Param_A,Z_Param_B,Z_Param_bSelectA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::SelectTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::SelectColor(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::SelectRotator(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::SelectVector(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::SelectFloat(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::SelectInt(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetMathLibrary::SelectString(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_InRandomStream); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InitialSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRandomStream(Z_Param_Out_InRandomStream,Z_Param_Out_InitialSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRandomStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRandomStream*)Z_Param__Result=UKismetMathLibrary::MakeRandomStream(Z_Param_InitialSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBox2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=UKismetMathLibrary::MakeBox2D(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Min); \
		P_GET_STRUCT(FVector,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=UKismetMathLibrary::MakeBox(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_FloatToVector(Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntVectorToVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InIntVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_IntVectorToVector(Z_Param_Out_InIntVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToLinearColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_ColorToLinearColor(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToInt) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Conv_ByteToInt(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToByte) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToByte(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToFloat) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToFloat(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToInt) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToInt(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToBool) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Conv_IntToBool(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToIntVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UKismetMathLibrary::Conv_IntToIntVector(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToByte) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Conv_IntToByte(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToInt64) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Conv_IntToInt64(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_IntToFloat(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToFloat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_ByteToFloat(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakFrameRate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Numerator); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakFrameRate(Z_Param_Out_InFrameRate,Z_Param_Out_Numerator,Z_Param_Out_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=UKismetMathLibrary::MakeFrameRate(Z_Param_Numerator,Z_Param_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakQualifiedFrameTime) \
	{ \
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InFrameTime); \
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_Frame); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SubFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakQualifiedFrameTime(Z_Param_Out_InFrameTime,Z_Param_Out_Frame,Z_Param_Out_FrameRate,Z_Param_Out_SubFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeQualifiedFrameTime) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame); \
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=UKismetMathLibrary::MakeQualifiedFrameTime(Z_Param_Frame,Z_Param_FrameRate,Z_Param_SubFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TimespanString); \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::TimespanFromString(Z_Param_TimespanString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanRatio) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::TimespanRatio(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromMinutes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Minutes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromMinutes(Z_Param_Minutes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromMilliseconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromMilliseconds(Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromHours) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromHours(Z_Param_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromDays) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Days); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromDays(Z_Param_Days); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalSeconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalSeconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMinutes) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalMinutes(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMilliseconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalMilliseconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalHours) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalHours(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalDays) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalDays(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetSeconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinutes) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMinutes(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMilliseconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMilliseconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHours) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHours(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::GetDuration(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDays) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDays(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_TimespanFloat) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Divide_TimespanFloat(Z_Param_A,Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_TimespanFloat) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Multiply_TimespanFloat(Z_Param_A,Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Subtract_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Add_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTimespan2) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Days); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FractionNano); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTimespan2(Z_Param_InTimespan,Z_Param_Out_Days,Z_Param_Out_Hours,Z_Param_Out_Minutes,Z_Param_Out_Seconds,Z_Param_Out_FractionNano); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Days); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTimespan(Z_Param_InTimespan,Z_Param_Out_Days,Z_Param_Out_Hours,Z_Param_Out_Minutes,Z_Param_Out_Seconds,Z_Param_Out_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTimespan2) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Days); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hours); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minutes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FractionNano); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::MakeTimespan2(Z_Param_Days,Z_Param_Hours,Z_Param_Minutes,Z_Param_Seconds,Z_Param_FractionNano); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTimespan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Days); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hours); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minutes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::MakeTimespan(Z_Param_Days,Z_Param_Hours,Z_Param_Minutes,Z_Param_Seconds,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanZeroValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanZeroValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTimeString); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::DateTimeFromString(Z_Param_DateTimeString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeFromIsoString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IsoString); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::DateTimeFromIsoString(Z_Param_IsoString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUtcNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::UtcNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToday) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Today(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Now(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::DateTimeMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::DateTimeMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeapYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsLeapYear(Z_Param_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDaysInYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::DaysInYear(Z_Param_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDaysInMonth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Month); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::DaysInMonth(Z_Param_Year,Z_Param_Month); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMorning) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsMorning(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAfternoon) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsAfternoon(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYear) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetYear(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeOfDay) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::GetTimeOfDay(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecond) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetSecond(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMonth) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMonth(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinute) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMinute(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMillisecond) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMillisecond(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHour12) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHour12(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHour) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHour(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayOfYear) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDayOfYear(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDay) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDay(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDate) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::GetDate(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Subtract_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_DateTimeTimespan) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Subtract_DateTimeTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_DateTimeTimespan) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Add_DateTimeTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hour); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minute); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Second); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Millisecond); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakDateTime(Z_Param_InDateTime,Z_Param_Out_Year,Z_Param_Out_Month,Z_Param_Out_Day,Z_Param_Out_Hour,Z_Param_Out_Minute,Z_Param_Out_Second,Z_Param_Out_Millisecond); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDateTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Month); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Day); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hour); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minute); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Second); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Millisecond); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::MakeDateTime(Z_Param_Year,Z_Param_Month,Z_Param_Day,Z_Param_Hour,Z_Param_Minute,Z_Param_Second,Z_Param_Millisecond); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePlaneFromPointAndNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=UKismetMathLibrary::MakePlaneFromPointAndNormal(Z_Param_Point,Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Divide_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_LinearColorFloat) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Multiply_LinearColorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Multiply_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Subtract_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Add_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_IsNearEqual) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinearColor_IsNearEqual(Z_Param_A,Z_Param_B,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorLerpUsingHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColorLerpUsingHSV(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorLerp) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColorLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCInterpTo) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Current); \
		P_GET_STRUCT(FLinearColor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::CInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetMin) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetMin(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetMax) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetMax(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetLuminance) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetLuminance(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_ToNewOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_ToNewOpacity(Z_Param_InColor,Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Distance) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_C1); \
		P_GET_STRUCT(FLinearColor,Z_Param_C2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_Distance(Z_Param_C1,Z_Param_C2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Desaturated) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDesaturation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Desaturated(Z_Param_InColor,Z_Param_InDesaturation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_QuantizeRound) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_QuantizeRound(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Quantize) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Quantize(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_GET_UBOOL(Z_Param_InUseSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::Conv_LinearColorToColor(Z_Param_InLinearColor,Z_Param_InUseSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_ToRGBE) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_ToRGBE(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToVector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_LinearColorToVector(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBLinearToHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::RGBLinearToHSV(Z_Param_RGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBToHSV_Vector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RGB); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::RGBToHSV_Vector(Z_Param_RGB,Z_Param_Out_HSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBToHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_H); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_S); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_V); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::RGBToHSV(Z_Param_InColor,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_V,Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGBLinear) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_HSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::HSVToRGBLinear(Z_Param_HSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGB_Vector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_HSV); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_RGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::HSVToRGB_Vector(Z_Param_HSV,Z_Param_Out_RGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGB) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_H); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_S); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::HSVToRGB(Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToLinearColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_FloatToLinearColor(Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetRandomHue) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetRandomHue(Z_Param_Out_InOutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetTemperature) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetTemperature(Z_Param_Out_InOutColor,Z_Param_InTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromPow22) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromPow22(Z_Param_Out_InOutColor,Z_Param_Out_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromSRGB) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromSRGB(Z_Param_Out_InOutColor,Z_Param_Out_InSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromHSV) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_H); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_S); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromHSV(Z_Param_Out_InOutColor,Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetRGBA) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_R); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_G); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetRGBA(Z_Param_Out_InOutColor,Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Set) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_Set(Z_Param_Out_InOutColor,Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_R); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_G); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakColor(Z_Param_InColor,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_R); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_G); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::MakeColor(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Transparent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Transparent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Yellow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Yellow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Blue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Blue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Green) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Green(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Red) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Red(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Black) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Black(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Gray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Gray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_White) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_White(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_UnrotateVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_UnrotateVector(Z_Param_Out_Q,Z_Param_Out_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_RotateVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_RotateVector(Z_Param_Out_Q,Z_Param_Out_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SizeSquared) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_SizeSquared(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Size) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_Size(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Rotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Quat_Rotator(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_MakeFromEuler) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_MakeFromEuler(Z_Param_Out_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SetFromEuler) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_SetFromEuler(Z_Param_Out_Q,Z_Param_Out_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SetComponents) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_SetComponents(Z_Param_Out_Q,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Log) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Log(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Inversed) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Inversed(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetRotationAxis) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetRotationAxis(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Normalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Normalized(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Normalize) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_Normalize(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorUp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorUp(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorRight) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorRight(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorForward) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorForward(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisZ) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisZ(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisY) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisY(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisX) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisX(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAngle) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_GetAngle(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Exp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Exp(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Euler) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_Euler(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_EnforceShortestArcWith) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_EnforceShortestArcWith(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_AngularDistance) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_AngularDistance(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsNonFinite) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsNonFinite(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsFinite) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsFinite(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsNormalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsNormalized(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsIdentity) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsIdentity(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Multiply_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Subtract_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Add_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_QuatQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_QuatQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Identity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Identity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatrix_GetOrigin) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Matrix_GetOrigin(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_MatrixToRotator) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_MatrixToRotator(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_MatrixToTransform) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_MatrixToTransform(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeAxis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::NormalizeAxis(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAxis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::ClampAxis(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizedDeltaRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::NormalizedDeltaRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execREase) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_UBOOL(Z_Param_bShortestPath); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::REase(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_bShortestPath,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRLerp) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_UBOOL(Z_Param_bShortestPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_bShortestPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRotator) \
	{ \
		P_GET_UBOOL(Z_Param_bRoll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RandomRotator(Z_Param_bRoll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxes) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetAxes(Z_Param_A,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToTransform) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_RotatorToTransform(Z_Param_Out_InRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_RotatorToVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetUpVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetRightVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetForwardVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::NegateRotator(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComposeRotators) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::ComposeRotators(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_RotatorInt) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Multiply_RotatorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_RotatorFloat) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Multiply_RotatorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_RotatorRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_RotatorRotator(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_RotatorRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_RotatorRotator(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRotIntoAxes) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRot); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRotIntoAxes(Z_Param_Out_InRot,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Roll); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRotator(Z_Param_InRot,Z_Param_Out_Roll,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLookAtRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::FindLookAtRotation(Z_Param_Out_Start,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotationFromAxes) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Right); \
		P_GET_STRUCT(FVector,Z_Param_Up); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotationFromAxes(Z_Param_Forward,Z_Param_Right,Z_Param_Up); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZY(Z_Param_Out_Z,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZX(Z_Param_Out_Z,Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromYZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromYZ(Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromYX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromYX(Z_Param_Out_Y,Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromXZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromXZ(Z_Param_Out_X,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromXY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromXY(Z_Param_Out_X,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZ(Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromY(Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromX(Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotator) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotator(Z_Param_Roll,Z_Param_Pitch,Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_MirrorByVector3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Direction); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SurfaceNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_MirrorByVector3(Z_Param_Out_Direction,Z_Param_Out_SurfaceNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Normalize3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Normalize3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_NormalUnsafe3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_NormalUnsafe3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Normal3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Normal3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNormal3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNormal3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsUnit3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SquaredLenthTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsUnit3(Z_Param_Out_A,Z_Param_SquaredLenthTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_SizeSquared3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_SizeSquared3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Size3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_Size3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_SizeSquared) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_SizeSquared(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Size) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_Size(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsZero) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsZero(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNearlyZero3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNearlyZero3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNAN) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNAN(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_DotProduct3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_DotProduct3(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_DotProduct) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_DotProduct(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_CrossProduct3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_CrossProduct3(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Set) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Set(Z_Param_Out_A,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Assign) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Assign(Z_Param_Out_A,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Negated) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Negated(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Divide_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Add_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToQuaterion) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToQuaterion(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToRotator(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToVector) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector4); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToVector(Z_Param_Out_InVector4); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector4(Z_Param_Out_InVec,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector4) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::MakeVector4(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(Z_Param_ConeDir,Z_Param_MaxYawInDegrees,Z_Param_MaxPitchInDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInRadians); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadians(Z_Param_ConeDir,Z_Param_MaxYawInRadians,Z_Param_MaxPitchInRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInDegrees(Z_Param_ConeDir,Z_Param_ConeHalfAngleInDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInRadians(Z_Param_ConeDir,Z_Param_ConeHalfAngleInRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomPointInBoundingBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomPointInBoundingBox(Z_Param_Origin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointDistanceToLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPointDistanceToLine(Z_Param_Point,Z_Param_LineOrigin,Z_Param_LineDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointDistanceToSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPointDistanceToSegment(Z_Param_Point,Z_Param_SegmentStart,Z_Param_SegmentEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestPointOnLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::FindClosestPointOnLine(Z_Param_Point,Z_Param_LineOrigin,Z_Param_LineDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestPointOnSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::FindClosestPointOnSegment(Z_Param_Point,Z_Param_SegmentStart,Z_Param_SegmentEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNearestPointsOnLineSegments) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Segment1Start); \
		P_GET_STRUCT(FVector,Z_Param_Segment1End); \
		P_GET_STRUCT(FVector,Z_Param_Segment2Start); \
		P_GET_STRUCT(FVector,Z_Param_Segment2End); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Segment1Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Segment2Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::FindNearestPointsOnLineSegments(Z_Param_Segment1Start,Z_Param_Segment1End,Z_Param_Segment2Start,Z_Param_Segment2End,Z_Param_Out_Segment1Point,Z_Param_Out_Segment2Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectVectorOnToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectVectorOnToPlane(Z_Param_V,Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointOnToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_PlaneBase); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectPointOnToPlane(Z_Param_Point,Z_Param_PlaneBase,Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectVectorOnToVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectVectorOnToVector(Z_Param_V,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ProjectOnToNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_InNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ProjectOnToNormal(Z_Param_V,Z_Param_InNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_BoundedToBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_STRUCT(FVector,Z_Param_InBoxMin); \
		P_GET_STRUCT(FVector,Z_Param_InBoxMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_BoundedToBox(Z_Param_InVect,Z_Param_InBoxMin,Z_Param_InBoxMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_AddBounded) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT(FVector,Z_Param_InAddVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_AddBounded(Z_Param_Out_A,Z_Param_InAddVect,Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_BoundedToCube) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_BoundedToCube(Z_Param_InVect,Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_SnappedToGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_SnappedToGrid(Z_Param_InVect,Z_Param_InGridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_MirrorByPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_MirrorByPlane(Z_Param_A,Z_Param_Out_InPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMirrorVectorByNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_STRUCT(FVector,Z_Param_InNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::MirrorVectorByNormal(Z_Param_InVect,Z_Param_InNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReflectionVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_STRUCT(FVector,Z_Param_SurfaceNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetReflectionVector(Z_Param_Direction,Z_Param_SurfaceNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Reciprocal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Reciprocal(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorSpringInterp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_STRUCT_REF(FVectorSpringState,Z_Param_Out_SpringState); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Stiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CriticalDampingFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VectorSpringInterp(Z_Param_Current,Z_Param_Target,Z_Param_Out_SpringState,Z_Param_Stiffness,Z_Param_CriticalDampingFactor,Z_Param_DeltaTime,Z_Param_Mass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVInterpTo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVEase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VEase(Z_Param_A,Z_Param_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVLerp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Normalize) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Normalize(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_NormalUnsafe) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_NormalUnsafe(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Normal2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Normal2D(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Normal(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNormal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNormal(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsUnit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SquaredLenthTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsUnit(Z_Param_Out_A,Z_Param_SquaredLenthTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsUniform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsUniform(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNAN) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNAN(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsZero(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNearlyZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNearlyZero(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeXYSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeXYSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeXY) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeXY(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance2DSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance2DSquared(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_DistanceSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_DistanceSquared(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTruncVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UKismetMathLibrary::FTruncVector(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorArrayAverage) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetVectorArrayAverage(Z_Param_Out_Vectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAzimuthAndElevation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InDirection); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReferenceFrame); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Azimuth); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Elevation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetAzimuthAndElevation(Z_Param_InDirection,Z_Param_Out_ReferenceFrame,Z_Param_Out_Azimuth,Z_Param_Out_Elevation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYawPitchFromVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetYawPitchFromVector(Z_Param_InVec,Z_Param_Out_Yaw,Z_Param_Out_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionUnitVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_From); \
		P_GET_STRUCT(FVector,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetDirectionUnitVector(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_UnitCartesianToSpherical) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector_UnitCartesianToSpherical(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ToDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ToDegrees(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ToRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ToRadians(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_CosineAngle2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_CosineAngle2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_HeadingAngle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_HeadingAngle(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetProjection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetProjection(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetSignVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetSignVector(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ComponentMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ComponentMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ComponentMin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ComponentMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbs) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbs(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbsMin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbsMin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbsMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbsMax(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxElement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMaxElement(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinElement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMinElement(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSizeMax2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSizeMax2D(Z_Param_A,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSizeMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSizeMax(Z_Param_A,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSize2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSize2D(Z_Param_A,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampVectorSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ClampVectorSize(Z_Param_A,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_UnwindEuler) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_UnwindEuler(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessLess_VectorRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::LessLess_VectorRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAngleAxis) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDeg); \
		P_GET_STRUCT(FVector,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RotateAngleAxis(Z_Param_InVect,Z_Param_AngleDeg,Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterGreater_VectorRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GreaterGreater_VectorRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCross_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Cross_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDot_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Dot_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_VectorVector(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_VectorVector(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::NegateVector(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToQuaterion) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToQuaterion(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorFromAxisAndAngle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Axis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RotatorFromAxisAndAngle(Z_Param_Axis,Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToRotator(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToVector2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToVector2D(Z_Param_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToTransform(Z_Param_InLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToLinearColor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToLinearColor(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector(Z_Param_InVec,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Set) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Set(Z_Param_Out_A,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Assign) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Assign(Z_Param_Out_A,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVectorFromYawPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::CreateVectorFromYawPitch(Z_Param_Yaw,Z_Param_Pitch,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::MakeVector(Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Left) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Left(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Right) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Right(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Down) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Down(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Up) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Up(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Backward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Backward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Forward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Forward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_One) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_One(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize2DSquared) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize2DSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToSign2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ToSign2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToRounded2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ToRounded2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToDirectionAndLength2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutDir); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ToDirectionAndLength2D(Z_Param_A,Z_Param_Out_OutDir,Z_Param_Out_OutLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpherical2DToUnitCartesian) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Spherical2DToUnitCartesian(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalize2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Normalize2D(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormal2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Normal2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalSafe2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::NormalSafe2D(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2DInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2DInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsZero2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsZero2D(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNearlyZero2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsNearlyZero2D(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotated2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::GetRotated2D(Z_Param_A,Z_Param_AngleDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMin2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMin2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMax2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMax2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbsMax2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetAbsMax2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbs2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::GetAbs2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDotProduct2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DotProduct2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistanceSquared2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DistanceSquared2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistance2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Distance2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrossProduct2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::CrossProduct2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAxes2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinAxisVal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAxisVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ClampAxes2D(Z_Param_A,Z_Param_MinAxisVal,Z_Param_MaxAxisVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSet2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Set2D(Z_Param_Out_A,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegated2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Negated2D(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Divide_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Divide_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Add_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Add_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2DToIntPoint) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UKismetMathLibrary::Conv_Vector2DToIntPoint(Z_Param_InVector2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2DToVector) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_Vector2DToVector(Z_Param_InVector2D,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector2D(Z_Param_InVec,Z_Param_Out_X,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::MakeVector2D(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Unit45Deg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_Unit45Deg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_One) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_One(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixedTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCurrent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDesired); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDeltaRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FixedTurn(Z_Param_InCurrent,Z_Param_InDesired,Z_Param_InDeltaRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePulsatingValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCurrentTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPulsesPerSecond); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MakePulsatingValue(Z_Param_InCurrentTime,Z_Param_InPulsesPerSecond,Z_Param_InPhase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpEaseInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpEaseInOut(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_Exponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyByPi) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MultiplyByPi(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeClamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MapRangeClamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeUnclamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MapRangeUnclamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeToRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::NormalizeToRange(Z_Param_Value,Z_Param_RangeMin,Z_Param_RangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::SignOfFloat(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Dividend); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Divisor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Remainder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FMod(Z_Param_Dividend,Z_Param_Divisor,Z_Param_Out_Remainder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCeil) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FCeil(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCeil64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FCeil64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTrunc64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FTrunc64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFFloor64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FFloor64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Round64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTrunc) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FTrunc(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFFloor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FFloor(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Round(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Ease(Z_Param_A,Z_Param_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Lerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfByteArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfByteArray(Z_Param_Out_ByteArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfByteArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfByteArray(Z_Param_Out_ByteArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFClamp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FClamp(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinAngleDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAngleDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::ClampAngle(Z_Param_AngleDegrees,Z_Param_MinAngleDegrees,Z_Param_MaxAngleDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAtan2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAtan2(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAtan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAtan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegTan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegTan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAcos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAcos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegCos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegCos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAsin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAsin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegSin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegSin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRadiansToDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RadiansToDegrees(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegreesToRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegreesToRadians(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTAU) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTAU(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSquare) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Square(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSqrt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Sqrt(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Loge(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLog) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Log(Z_Param_A,Z_Param_Base); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Exp(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAtan2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Atan2(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAtan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Atan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Tan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Acos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Cos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Asin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Sin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Abs(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnap_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GridSnap_Float(Z_Param_Location,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHypotenuse) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Hypotenuse(Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_FloatFloat(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNearlyEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NearlyEqual_FloatFloat(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Subtract_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Add_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Fraction(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Multiply_IntFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Multiply_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyMultiply_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MultiplyMultiply_FloatFloat(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs_Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Abs_Int64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::ClampInt64(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::MaxInt64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::MinInt64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger64InRange) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::RandomInteger64InRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::RandomInteger64(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfInteger64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::SignOfInteger64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Not_Int64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOr_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Or_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXor_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Xor_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnd_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::And_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_Int64Int64(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Subtract_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Add_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Divide_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Multiply_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Abs_Int(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClamp) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Clamp(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomInteger(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::SignOfInteger(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Not_Int(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOr_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Or_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXor_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Xor_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnd_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::And_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_IntInt(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Subtract_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Add_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercent_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Percent_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Divide_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Multiply_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBMax) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::BMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBMin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::BMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Subtract_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Add_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercent_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Percent_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Divide_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Multiply_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanNOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanNOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanXOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanXOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanNAND) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanNAND(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanAND) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanAND(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_BoolBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_BoolBool(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_BoolBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_BoolBool(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_PreBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Not_PreBool(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolWithWeightFromStream) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolWithWeightFromStream(Z_Param_Weight,Z_Param_Out_RandomStream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolWithWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolWithWeight(Z_Param_Weight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBool(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinePlaneIntersection_OriginNormal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_T); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Intersection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinePlaneIntersection_OriginNormal(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_PlaneOrigin,Z_Param_PlaneNormal,Z_Param_Out_T,Z_Param_Out_Intersection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinePlaneIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_APlane); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_T); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Intersection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinePlaneIntersection(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_Out_APlane,Z_Param_Out_T,Z_Param_Out_Intersection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlopeDegreeAngles) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyRightYAxis); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FloorNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSlopePitchDegreeAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSlopeRollDegreeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetSlopeDegreeAngles(Z_Param_Out_MyRightYAxis,Z_Param_Out_FloorNormal,Z_Param_Out_UpVector,Z_Param_Out_OutSlopePitchDegreeAngle,Z_Param_Out_OutSlopeRollDegreeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInBoxWithTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BoxWorldTransform); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsPointInBoxWithTransform(Z_Param_Point,Z_Param_Out_BoxWorldTransform,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsPointInBox(Z_Param_Point,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointsAreCoplanar) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::PointsAreCoplanar(Z_Param_Out_Points,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinimumAreaRectangle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthY); \
		P_GET_UBOOL(Z_Param_bDebugDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerlinNoise1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::PerlinNoise1D(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegreesFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInDegrees); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegreesFromStream(Z_Param_Out_ConeDir,Z_Param_MaxYawInDegrees,Z_Param_MaxPitchInDegrees,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadiansFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInRadians); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInRadians); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadiansFromStream(Z_Param_Out_ConeDir,Z_Param_MaxYawInRadians,Z_Param_MaxPitchInRadians,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegreesFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInDegrees); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInDegreesFromStream(Z_Param_Out_ConeDir,Z_Param_ConeHalfAngleInDegrees,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadiansFromStream) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInRadians); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInRadiansFromStream(Z_Param_Out_ConeDir,Z_Param_ConeHalfAngleInRadians,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomStreamSeed) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::SetRandomStreamSeed(Z_Param_Out_Stream,Z_Param_NewSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeedRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::SeedRandomStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetRandomStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRotatorFromStream) \
	{ \
		P_GET_UBOOL(Z_Param_bRoll); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RandomRotatorFromStream(Z_Param_bRoll,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRangeFromStream) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatInRangeFromStream(Z_Param_Min,Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolFromStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolFromStream(Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRangeFromStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerInRangeFromStream(Z_Param_Min,Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerFromStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerFromStream(Z_Param_Max,Z_Param_Out_Stream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetVectorSpringState) \
	{ \
		P_GET_STRUCT_REF(FVectorSpringState,Z_Param_Out_SpringState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetVectorSpringState(Z_Param_Out_SpringState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFloatSpringState) \
	{ \
		P_GET_STRUCT_REF(FFloatSpringState,Z_Param_Out_SpringState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ResetFloatSpringState(Z_Param_Out_SpringState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatSpringInterp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_STRUCT_REF(FFloatSpringState,Z_Param_Out_SpringState); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Stiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CriticalDampingFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FloatSpringInterp(Z_Param_Current,Z_Param_Target,Z_Param_Out_SpringState,Z_Param_Stiffness,Z_Param_CriticalDampingFactor,Z_Param_DeltaTime,Z_Param_Mass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Current); \
		P_GET_STRUCT(FRotator,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRInterpTo) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Current); \
		P_GET_STRUCT(FRotator,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpTo_Constant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpTo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransform_Determinant) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Transform_Determinant(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTInterpTo) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Current); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TInterpTo(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTEase) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TEase(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTLerp) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InterpMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::TLerp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,ELerpInterpolationMode::Type(Z_Param_InterpMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::InvertTransform(Z_Param_Out_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertTransformToRelative) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::ConvertTransformToRelative(Z_Param_Out_Transform,Z_Param_Out_ParentTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::MakeRelativeTransform(Z_Param_Out_A,Z_Param_Out_RelativeTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformRotation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::InverseTransformRotation(Z_Param_Out_T,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformDirection) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::InverseTransformDirection(Z_Param_Out_T,Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInverseTransformLocation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::InverseTransformLocation(Z_Param_Out_T,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::TransformRotation(Z_Param_Out_T,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirection) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::TransformDirection(Z_Param_Out_T,Z_Param_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformLocation) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::TransformLocation(Z_Param_Out_T,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComposeTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::ComposeTransforms(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNearlyEqual_TransformTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationTolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationTolerance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale3DTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NearlyEqual_TransformTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_LocationTolerance,Z_Param_RotationTolerance,Z_Param_Scale3DTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TransformTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_TransformTransform(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTransform(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::MakeTransform(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_NameName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_A); \
		P_GET_PROPERTY(UNameProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_NameName(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_NameName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_A); \
		P_GET_PROPERTY(UNameProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_NameName(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClassIsChildOf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TestClass); \
		P_GET_OBJECT(UClass,Z_Param_ParentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::ClassIsChildOf(Z_Param_TestClass,Z_Param_ParentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ClassClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ClassClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ClassClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ClassClass(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ObjectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ObjectObject(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ObjectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ObjectObject(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_A); \
		P_GET_OBJECT(UClass,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bSelectA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UKismetMathLibrary::SelectClass(Z_Param_A,Z_Param_B,Z_Param_bSelectA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_A); \
		P_GET_OBJECT(UObject,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bSelectA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UKismetMathLibrary::SelectObject(Z_Param_A,Z_Param_B,Z_Param_bSelectA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::SelectTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::SelectColor(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::SelectRotator(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::SelectVector(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::SelectFloat(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::SelectInt(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_GET_UBOOL(Z_Param_bPickA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetMathLibrary::SelectString(Z_Param_A,Z_Param_B,Z_Param_bPickA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRandomStream) \
	{ \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_InRandomStream); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InitialSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRandomStream(Z_Param_Out_InRandomStream,Z_Param_Out_InitialSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRandomStream) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRandomStream*)Z_Param__Result=UKismetMathLibrary::MakeRandomStream(Z_Param_InitialSeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBox2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox2D*)Z_Param__Result=UKismetMathLibrary::MakeBox2D(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Min); \
		P_GET_STRUCT(FVector,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=UKismetMathLibrary::MakeBox(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_FloatToVector(Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntVectorToVector) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InIntVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_IntVectorToVector(Z_Param_Out_InIntVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ColorToLinearColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_ColorToLinearColor(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToInt) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Conv_ByteToInt(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToByte) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToByte(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToFloat) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToFloat(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_BoolToInt) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Conv_BoolToInt(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToBool) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Conv_IntToBool(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToIntVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UKismetMathLibrary::Conv_IntToIntVector(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToByte) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Conv_IntToByte(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToInt64) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Conv_IntToInt64(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_IntToFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_IntToFloat(Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_ByteToFloat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Conv_ByteToFloat(Z_Param_InByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakFrameRate) \
	{ \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InFrameRate); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Numerator); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakFrameRate(Z_Param_Out_InFrameRate,Z_Param_Out_Numerator,Z_Param_Out_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=UKismetMathLibrary::MakeFrameRate(Z_Param_Numerator,Z_Param_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakQualifiedFrameTime) \
	{ \
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InFrameTime); \
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_Frame); \
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SubFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakQualifiedFrameTime(Z_Param_Out_InFrameTime,Z_Param_Out_Frame,Z_Param_Out_FrameRate,Z_Param_Out_SubFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeQualifiedFrameTime) \
	{ \
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame); \
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=UKismetMathLibrary::MakeQualifiedFrameTime(Z_Param_Frame,Z_Param_FrameRate,Z_Param_SubFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TimespanString); \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::TimespanFromString(Z_Param_TimespanString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanRatio) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::TimespanRatio(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromMinutes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Minutes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromMinutes(Z_Param_Minutes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromMilliseconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromMilliseconds(Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromHours) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromHours(Z_Param_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromDays) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Days); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::FromDays(Z_Param_Days); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalSeconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalSeconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMinutes) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalMinutes(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMilliseconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalMilliseconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalHours) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalHours(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalDays) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTotalDays(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetSeconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinutes) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMinutes(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMilliseconds) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMilliseconds(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHours) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHours(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::GetDuration(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDays) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDays(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_TimespanFloat) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Divide_TimespanFloat(Z_Param_A,Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_TimespanFloat) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scalar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Multiply_TimespanFloat(Z_Param_A,Z_Param_Scalar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Subtract_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_TimespanTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Add_TimespanTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTimespan2) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Days); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FractionNano); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTimespan2(Z_Param_InTimespan,Z_Param_Out_Days,Z_Param_Out_Hours,Z_Param_Out_Minutes,Z_Param_Out_Seconds,Z_Param_Out_FractionNano); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTimespan) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Days); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakTimespan(Z_Param_InTimespan,Z_Param_Out_Days,Z_Param_Out_Hours,Z_Param_Out_Minutes,Z_Param_Out_Seconds,Z_Param_Out_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTimespan2) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Days); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hours); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minutes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FractionNano); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::MakeTimespan2(Z_Param_Days,Z_Param_Hours,Z_Param_Minutes,Z_Param_Seconds,Z_Param_FractionNano); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTimespan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Days); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hours); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minutes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::MakeTimespan(Z_Param_Days,Z_Param_Hours,Z_Param_Minutes,Z_Param_Seconds,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanZeroValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanZeroValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimespanMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::TimespanMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTimeString); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::DateTimeFromString(Z_Param_DateTimeString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeFromIsoString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IsoString); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::DateTimeFromIsoString(Z_Param_IsoString,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUtcNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::UtcNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToday) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Today(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Now(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::DateTimeMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateTimeMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::DateTimeMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeapYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsLeapYear(Z_Param_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDaysInYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::DaysInYear(Z_Param_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDaysInMonth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Month); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::DaysInMonth(Z_Param_Year,Z_Param_Month); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMorning) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsMorning(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAfternoon) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsAfternoon(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYear) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetYear(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeOfDay) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::GetTimeOfDay(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecond) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetSecond(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMonth) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMonth(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinute) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMinute(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMillisecond) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetMillisecond(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHour12) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHour12(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHour) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetHour(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayOfYear) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDayOfYear(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDay) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::GetDay(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDate) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::GetDate(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_DateTimeDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FDateTime,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=UKismetMathLibrary::Subtract_DateTimeDateTime(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_DateTimeTimespan) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Subtract_DateTimeTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_DateTimeTimespan) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_A); \
		P_GET_STRUCT(FTimespan,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::Add_DateTimeTimespan(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakDateTime) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hour); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minute); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Second); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Millisecond); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakDateTime(Z_Param_InDateTime,Z_Param_Out_Year,Z_Param_Out_Month,Z_Param_Out_Day,Z_Param_Out_Hour,Z_Param_Out_Minute,Z_Param_Out_Second,Z_Param_Out_Millisecond); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDateTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Month); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Day); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Hour); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Minute); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Second); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Millisecond); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=UKismetMathLibrary::MakeDateTime(Z_Param_Year,Z_Param_Month,Z_Param_Day,Z_Param_Hour,Z_Param_Minute,Z_Param_Second,Z_Param_Millisecond); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePlaneFromPointAndNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=UKismetMathLibrary::MakePlaneFromPointAndNormal(Z_Param_Point,Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Divide_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_LinearColorFloat) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Multiply_LinearColorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Multiply_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Subtract_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Add_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_LinearColorLinearColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_LinearColorLinearColor(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_IsNearEqual) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LinearColor_IsNearEqual(Z_Param_A,Z_Param_B,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorLerpUsingHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColorLerpUsingHSV(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorLerp) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_A); \
		P_GET_STRUCT(FLinearColor,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColorLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCInterpTo) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Current); \
		P_GET_STRUCT(FLinearColor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::CInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetMin) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetMin(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetMax) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetMax(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_GetLuminance) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_GetLuminance(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_ToNewOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_ToNewOpacity(Z_Param_InColor,Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Distance) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_C1); \
		P_GET_STRUCT(FLinearColor,Z_Param_C2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::LinearColor_Distance(Z_Param_C1,Z_Param_C2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Desaturated) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDesaturation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Desaturated(Z_Param_InColor,Z_Param_InDesaturation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_QuantizeRound) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_QuantizeRound(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Quantize) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Quantize(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_GET_UBOOL(Z_Param_InUseSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::Conv_LinearColorToColor(Z_Param_InLinearColor,Z_Param_InUseSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_ToRGBE) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_ToRGBE(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_LinearColorToVector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InLinearColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_LinearColorToVector(Z_Param_InLinearColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBLinearToHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::RGBLinearToHSV(Z_Param_RGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBToHSV_Vector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_RGB); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::RGBToHSV_Vector(Z_Param_RGB,Z_Param_Out_HSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRGBToHSV) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_H); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_S); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_V); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::RGBToHSV(Z_Param_InColor,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_V,Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGBLinear) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_HSV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::HSVToRGBLinear(Z_Param_HSV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGB_Vector) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_HSV); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_RGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::HSVToRGB_Vector(Z_Param_HSV,Z_Param_Out_RGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHSVToRGB) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_H); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_S); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::HSVToRGB(Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FloatToLinearColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_FloatToLinearColor(Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetRandomHue) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetRandomHue(Z_Param_Out_InOutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetTemperature) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetTemperature(Z_Param_Out_InOutColor,Z_Param_InTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromPow22) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromPow22(Z_Param_Out_InOutColor,Z_Param_Out_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromSRGB) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromSRGB(Z_Param_Out_InOutColor,Z_Param_Out_InSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetFromHSV) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_H); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_S); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetFromHSV(Z_Param_Out_InOutColor,Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_SetRGBA) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_R); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_G); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_SetRGBA(Z_Param_Out_InOutColor,Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Set) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InOutColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::LinearColor_Set(Z_Param_Out_InOutColor,Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_R); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_G); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_B); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakColor(Z_Param_InColor,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_R); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_G); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::MakeColor(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Transparent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Transparent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Yellow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Yellow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Blue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Blue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Green) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Green(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Red) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Red(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Black) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Black(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_Gray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_Gray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColor_White) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::LinearColor_White(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_UnrotateVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_UnrotateVector(Z_Param_Out_Q,Z_Param_Out_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_RotateVector) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_RotateVector(Z_Param_Out_Q,Z_Param_Out_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SizeSquared) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_SizeSquared(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Size) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_Size(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Rotator) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Quat_Rotator(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_MakeFromEuler) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_MakeFromEuler(Z_Param_Out_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SetFromEuler) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Euler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_SetFromEuler(Z_Param_Out_Q,Z_Param_Out_Euler); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_SetComponents) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_SetComponents(Z_Param_Out_Q,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Log) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Log(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Inversed) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Inversed(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetRotationAxis) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetRotationAxis(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Normalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Normalized(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Normalize) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_Normalize(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorUp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorUp(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorRight) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorRight(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_VectorForward) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_VectorForward(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisZ) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisZ(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisY) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisY(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAxisX) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_GetAxisX(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_GetAngle) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_GetAngle(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Exp) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Exp(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Euler) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Quat_Euler(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_EnforceShortestArcWith) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Quat_EnforceShortestArcWith(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_AngularDistance) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Quat_AngularDistance(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsNonFinite) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsNonFinite(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsFinite) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsFinite(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsNormalized) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsNormalized(Z_Param_Out_Q); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_IsIdentity) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Q); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Quat_IsIdentity(Z_Param_Out_Q,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Multiply_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Subtract_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Add_QuatQuat(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_QuatQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_QuatQuat) \
	{ \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_QuatQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuat_Identity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Quat_Identity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatrix_GetOrigin) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Matrix_GetOrigin(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_MatrixToRotator) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_MatrixToRotator(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_MatrixToTransform) \
	{ \
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_MatrixToTransform(Z_Param_Out_InMatrix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeAxis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::NormalizeAxis(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAxis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::ClampAxis(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizedDeltaRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::NormalizedDeltaRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execREase) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_UBOOL(Z_Param_bShortestPath); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::REase(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_bShortestPath,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRLerp) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_UBOOL(Z_Param_bShortestPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_bShortestPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRotator) \
	{ \
		P_GET_UBOOL(Z_Param_bRoll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RandomRotator(Z_Param_bRoll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxes) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetAxes(Z_Param_A,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToTransform) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_RotatorToTransform(Z_Param_Out_InRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_RotatorToVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_RotatorToVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetUpVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetRightVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetForwardVector(Z_Param_InRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::NegateRotator(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComposeRotators) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::ComposeRotators(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_RotatorInt) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Multiply_RotatorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_RotatorFloat) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Multiply_RotatorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_RotatorRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_RotatorRotator(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_RotatorRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_RotatorRotator(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRotIntoAxes) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRot); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRotIntoAxes(Z_Param_Out_InRot,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_InRot); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Roll); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakRotator(Z_Param_InRot,Z_Param_Out_Roll,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLookAtRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::FindLookAtRotation(Z_Param_Out_Start,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotationFromAxes) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Right); \
		P_GET_STRUCT(FVector,Z_Param_Up); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotationFromAxes(Z_Param_Forward,Z_Param_Right,Z_Param_Up); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZY(Z_Param_Out_Z,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZX(Z_Param_Out_Z,Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromYZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromYZ(Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromYX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromYX(Z_Param_Out_Y,Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromXZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromXZ(Z_Param_Out_X,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromXY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromXY(Z_Param_Out_X,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromZ) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromZ(Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromY) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromY(Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotFromX) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_X); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotFromX(Z_Param_Out_X); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeRotator) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::MakeRotator(Z_Param_Roll,Z_Param_Pitch,Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_MirrorByVector3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Direction); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SurfaceNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_MirrorByVector3(Z_Param_Out_Direction,Z_Param_Out_SurfaceNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Normalize3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Normalize3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_NormalUnsafe3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_NormalUnsafe3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Normal3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Normal3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNormal3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNormal3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsUnit3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SquaredLenthTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsUnit3(Z_Param_Out_A,Z_Param_SquaredLenthTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_SizeSquared3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_SizeSquared3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Size3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_Size3(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_SizeSquared) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_SizeSquared(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Size) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_Size(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsZero) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsZero(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNearlyZero3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNearlyZero3(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_IsNAN) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector4_IsNAN(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_DotProduct3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_DotProduct3(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_DotProduct) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector4_DotProduct(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_CrossProduct3) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_CrossProduct3(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Set) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Set(Z_Param_Out_A,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Assign) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector4_Assign(Z_Param_Out_A,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Negated) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Negated(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Divide_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector4Vector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Add_Vector4Vector4(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToQuaterion) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToQuaterion(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToRotator(Z_Param_Out_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector4ToVector) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector4); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_Vector4ToVector(Z_Param_Out_InVector4); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector4) \
	{ \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector4(Z_Param_Out_InVec,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector4) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_W); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::MakeVector4(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector4_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector4*)Z_Param__Result=UKismetMathLibrary::Vector4_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(Z_Param_ConeDir,Z_Param_MaxYawInDegrees,Z_Param_MaxPitchInDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxYawInRadians); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitchInRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadians(Z_Param_ConeDir,Z_Param_MaxYawInRadians,Z_Param_MaxPitchInRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInDegrees(Z_Param_ConeDir,Z_Param_ConeHalfAngleInDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngleInRadians); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVectorInConeInRadians(Z_Param_ConeDir,Z_Param_ConeHalfAngleInRadians); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomPointInBoundingBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomPointInBoundingBox(Z_Param_Origin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomUnitVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RandomUnitVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointDistanceToLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPointDistanceToLine(Z_Param_Point,Z_Param_LineOrigin,Z_Param_LineDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointDistanceToSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPointDistanceToSegment(Z_Param_Point,Z_Param_SegmentStart,Z_Param_SegmentEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestPointOnLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::FindClosestPointOnLine(Z_Param_Point,Z_Param_LineOrigin,Z_Param_LineDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestPointOnSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_SegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::FindClosestPointOnSegment(Z_Param_Point,Z_Param_SegmentStart,Z_Param_SegmentEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNearestPointsOnLineSegments) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Segment1Start); \
		P_GET_STRUCT(FVector,Z_Param_Segment1End); \
		P_GET_STRUCT(FVector,Z_Param_Segment2Start); \
		P_GET_STRUCT(FVector,Z_Param_Segment2End); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Segment1Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Segment2Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::FindNearestPointsOnLineSegments(Z_Param_Segment1Start,Z_Param_Segment1End,Z_Param_Segment2Start,Z_Param_Segment2End,Z_Param_Out_Segment1Point,Z_Param_Out_Segment2Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectVectorOnToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectVectorOnToPlane(Z_Param_V,Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointOnToPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_PlaneBase); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectPointOnToPlane(Z_Param_Point,Z_Param_PlaneBase,Z_Param_PlaneNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectVectorOnToVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ProjectVectorOnToVector(Z_Param_V,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ProjectOnToNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V); \
		P_GET_STRUCT(FVector,Z_Param_InNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ProjectOnToNormal(Z_Param_V,Z_Param_InNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_BoundedToBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_STRUCT(FVector,Z_Param_InBoxMin); \
		P_GET_STRUCT(FVector,Z_Param_InBoxMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_BoundedToBox(Z_Param_InVect,Z_Param_InBoxMin,Z_Param_InBoxMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_AddBounded) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT(FVector,Z_Param_InAddVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_AddBounded(Z_Param_Out_A,Z_Param_InAddVect,Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_BoundedToCube) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_BoundedToCube(Z_Param_InVect,Z_Param_InRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_SnappedToGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InGridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_SnappedToGrid(Z_Param_InVect,Z_Param_InGridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_MirrorByPlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_MirrorByPlane(Z_Param_A,Z_Param_Out_InPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMirrorVectorByNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_STRUCT(FVector,Z_Param_InNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::MirrorVectorByNormal(Z_Param_InVect,Z_Param_InNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReflectionVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_STRUCT(FVector,Z_Param_SurfaceNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetReflectionVector(Z_Param_Direction,Z_Param_SurfaceNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Reciprocal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Reciprocal(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorSpringInterp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_STRUCT_REF(FVectorSpringState,Z_Param_Out_SpringState); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Stiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CriticalDampingFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Mass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VectorSpringInterp(Z_Param_Current,Z_Param_Target,Z_Param_Out_SpringState,Z_Param_Stiffness,Z_Param_CriticalDampingFactor,Z_Param_DeltaTime,Z_Param_Mass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVInterpTo) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVEase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VEase(Z_Param_A,Z_Param_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVLerp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::VLerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Normalize) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Normalize(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_NormalUnsafe) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_NormalUnsafe(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Normal2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Normal2D(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Normal(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNormal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNormal(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsUnit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SquaredLenthTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsUnit(Z_Param_Out_A,Z_Param_SquaredLenthTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsUniform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsUniform(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNAN) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNAN(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsZero(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_IsNearlyZero) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Vector_IsNearlyZero(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeXYSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeXYSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeXY) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeXY(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSizeSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSizeSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance2DSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance2DSquared(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_DistanceSquared) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_DistanceSquared(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Distance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_V1); \
		P_GET_STRUCT(FVector,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_Distance(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTruncVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntVector*)Z_Param__Result=UKismetMathLibrary::FTruncVector(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorArrayAverage) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetVectorArrayAverage(Z_Param_Out_Vectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAzimuthAndElevation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InDirection); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReferenceFrame); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Azimuth); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Elevation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetAzimuthAndElevation(Z_Param_InDirection,Z_Param_Out_ReferenceFrame,Z_Param_Out_Azimuth,Z_Param_Out_Elevation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYawPitchFromVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::GetYawPitchFromVector(Z_Param_InVec,Z_Param_Out_Yaw,Z_Param_Out_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionUnitVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_From); \
		P_GET_STRUCT(FVector,Z_Param_To); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GetDirectionUnitVector(Z_Param_From,Z_Param_To); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_UnitCartesianToSpherical) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector_UnitCartesianToSpherical(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ToDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ToDegrees(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ToRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ToRadians(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_CosineAngle2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_CosineAngle2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_HeadingAngle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_HeadingAngle(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetProjection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetProjection(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetSignVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetSignVector(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ComponentMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ComponentMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ComponentMin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ComponentMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbs) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbs(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbsMin) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbsMin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_GetAbsMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Vector_GetAbsMax(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxElement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMaxElement(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinElement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMinElement(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSizeMax2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSizeMax2D(Z_Param_A,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSizeMax) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSizeMax(Z_Param_A,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_ClampSize2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_ClampSize2D(Z_Param_A,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampVectorSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::ClampVectorSize(Z_Param_A,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_UnwindEuler) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_UnwindEuler(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessLess_VectorRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::LessLess_VectorRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAngleAxis) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDeg); \
		P_GET_STRUCT(FVector,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::RotateAngleAxis(Z_Param_InVect,Z_Param_AngleDeg,Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterGreater_VectorRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::GreaterGreater_VectorRotator(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCross_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Cross_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDot_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Dot_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_VectorVector(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_VectorVector(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::NegateVector(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Divide_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Multiply_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Subtract_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorInt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorFloat) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_VectorVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Add_VectorVector(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToQuaterion) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToQuaterion(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorFromAxisAndAngle) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Axis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::RotatorFromAxisAndAngle(Z_Param_Axis,Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToRotator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToRotator(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToVector2D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToVector2D(Z_Param_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToTransform(Z_Param_InLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_VectorToLinearColor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UKismetMathLibrary::Conv_VectorToLinearColor(Z_Param_InVec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector(Z_Param_InVec,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Set) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Set(Z_Param_Out_A,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Assign) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Vector_Assign(Z_Param_Out_A,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVectorFromYawPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::CreateVectorFromYawPitch(Z_Param_Yaw,Z_Param_Pitch,Z_Param_Length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::MakeVector(Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Left) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Left(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Right) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Right(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Down) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Down(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Up) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Up(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Backward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Backward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Forward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Forward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_One) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_One(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Vector_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize2DSquared) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize2DSquared(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSize2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::VSize2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToSign2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ToSign2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToRounded2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ToRounded2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToDirectionAndLength2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutDir); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::ToDirectionAndLength2D(Z_Param_A,Z_Param_Out_OutDir,Z_Param_Out_OutLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpherical2DToUnitCartesian) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Spherical2DToUnitCartesian(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalize2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Normalize2D(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormal2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Normal2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalSafe2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::NormalSafe2D(Z_Param_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2DInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2DInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsZero2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsZero2D(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNearlyZero2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::IsNearlyZero2D(Z_Param_Out_A,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotated2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::GetRotated2D(Z_Param_A,Z_Param_AngleDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMin2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMin2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMax2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetMax2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbsMax2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetAbsMax2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbs2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::GetAbs2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDotProduct2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DotProduct2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistanceSquared2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DistanceSquared2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistance2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_V1); \
		P_GET_STRUCT(FVector2D,Z_Param_V2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Distance2D(Z_Param_V1,Z_Param_V2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrossProduct2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::CrossProduct2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAxes2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinAxisVal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAxisVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::ClampAxes2D(Z_Param_A,Z_Param_MinAxisVal,Z_Param_MaxAxisVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSet2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::Set2D(Z_Param_Out_A,Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegated2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Negated2D(Z_Param_Out_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqualExactly_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqualExactly_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualExactly_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualExactly_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Divide_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Divide_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Multiply_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Subtract_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector2DFloat) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Add_Vector2DFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Add_Vector2DVector2D(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2DToIntPoint) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=UKismetMathLibrary::Conv_Vector2DToIntPoint(Z_Param_InVector2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_Vector2DToVector) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVector2D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKismetMathLibrary::Conv_Vector2DToVector(Z_Param_InVector2D,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InVec); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::BreakVector2D(Z_Param_InVec,Z_Param_Out_X,Z_Param_Out_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVector2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::MakeVector2D(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Zero) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_Zero(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_Unit45Deg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_Unit45Deg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2D_One) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetMathLibrary::Vector2D_One(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixedTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCurrent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDesired); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDeltaRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FixedTurn(Z_Param_InCurrent,Z_Param_InDesired,Z_Param_InDeltaRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePulsatingValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InCurrentTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPulsesPerSecond); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MakePulsatingValue(Z_Param_InCurrentTime,Z_Param_InPulsesPerSecond,Z_Param_InPhase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpEaseInOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FInterpEaseInOut(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_Exponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyByPi) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MultiplyByPi(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeClamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MapRangeClamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeUnclamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MapRangeUnclamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeToRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::NormalizeToRange(Z_Param_Value,Z_Param_RangeMin,Z_Param_RangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::SignOfFloat(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Dividend); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Divisor); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Remainder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FMod(Z_Param_Dividend,Z_Param_Divisor,Z_Param_Out_Remainder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCeil) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FCeil(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFCeil64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FCeil64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTrunc64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FTrunc64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFFloor64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::FFloor64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound64) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Round64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFTrunc) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FTrunc(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFFloor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::FFloor(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRound) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Round(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EasingFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Steps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Ease(Z_Param_A,Z_Param_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc),Z_Param_BlendExp,Z_Param_Steps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLerp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Lerp(Z_Param_A,Z_Param_B,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfByteArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfByteArray(Z_Param_Out_ByteArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfByteArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfByteArray(Z_Param_Out_ByteArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MinOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetMathLibrary::MaxOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFClamp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FClamp(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::FMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngleDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinAngleDegrees); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAngleDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::ClampAngle(Z_Param_AngleDegrees,Z_Param_MinAngleDegrees,Z_Param_MaxAngleDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAtan2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAtan2(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAtan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAtan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegTan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegTan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAcos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAcos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegCos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegCos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegAsin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegAsin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegSin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegSin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRadiansToDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RadiansToDegrees(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDegreesToRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::DegreesToRadians(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTAU) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetTAU(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GetPI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloatInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloatInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomFloat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::RandomFloat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSquare) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Square(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSqrt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Sqrt(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Loge(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLog) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Log(Z_Param_A,Z_Param_Base); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Exp(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAtan2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Atan2(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAtan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Atan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Tan(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Acos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCos) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Cos(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Asin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Sin(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Abs(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnap_Float) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::GridSnap_Float(Z_Param_Location,Z_Param_GridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHypotenuse) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Hypotenuse(Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_FloatFloat(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNearlyEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NearlyEqual_FloatFloat(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Subtract_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Add_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Fraction(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Multiply_IntFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::Multiply_FloatFloat(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiplyMultiply_FloatFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetMathLibrary::MultiplyMultiply_FloatFloat(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs_Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Abs_Int64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::ClampInt64(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::MaxInt64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinInt64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::MinInt64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger64InRange) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::RandomInteger64InRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::RandomInteger64(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfInteger64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::SignOfInteger64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Not_Int64(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOr_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Or_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXor_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Xor_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnd_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::And_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_Value); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Min); \
		P_GET_PROPERTY(UInt64Property,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_Int64Int64(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Subtract_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Add_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Divide_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_Int64Int64) \
	{ \
		P_GET_PROPERTY(UInt64Property,Z_Param_A); \
		P_GET_PROPERTY(UInt64Property,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int64*)Z_Param__Result=UKismetMathLibrary::Multiply_Int64Int64(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbs_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Abs_Int(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClamp) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Clamp(Z_Param_Value,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomIntegerInRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomIntegerInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::RandomInteger(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignOfInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::SignOfInteger(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_Int) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Not_Int(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOr_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Or_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXor_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Xor_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnd_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::And_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInRange_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_UBOOL(Z_Param_InclusiveMin); \
		P_GET_UBOOL(Z_Param_InclusiveMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::InRange_IntInt(Z_Param_Value,Z_Param_Min,Z_Param_Max,Z_Param_InclusiveMin,Z_Param_InclusiveMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Subtract_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Add_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercent_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Percent_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Divide_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_IntInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetMathLibrary::Multiply_IntInt(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreaterEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::GreaterEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLessEqual_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::LessEqual_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGreater_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Greater_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLess_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Less_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBMax) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::BMax(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBMin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::BMin(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Subtract_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Add_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPercent_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Percent_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDivide_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Divide_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiply_ByteByte) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_A); \
		P_GET_PROPERTY(UByteProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UKismetMathLibrary::Multiply_ByteByte(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanNOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanNOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanXOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanXOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanOR) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanOR(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanNAND) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanNAND(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBooleanAND) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::BooleanAND(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_BoolBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::NotEqual_BoolBool(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_BoolBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_GET_UBOOL(Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::EqualEqual_BoolBool(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNot_PreBool) \
	{ \
		P_GET_UBOOL(Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::Not_PreBool(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolWithWeightFromStream) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolWithWeightFromStream(Z_Param_Weight,Z_Param_Out_RandomStream); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBoolWithWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBoolWithWeight(Z_Param_Weight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetMathLibrary::RandomBool(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetMathLibrary(); \
	friend struct Z_Construct_UClass_UKismetMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetMathLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUKismetMathLibrary(); \
	friend struct Z_Construct_UClass_UKismetMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetMathLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMathLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetMathLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMathLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetMathLibrary(UKismetMathLibrary&&); \
	NO_API UKismetMathLibrary(const UKismetMathLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetMathLibrary(UKismetMathLibrary&&); \
	NO_API UKismetMathLibrary(const UKismetMathLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetMathLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMathLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_131_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_134_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetMathLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetMathLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h


#define FOREACH_ENUM_ELERPINTERPOLATIONMODE(op) \
	op(ELerpInterpolationMode::QuatInterp) \
	op(ELerpInterpolationMode::EulerInterp) \
	op(ELerpInterpolationMode::DualQuatInterp) 
#define FOREACH_ENUM_EEASINGFUNC(op) \
	op(EEasingFunc::Linear) \
	op(EEasingFunc::Step) \
	op(EEasingFunc::SinusoidalIn) \
	op(EEasingFunc::SinusoidalOut) \
	op(EEasingFunc::SinusoidalInOut) \
	op(EEasingFunc::EaseIn) \
	op(EEasingFunc::EaseOut) \
	op(EEasingFunc::EaseInOut) \
	op(EEasingFunc::ExpoIn) \
	op(EEasingFunc::ExpoOut) \
	op(EEasingFunc::ExpoInOut) \
	op(EEasingFunc::CircularIn) \
	op(EEasingFunc::CircularOut) \
	op(EEasingFunc::CircularInOut) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
