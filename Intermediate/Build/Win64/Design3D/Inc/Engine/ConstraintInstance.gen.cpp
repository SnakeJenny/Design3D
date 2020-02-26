// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
// End Cross Module References
class UScriptStruct* FConstraintInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstance, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstance"), sizeof(FConstraintInstance), Get_Z_Construct_UScriptStruct_FConstraintInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstance>()
{
	return FConstraintInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintInstance(FConstraintInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintInstance")),new UScriptStruct::TCppStructOps<FConstraintInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintInstance;
	struct Z_Construct_UScriptStruct_FConstraintInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveForceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveForceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveSpring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularOrientationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularOrientationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularPositionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularPositionTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularVelocityDrive_MetaData[];
#endif
		static void NewProp_bAngularVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistDrive_MetaData[];
#endif
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSwingDrive_MetaData[];
#endif
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularOrientationDrive_MetaData[];
#endif
		static void NewProp_bAngularOrientationDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularOrientationDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularSlerpDrive_MetaData[];
#endif
		static void NewProp_bAngularSlerpDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularSlerpDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistVelocityDrive_MetaData[];
#endif
		static void NewProp_bTwistVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistPositionDrive_MetaData[];
#endif
		static void NewProp_bTwistPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingVelocityDrive_MetaData[];
#endif
		static void NewProp_bSwingVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingPositionDrive_MetaData[];
#endif
		static void NewProp_bSwingPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveForceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveForceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveSpring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocityTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearPositionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearPositionTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearZVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearZVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearZVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearZPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearZPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearZPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearYVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearYVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearYVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearYPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearYPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearYPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearXVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearXVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearXVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearXPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearXPositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearXPositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[];
#endif
		static void NewProp_bTwistLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[];
#endif
		static void NewProp_bSwingLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[];
#endif
		static void NewProp_bLinearLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearZMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearYMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearXMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleLinearLimits_MetaData[];
#endif
		static void NewProp_bScaleLinearLimits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleLinearLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstance>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit = { "AngularDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveForceLimit_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping = { "AngularDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Revolutions per second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring = { "AngularDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveSpring_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget = { "AngularVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget = { "AngularOrientationTarget", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularOrientationTarget_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode = { "AngularDriveMode", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveMode_DEPRECATED), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget = { "AngularPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive = { "bAngularVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableTwistDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableSwingDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularOrientationDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive = { "bAngularOrientationDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularSlerpDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive = { "bAngularSlerpDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive = { "bTwistVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive = { "bTwistPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive = { "bSwingVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive = { "bSwingPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit = { "LinearDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveForceLimit_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping = { "LinearDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring = { "LinearDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveSpring_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget = { "LinearVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget = { "LinearPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive = { "bLinearVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive = { "bLinearPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearZVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive = { "bLinearZVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearZPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive = { "bLinearZPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearYVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive = { "bLinearYVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearYPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive = { "bLinearYPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearXVelocityDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive = { "bLinearXVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearXPositionDrive_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive = { "bLinearXPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularBreakable_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft = { "bTwistLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft = { "bSwingLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion = { "AngularSwing2Motion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion = { "AngularTwistMotion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion = { "AngularSwing1Motion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearBreakable_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft = { "bLinearLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize = { "LinearLimitSize", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion = { "LinearZMotion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearZMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion = { "LinearYMotion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearYMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion = { "LinearXMotion", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearXMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableProjection_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bDisableCollision_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Constraint Data (properties easily swapped at runtime based on different constraint profiles)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance = { "ProfileInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProfileInstance), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If true, linear limits scale using the absolute min of the 3d scale of the owning component" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bScaleLinearLimits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits = { "bScaleLinearLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\nThis allows you to bias the limit for swing1 swing2 and twist." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset = { "AngularRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Seconday axis in Body2 reference frame. Orthogonal to PriAxis2." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2 = { "SecAxis2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body2 reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2 = { "PriAxis2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body2 reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2 = { "Pos2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Pos2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Seconday axis in Body1 reference frame. Orthogonal to PriAxis1." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1 = { "SecAxis1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body1 reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1 = { "PriAxis1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body1 reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1 = { "Pos1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Pos1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of second bone (body) that this constraint is connecting.\nThis will be the 'parent' bone in a PhysicsAset." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2 = { "ConstraintBone2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone2), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of first bone (body) that this constraint is connecting.\nThis will be the 'child' bone in a PhysicsAsset." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1 = { "ConstraintBone1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone1), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of bone that this joint is associated with." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName = { "JointName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, JointName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintInstance",
		sizeof(FConstraintInstance),
		alignof(FConstraintInstance),
		Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintInstance"), sizeof(FConstraintInstance), Get_Z_Construct_UScriptStruct_FConstraintInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintInstance_Hash() { return 3898788449U; }
class UScriptStruct* FConstraintProfileProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintProfileProperties, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintProfileProperties"), sizeof(FConstraintProfileProperties), Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintProfileProperties>()
{
	return FConstraintProfileProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintProfileProperties(FConstraintProfileProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintProfileProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintProfileProperties")),new UScriptStruct::TCppStructOps<FConstraintProfileProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintProfileProperties;
	struct Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentDominates_MetaData[];
#endif
		static void NewProp_bParentDominates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentDominates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintProfileProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with linear force." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bLinearBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with angular force." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bAngularBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "Category", "Projection" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If distance error between bodies exceeds 0.1 units, or rotation error exceeds 10 degrees, body will be projected to fix this.\nFor example a chain spinning too fast will have its elements appear detached due to velocity, this will project all bodies so they still appear attached to each other." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableProjection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "When set, the parent body in a constraint will not be affected by the motion of the child" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bParentDominates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates = { "bParentDominates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Disable collision between bodies joined by this constraint." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bDisableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive = { "AngularDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularDrive), Z_Construct_UScriptStruct_FAngularDriveConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive = { "LinearDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearDrive), Z_Construct_UScriptStruct_FLinearDriveConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, TwistLimit), Z_Construct_UScriptStruct_FTwistConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit = { "ConeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ConeLimit), Z_Construct_UScriptStruct_FConeConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearLimit), Z_Construct_UScriptStruct_FLinearConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bAngularBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Torque needed to break the joint." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularBreakThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bLinearBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Force needed to break the distance constraint." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearBreakThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bEnableProjection" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Angular tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bEnableProjection" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Linear tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintProfileProperties",
		sizeof(FConstraintProfileProperties),
		alignof(FConstraintProfileProperties),
		Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintProfileProperties"), sizeof(FConstraintProfileProperties), Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintProfileProperties_Hash() { return 1064241589U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
