// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintDrives() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
// End Cross Module References
	static UEnum* EAngularDriveMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAngularDriveMode, Z_Construct_UPackage__Script_Engine(), TEXT("EAngularDriveMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAngularDriveMode::Type>()
	{
		return EAngularDriveMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAngularDriveMode(EAngularDriveMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EAngularDriveMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAngularDriveMode_Hash() { return 2750812104U; }
	UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAngularDriveMode"), 0, Get_Z_Construct_UEnum_Engine_EAngularDriveMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAngularDriveMode::SLERP", (int64)EAngularDriveMode::SLERP },
				{ "EAngularDriveMode::TwistAndSwing", (int64)EAngularDriveMode::TwistAndSwing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
				{ "SLERP.ToolTip", "Spherical lerp between the current orientation/velocity and the target orientation/velocity. NOTE: This will NOT work if any angular constraints are set to Locked." },
				{ "TwistAndSwing.ToolTip", "Path is decomposed into twist (roll constraint) and swing (cone constraint). Doesn't follow shortest arc and may experience gimbal lock. Does work with locked angular constraints." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAngularDriveMode",
				"EAngularDriveMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAngularDriveConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularDriveConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("AngularDriveConstraint"), sizeof(FAngularDriveConstraint), Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAngularDriveConstraint>()
{
	return FAngularDriveConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAngularDriveConstraint(FAngularDriveConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("AngularDriveConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AngularDriveConstraint")),new UScriptStruct::TCppStructOps<FAngularDriveConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAngularDriveConstraint;
	struct Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrientationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlerpDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlerpDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwingDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Angular Drive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularDriveConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Whether motors use SLERP (spherical lerp) or decompose into a Swing motor (cone constraints) and Twist motor (roll constraints). NOTE: SLERP will NOT work if any of the angular constraints are locked." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode = { "AngularDriveMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, AngularDriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target angular velocity relative to the body reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget = { "AngularVelocityTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, AngularVelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData[] = {
		{ "Category", "AngularMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target orientation relative to the the body reference frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget = { "OrientationTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, OrientationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "DisplayName", "SLERP" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the SLERP (spherical lerp) drive between current orientation/velocity and target orientation/velocity. NOTE: This is only available when all three angular limits are either free or limited. Locking any angular limit will turn off the drive implicitly." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive = { "SlerpDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, SlerpDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "DisplayName", "Swing" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the cone constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as there is at least one swing limit set to free or limited." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive = { "SwingDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, SwingDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "DisplayName", "Twist" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Controls the twist (roll) constraint drive between current orientation/velocity and target orientation/velocity. This is available as long as the twist limit is set to free or limited." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive = { "TwistDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularDriveConstraint, TwistDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularDriveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_AngularVelocityTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_OrientationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SlerpDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_SwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::NewProp_TwistDrive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AngularDriveConstraint",
		sizeof(FAngularDriveConstraint),
		alignof(FAngularDriveConstraint),
		Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AngularDriveConstraint"), sizeof(FAngularDriveConstraint), Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_Hash() { return 2919030373U; }
class UScriptStruct* FLinearDriveConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearDriveConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("LinearDriveConstraint"), sizeof(FLinearDriveConstraint), Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinearDriveConstraint>()
{
	return FLinearDriveConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinearDriveConstraint(FLinearDriveConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("LinearDriveConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LinearDriveConstraint")),new UScriptStruct::TCppStructOps<FLinearDriveConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLinearDriveConstraint;
	struct Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[];
#endif
		static void NewProp_bEnablePositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XDrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Linear Drive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearDriveConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_SetBit(void* Obj)
	{
		((FLinearDriveConstraint*)Obj)->bEnablePositionDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive = { "bEnablePositionDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLinearDriveConstraint), &Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive = { "ZDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearDriveConstraint, ZDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive = { "YDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearDriveConstraint, YDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive = { "XDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearDriveConstraint, XDrive), Z_Construct_UScriptStruct_FConstraintDrive, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target velocity the linear drive." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget = { "VelocityTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearDriveConstraint, VelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData[] = {
		{ "Category", "LinearMotor" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Target position the linear drive." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget = { "PositionTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearDriveConstraint, PositionTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_bEnablePositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_ZDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_YDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_XDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_VelocityTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::NewProp_PositionTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LinearDriveConstraint",
		sizeof(FLinearDriveConstraint),
		alignof(FLinearDriveConstraint),
		Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinearDriveConstraint"), sizeof(FLinearDriveConstraint), Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinearDriveConstraint_Hash() { return 3739813272U; }
class UScriptStruct* FConstraintDrive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDrive, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintDrive"), sizeof(FConstraintDrive), Get_Z_Construct_UScriptStruct_FConstraintDrive_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintDrive>()
{
	return FConstraintDrive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDrive(FConstraintDrive::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintDrive"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintDrive
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintDrive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDrive")),new UScriptStruct::TCppStructOps<FConstraintDrive>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintDrive;
	struct Z_Construct_UScriptStruct_FConstraintDrive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVelocityDrive_MetaData[];
#endif
		static void NewProp_bEnableVelocityDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVelocityDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePositionDrive_MetaData[];
#endif
		static void NewProp_bEnablePositionDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePositionDrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDrive>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Enables/Disables velocity drive (angular velocity if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintDrive*)Obj)->bEnableVelocityDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive = { "bEnableVelocityDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintDrive), &Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "Enables/Disables position drive (orientation if using angular drive)" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_SetBit(void* Obj)
	{
		((FConstraintDrive*)Obj)->bEnablePositionDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive = { "bEnablePositionDrive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintDrive), &Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The force limit of the drive." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintDrive, MaxForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The damping strength of the drive. Force proportional to the velocity error." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintDrive, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintDrives.h" },
		{ "ToolTip", "The spring strength of the drive. Force proportional to the position error." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintDrive, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnableVelocityDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_bEnablePositionDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_MaxForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDrive_Statics::NewProp_Stiffness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDrive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintDrive",
		sizeof(FConstraintDrive),
		alignof(FConstraintDrive),
		Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDrive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDrive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDrive"), sizeof(FConstraintDrive), Get_Z_Construct_UScriptStruct_FConstraintDrive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintDrive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDrive_Hash() { return 52637167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
