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
class UPrimitiveComponent;
#ifdef ENGINE_PhysicsConstraintComponent_generated_h
#error "PhysicsConstraintComponent.generated.h already included, missing '#pragma once' in PhysicsConstraintComponent.h"
#endif
#define ENGINE_PhysicsConstraintComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBroken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBroken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintForce) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearForce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAngularForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstraintForce(Z_Param_Out_OutLinearForce,Z_Param_Out_OutAngularForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bDisableCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableCollision(Z_Param_bDisableCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferenceOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PriAxis); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SecAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferenceOrientation(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_PriAxis,Z_Param_Out_SecAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferencePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RefPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferencePosition(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferenceFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSwing2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSwing1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTwist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTwist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularBreakable) \
	{ \
		P_GET_UBOOL(Z_Param_bAngularBreakable); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngularBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularBreakable(Z_Param_bAngularBreakable,Z_Param_AngularBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearBreakable) \
	{ \
		P_GET_UBOOL(Z_Param_bLinearBreakable); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LinearBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearBreakable(Z_Param_bLinearBreakable,Z_Param_LinearBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularTwistLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularTwistLimit(EAngularConstraintMotion(Z_Param_ConstraintType),Z_Param_TwistLimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularSwing2Limit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularSwing2Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularSwing1Limit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularSwing1Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing1LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearZLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearZLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearYLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearYLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearXLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearXLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PositionStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VelocityStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityTarget(Z_Param_Out_InVelTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularOrientationTarget) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InPosTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOrientationTarget(Z_Param_Out_InPosTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PositionStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VelocityStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearVelocityTarget(Z_Param_Out_InVelTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearPositionTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearPositionTarget(Z_Param_Out_InPosTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDriveMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_DriveMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDriveMode(EAngularDriveMode::Type(Z_Param_DriveMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSLERP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDriveSLERP(Z_Param_bEnableSLERP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSLERP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientationDriveSLERP(Z_Param_bEnableSLERP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientationDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularOrientationDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOrientationDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableDriveX); \
		P_GET_UBOOL(Z_Param_bEnableDriveY); \
		P_GET_UBOOL(Z_Param_bEnableDriveZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearVelocityDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableDriveX); \
		P_GET_UBOOL(Z_Param_bEnableDriveY); \
		P_GET_UBOOL(Z_Param_bEnableDriveZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearPositionDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakConstraint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstrainedComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component1); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName1); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component2); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstrainedComponents(Z_Param_Component1,Z_Param_BoneName1,Z_Param_Component2,Z_Param_BoneName2); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBroken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBroken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintForce) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearForce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAngularForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstraintForce(Z_Param_Out_OutLinearForce,Z_Param_Out_OutAngularForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bDisableCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableCollision(Z_Param_bDisableCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferenceOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PriAxis); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SecAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferenceOrientation(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_PriAxis,Z_Param_Out_SecAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferencePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RefPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferencePosition(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintReferenceFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSwing2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSwing1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSwing1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTwist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTwist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularBreakable) \
	{ \
		P_GET_UBOOL(Z_Param_bAngularBreakable); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AngularBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularBreakable(Z_Param_bAngularBreakable,Z_Param_AngularBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearBreakable) \
	{ \
		P_GET_UBOOL(Z_Param_bLinearBreakable); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LinearBreakThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearBreakable(Z_Param_bLinearBreakable,Z_Param_LinearBreakThreshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularTwistLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularTwistLimit(EAngularConstraintMotion(Z_Param_ConstraintType),Z_Param_TwistLimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularSwing2Limit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularSwing2Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularSwing1Limit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularSwing1Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing1LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearZLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearZLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearYLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearYLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearXLimit) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LimitSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearXLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PositionStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VelocityStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityTarget(Z_Param_Out_InVelTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularOrientationTarget) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InPosTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOrientationTarget(Z_Param_Out_InPosTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PositionStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VelocityStrength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearVelocityTarget(Z_Param_Out_InVelTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearPositionTarget) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearPositionTarget(Z_Param_Out_InPosTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDriveMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_DriveMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularDriveMode(EAngularDriveMode::Type(Z_Param_DriveMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSLERP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDriveSLERP(Z_Param_bEnableSLERP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSLERP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientationDriveSLERP(Z_Param_bEnableSLERP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientationDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularOrientationDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOrientationDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableDriveX); \
		P_GET_UBOOL(Z_Param_bEnableDriveY); \
		P_GET_UBOOL(Z_Param_bEnableDriveZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearVelocityDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableDriveX); \
		P_GET_UBOOL(Z_Param_bEnableDriveY); \
		P_GET_UBOOL(Z_Param_bEnableDriveZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinearPositionDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakConstraint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstrainedComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component1); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName1); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component2); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstrainedComponents(Z_Param_Component1,Z_Param_BoneName1,Z_Param_Component2,Z_Param_BoneName2); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsConstraintComponent(UPhysicsConstraintComponent&&); \
	NO_API UPhysicsConstraintComponent(const UPhysicsConstraintComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsConstraintComponent(UPhysicsConstraintComponent&&); \
	NO_API UPhysicsConstraintComponent(const UPhysicsConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsConstraintComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
