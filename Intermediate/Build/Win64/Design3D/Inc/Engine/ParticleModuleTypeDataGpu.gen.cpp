// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataGpu() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
// End Cross Module References
class UScriptStruct* FGPUSpriteResourceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteResourceData, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteResourceData"), sizeof(FGPUSpriteResourceData), Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteResourceData>()
{
	return FGPUSpriteResourceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteResourceData(FGPUSpriteResourceData::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteResourceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteResourceData")),new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteResourceData;
	struct Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneMinusFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneMinusFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTimeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionTimeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResilienceBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResilienceBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResilienceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResilienceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeBySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeBySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiscBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiscBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiscScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiscScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedSimulationAttrSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedSimulationAttrSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedSimulationAttrSamples_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedMiscSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedMiscSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedMiscSamples_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizedColorSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuantizedColorSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuantizedColorSamples_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The source data for runtime resources." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((FGPUSpriteResourceData*)Obj)->bRemoveHMDRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteResourceData), &Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Pivot offset in UV space for placing the verts of each particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Screen alignment for particles." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "How much to stretch sprites based on camera motion blur." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CameraMotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle rotation rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, RotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One minus the coefficient of friction applied to particles upon collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction = { "OneMinusFriction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OneMinusFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution when colliding. (1=uniform distribution)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution = { "CollisionRandomDistribution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution spread." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread = { "CollisionRandomSpread", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias applied to relative time upon collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias = { "CollisionTimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionTimeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle size for collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias = { "CollisionRadiusBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle size for collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale = { "CollisionRadiusScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle damping factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias = { "ResilienceBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle damping factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale = { "ResilienceScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle drag coefficient." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias = { "DragCoefficientBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle drag coefficient." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale = { "DragCoefficientScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle vector field scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias = { "PerParticleVectorFieldBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle vector field scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale = { "PerParticleVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tightness override value for the global vector fields." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldTightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to global vector fields." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange = { "OrbitPhaseRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Phase offset of orbit around each axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase = { "OrbitPhaseBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange = { "OrbitFrequencyRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Frequency at which the particle orbits around each axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase = { "OrbitFrequencyBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Offset at which to orbit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed = { "SizeBySpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SizeBySpeed), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SubImageSize), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias = { "SimulationAttrCurveBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the simulation attribute curves." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale = { "SimulationAttrCurveScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias = { "MiscBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MiscBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the misc curve." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale = { "MiscScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MiscScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias = { "ColorBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ColorBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the color of sprites." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ColorScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for simulation attributes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedSimulationAttrSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for misc curve attributes to be evaluated at runtime." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedMiscSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized color samples." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedColorSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteResourceData",
		sizeof(FGPUSpriteResourceData),
		alignof(FGPUSpriteResourceData),
		Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteResourceData"), sizeof(FGPUSpriteResourceData), Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteResourceData_Hash() { return 312119145U; }
class UScriptStruct* FGPUSpriteEmitterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteEmitterInfo"), sizeof(FGPUSpriteEmitterInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteEmitterInfo>()
{
	return FGPUSpriteEmitterInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteEmitterInfo(FGPUSpriteEmitterInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteEmitterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteEmitterInfo")),new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteEmitterInfo;
	struct Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicAlphaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicAlphaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicColorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicColorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvRotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvRotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvMaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvMaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorRadiusSq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointAttractorRadiusSq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAttractorPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttractorStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAttractorStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVectorField_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVectorField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnitModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPerUnitModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The data needed by the runtime to simulate sprites." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorScaleOverLife module." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale = { "DynamicAlphaScale", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlphaScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorScaleOverLife module." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale = { "DynamicColorScale", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColorScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorOverLife module." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha = { "DynamicAlpha", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorOverLife module." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor = { "DynamicColor", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((FGPUSpriteEmitterInfo*)Obj)->bRemoveHMDRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, collisions are enabled for this emitter." },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FGPUSpriteEmitterInfo*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for aligning the particle based on the camera." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum number of particles expected for this emitter." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount = { "MaxParticleCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxParticleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum lifetime of particles in this emitter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime = { "MaxLifetime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxLifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The inverse scale to apply to rotation rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale = { "InvRotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvRotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One over the maximum size of a sprite particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize = { "InvMaxSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvMaxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Amount by which to offset particles when they are spawned." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor radius, squared." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq = { "PointAttractorRadiusSq", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorRadiusSq), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition = { "PointAttractorPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Damping factor applied to particle collisions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, Resilience), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor strength over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength = { "PointAttractorStrength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorStrength), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle drag coefficient." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DragCoefficient), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle vector field scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale = { "VectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, VectorFieldScale), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field info." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField = { "LocalVectorField", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LocalVectorField), Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "List of spawn modules that must be evaluated at runtime." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules = { "SpawnModules", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModules), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner = { "SpawnModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn-per-unit module." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule = { "SpawnPerUnitModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnPerUnitModule), Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn module. Needed for now, but should be divorced from the runtime." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule = { "SpawnModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The required module. Needed for now, but should be divorced from the runtime." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule = { "RequiredModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteEmitterInfo",
		sizeof(FGPUSpriteEmitterInfo),
		alignof(FGPUSpriteEmitterInfo),
		Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteEmitterInfo"), sizeof(FGPUSpriteEmitterInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Hash() { return 2251321771U; }
class UScriptStruct* FGPUSpriteLocalVectorFieldInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteLocalVectorFieldInfo"), sizeof(FGPUSpriteLocalVectorFieldInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteLocalVectorFieldInfo>()
{
	return FGPUSpriteLocalVectorFieldInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo(FGPUSpriteLocalVectorFieldInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("GPUSpriteLocalVectorFieldInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GPUSpriteLocalVectorFieldInfo")),new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGPUSpriteLocalVectorFieldInfo;
	struct Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[];
#endif
		static void NewProp_bUseFixDT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[];
#endif
		static void NewProp_bIgnoreComponentTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data needed for local vector fields." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Use fix delta time in the simulation?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bUseFixDT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT = { "bUseFixDT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in z axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in y axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in x axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Ignore Components Transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bIgnoreComponentTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform = { "bIgnoreComponentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field tightness." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Tightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field intensity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field rotation rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Maximum initial rotation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation = { "MaxInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Minimum initial rotation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation = { "MinInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field transform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field to apply to this emitter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteLocalVectorFieldInfo",
		sizeof(FGPUSpriteLocalVectorFieldInfo),
		alignof(FGPUSpriteLocalVectorFieldInfo),
		Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GPUSpriteLocalVectorFieldInfo"), sizeof(FGPUSpriteLocalVectorFieldInfo), Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Hash() { return 2542111887U; }
	void UParticleModuleTypeDataGpu::StaticRegisterNativesUParticleModuleTypeDataGpu()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister()
	{
		return UParticleModuleTypeDataGpu::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearExistingParticlesOnInit_MetaData[];
#endif
		static void NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearExistingParticlesOnInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "GPU Sprites" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "When true, all existing partilces are cleared when the emitter is initialized." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataGpu*)Obj)->bClearExistingParticlesOnInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit = { "bClearExistingParticlesOnInit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataGpu), &Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "TEMP: How much to stretch sprites based on camera motion blur." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, CameraMotionBlurAmount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data used to initialize runtime resources." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData = { "ResourceData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, ResourceData), Z_Construct_UScriptStruct_FGPUSpriteResourceData, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Information for runtime simulation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo = { "EmitterInfo", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, EmitterInfo), Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataGpu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams = {
		&UParticleModuleTypeDataGpu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTypeDataGpu, 3601097657);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataGpu>()
	{
		return UParticleModuleTypeDataGpu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataGpu(Z_Construct_UClass_UParticleModuleTypeDataGpu, &UParticleModuleTypeDataGpu::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataGpu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataGpu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
