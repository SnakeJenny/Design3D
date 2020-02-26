// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/FloatingPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UFloatingPawnMovement::StaticRegisterNativesUFloatingPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister()
	{
		return UFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPositionCorrected_MetaData[];
#endif
		static void NewProp_bPositionCorrected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionCorrected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "GameFramework/FloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "FloatingPawnMovement is a movement component that provides simple movement for any Pawn class.\nLimits on speed and acceleration are provided, while gravity is not implemented.\n\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nDuring swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Set to true when a position correction is applied. Used to avoid recalculating velocity when this occurs." },
	};
#endif
	void Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_SetBit(void* Obj)
	{
		((UFloatingPawnMovement*)Obj)->bPositionCorrected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected = { "bPositionCorrected", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFloatingPawnMovement), &Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Setting affecting extra force applied when changing direction, making turns have less drift and become more responsive.\nVelocity magnitude is not allowed to increase, that only happens due to normal acceleration. It may decrease with large direction changes.\nLarger values apply extra force to reach the target direction more quickly, while a zero value disables any extra turn force." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingPawnMovement, TurningBoost), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Deceleration applied when there is no input (rate of change of velocity)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingPawnMovement, Deceleration), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Acceleration applied by input (rate of change of velocity)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingPawnMovement, Acceleration), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Maximum velocity magnitude allowed for the controlled Pawn." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingPawnMovement, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatingPawnMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatingPawnMovement_Statics::ClassParams = {
		&UFloatingPawnMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatingPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatingPawnMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatingPawnMovement, 99016802);
	template<> ENGINE_API UClass* StaticClass<UFloatingPawnMovement>()
	{
		return UFloatingPawnMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatingPawnMovement(Z_Construct_UClass_UFloatingPawnMovement, &UFloatingPawnMovement::StaticClass, TEXT("/Script/Engine"), TEXT("UFloatingPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
