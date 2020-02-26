// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SplineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveQuat();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddPoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_ClearSplinePoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetDefaultUpVector();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetSplineLength();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetSplinePointType();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_IsClosedLoop();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_RemoveSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoop();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetDefaultUpVector();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetDrawDebug();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePointType();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineComponent_UpdateSpline();
// End Cross Module References
	static UEnum* ESplineCoordinateSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplineCoordinateSpace, Z_Construct_UPackage__Script_Engine(), TEXT("ESplineCoordinateSpace"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplineCoordinateSpace::Type>()
	{
		return ESplineCoordinateSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineCoordinateSpace(ESplineCoordinateSpace_StaticEnum, TEXT("/Script/Engine"), TEXT("ESplineCoordinateSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Hash() { return 3681815855U; }
	UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineCoordinateSpace"), 0, Get_Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineCoordinateSpace::Local", (int64)ESplineCoordinateSpace::Local },
				{ "ESplineCoordinateSpace::World", (int64)ESplineCoordinateSpace::World },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
				{ "ToolTip", "Types of coordinate space accepted by the functions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESplineCoordinateSpace",
				"ESplineCoordinateSpace::Type",
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
	static UEnum* ESplinePointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplinePointType, Z_Construct_UPackage__Script_Engine(), TEXT("ESplinePointType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplinePointType::Type>()
	{
		return ESplinePointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplinePointType(ESplinePointType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESplinePointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESplinePointType_Hash() { return 521592792U; }
	UEnum* Z_Construct_UEnum_Engine_ESplinePointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplinePointType"), 0, Get_Z_Construct_UEnum_Engine_ESplinePointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplinePointType::Linear", (int64)ESplinePointType::Linear },
				{ "ESplinePointType::Curve", (int64)ESplinePointType::Curve },
				{ "ESplinePointType::Constant", (int64)ESplinePointType::Constant },
				{ "ESplinePointType::CurveClamped", (int64)ESplinePointType::CurveClamped },
				{ "ESplinePointType::CurveCustomTangent", (int64)ESplinePointType::CurveCustomTangent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
				{ "ToolTip", "Permitted spline point types for SplineComponent." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESplinePointType",
				"ESplinePointType::Type",
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
class UScriptStruct* FSplineInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSplineInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("SplineInstanceData"), sizeof(FSplineInstanceData), Get_Z_Construct_UScriptStruct_FSplineInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineInstanceData>()
{
	return FSplineInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineInstanceData(FSplineInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("SplineInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSplineInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFSplineInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineInstanceData")),new UScriptStruct::TCppStructOps<FSplineInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSplineInstanceData;
	struct Z_Construct_UScriptStruct_FSplineInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCurvesPreUCS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineCurvesPreUCS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplineHasBeenEdited_MetaData[];
#endif
		static void NewProp_bSplineHasBeenEdited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplineHasBeenEdited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Used to store spline data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS = { "SplineCurvesPreUCS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineInstanceData, SplineCurvesPreUCS), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineInstanceData, SplineCurves), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_SetBit(void* Obj)
	{
		((FSplineInstanceData*)Obj)->bSplineHasBeenEdited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited = { "bSplineHasBeenEdited", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSplineInstanceData), &Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"SplineInstanceData",
		sizeof(FSplineInstanceData),
		alignof(FSplineInstanceData),
		Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineInstanceData"), sizeof(FSplineInstanceData), Get_Z_Construct_UScriptStruct_FSplineInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineInstanceData_Hash() { return 1049251309U; }
class UScriptStruct* FSplinePoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSplinePoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplinePoint, Z_Construct_UPackage__Script_Engine(), TEXT("SplinePoint"), sizeof(FSplinePoint), Get_Z_Construct_UScriptStruct_FSplinePoint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplinePoint>()
{
	return FSplinePoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplinePoint(FSplinePoint::StaticStruct, TEXT("/Script/Engine"), TEXT("SplinePoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSplinePoint
{
	FScriptStruct_Engine_StaticRegisterNativesFSplinePoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplinePoint")),new UScriptStruct::TCppStructOps<FSplinePoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSplinePoint;
	struct Z_Construct_UScriptStruct_FSplinePoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplinePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplinePoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, Type), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, LeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, ArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplinePoint, InputKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplinePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplinePoint",
		sizeof(FSplinePoint),
		alignof(FSplinePoint),
		Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplinePoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplinePoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplinePoint"), sizeof(FSplinePoint), Get_Z_Construct_UScriptStruct_FSplinePoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplinePoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplinePoint_Hash() { return 1420043474U; }
class UScriptStruct* FSplineCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSplineCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineCurves, Z_Construct_UPackage__Script_Engine(), TEXT("SplineCurves"), sizeof(FSplineCurves), Get_Z_Construct_UScriptStruct_FSplineCurves_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineCurves>()
{
	return FSplineCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineCurves(FSplineCurves::StaticStruct, TEXT("/Script/Engine"), TEXT("SplineCurves"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSplineCurves
{
	FScriptStruct_Engine_StaticRegisterNativesFSplineCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineCurves")),new UScriptStruct::TCppStructOps<FSplineCurves>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSplineCurves;
	struct Z_Construct_UScriptStruct_FSplineCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReparamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReparamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Input: distance along curve, output: parameter that puts you there." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable = { "ReparamTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineCurves, ReparamTable), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from scale data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineCurves, Scale), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from rotation data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineCurves, Rotation), Z_Construct_UScriptStruct_FInterpCurveQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from position data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineCurves, Position), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplineCurves",
		sizeof(FSplineCurves),
		alignof(FSplineCurves),
		Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineCurves"), sizeof(FSplineCurves), Get_Z_Construct_UScriptStruct_FSplineCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineCurves_Hash() { return 3775251845U; }
	void USplineComponent::StaticRegisterNativesUSplineComponent()
	{
		UClass* Class = USplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoint", &USplineComponent::execAddPoint },
			{ "AddPoints", &USplineComponent::execAddPoints },
			{ "AddSplineLocalPoint", &USplineComponent::execAddSplineLocalPoint },
			{ "AddSplinePoint", &USplineComponent::execAddSplinePoint },
			{ "AddSplinePointAtIndex", &USplineComponent::execAddSplinePointAtIndex },
			{ "AddSplineWorldPoint", &USplineComponent::execAddSplineWorldPoint },
			{ "ClearSplinePoints", &USplineComponent::execClearSplinePoints },
			{ "FindDirectionClosestToWorldLocation", &USplineComponent::execFindDirectionClosestToWorldLocation },
			{ "FindInputKeyClosestToWorldLocation", &USplineComponent::execFindInputKeyClosestToWorldLocation },
			{ "FindLocationClosestToWorldLocation", &USplineComponent::execFindLocationClosestToWorldLocation },
			{ "FindRightVectorClosestToWorldLocation", &USplineComponent::execFindRightVectorClosestToWorldLocation },
			{ "FindRollClosestToWorldLocation", &USplineComponent::execFindRollClosestToWorldLocation },
			{ "FindRotationClosestToWorldLocation", &USplineComponent::execFindRotationClosestToWorldLocation },
			{ "FindScaleClosestToWorldLocation", &USplineComponent::execFindScaleClosestToWorldLocation },
			{ "FindTangentClosestToWorldLocation", &USplineComponent::execFindTangentClosestToWorldLocation },
			{ "FindTransformClosestToWorldLocation", &USplineComponent::execFindTransformClosestToWorldLocation },
			{ "FindUpVectorClosestToWorldLocation", &USplineComponent::execFindUpVectorClosestToWorldLocation },
			{ "GetArriveTangentAtSplinePoint", &USplineComponent::execGetArriveTangentAtSplinePoint },
			{ "GetDefaultUpVector", &USplineComponent::execGetDefaultUpVector },
			{ "GetDirectionAtDistanceAlongSpline", &USplineComponent::execGetDirectionAtDistanceAlongSpline },
			{ "GetDirectionAtSplinePoint", &USplineComponent::execGetDirectionAtSplinePoint },
			{ "GetDirectionAtTime", &USplineComponent::execGetDirectionAtTime },
			{ "GetDistanceAlongSplineAtSplinePoint", &USplineComponent::execGetDistanceAlongSplineAtSplinePoint },
			{ "GetInputKeyAtDistanceAlongSpline", &USplineComponent::execGetInputKeyAtDistanceAlongSpline },
			{ "GetLeaveTangentAtSplinePoint", &USplineComponent::execGetLeaveTangentAtSplinePoint },
			{ "GetLocalLocationAndTangentAtSplinePoint", &USplineComponent::execGetLocalLocationAndTangentAtSplinePoint },
			{ "GetLocationAndTangentAtSplinePoint", &USplineComponent::execGetLocationAndTangentAtSplinePoint },
			{ "GetLocationAtDistanceAlongSpline", &USplineComponent::execGetLocationAtDistanceAlongSpline },
			{ "GetLocationAtSplinePoint", &USplineComponent::execGetLocationAtSplinePoint },
			{ "GetLocationAtTime", &USplineComponent::execGetLocationAtTime },
			{ "GetNumberOfSplinePoints", &USplineComponent::execGetNumberOfSplinePoints },
			{ "GetRightVectorAtDistanceAlongSpline", &USplineComponent::execGetRightVectorAtDistanceAlongSpline },
			{ "GetRightVectorAtSplinePoint", &USplineComponent::execGetRightVectorAtSplinePoint },
			{ "GetRightVectorAtTime", &USplineComponent::execGetRightVectorAtTime },
			{ "GetRollAtDistanceAlongSpline", &USplineComponent::execGetRollAtDistanceAlongSpline },
			{ "GetRollAtSplinePoint", &USplineComponent::execGetRollAtSplinePoint },
			{ "GetRollAtTime", &USplineComponent::execGetRollAtTime },
			{ "GetRotationAtDistanceAlongSpline", &USplineComponent::execGetRotationAtDistanceAlongSpline },
			{ "GetRotationAtSplinePoint", &USplineComponent::execGetRotationAtSplinePoint },
			{ "GetRotationAtTime", &USplineComponent::execGetRotationAtTime },
			{ "GetScaleAtDistanceAlongSpline", &USplineComponent::execGetScaleAtDistanceAlongSpline },
			{ "GetScaleAtSplinePoint", &USplineComponent::execGetScaleAtSplinePoint },
			{ "GetScaleAtTime", &USplineComponent::execGetScaleAtTime },
			{ "GetSplineLength", &USplineComponent::execGetSplineLength },
			{ "GetSplinePointType", &USplineComponent::execGetSplinePointType },
			{ "GetTangentAtDistanceAlongSpline", &USplineComponent::execGetTangentAtDistanceAlongSpline },
			{ "GetTangentAtSplinePoint", &USplineComponent::execGetTangentAtSplinePoint },
			{ "GetTangentAtTime", &USplineComponent::execGetTangentAtTime },
			{ "GetTransformAtDistanceAlongSpline", &USplineComponent::execGetTransformAtDistanceAlongSpline },
			{ "GetTransformAtSplinePoint", &USplineComponent::execGetTransformAtSplinePoint },
			{ "GetTransformAtTime", &USplineComponent::execGetTransformAtTime },
			{ "GetUpVectorAtDistanceAlongSpline", &USplineComponent::execGetUpVectorAtDistanceAlongSpline },
			{ "GetUpVectorAtSplinePoint", &USplineComponent::execGetUpVectorAtSplinePoint },
			{ "GetUpVectorAtTime", &USplineComponent::execGetUpVectorAtTime },
			{ "GetWorldDirectionAtDistanceAlongSpline", &USplineComponent::execGetWorldDirectionAtDistanceAlongSpline },
			{ "GetWorldDirectionAtTime", &USplineComponent::execGetWorldDirectionAtTime },
			{ "GetWorldLocationAtDistanceAlongSpline", &USplineComponent::execGetWorldLocationAtDistanceAlongSpline },
			{ "GetWorldLocationAtSplinePoint", &USplineComponent::execGetWorldLocationAtSplinePoint },
			{ "GetWorldLocationAtTime", &USplineComponent::execGetWorldLocationAtTime },
			{ "GetWorldRotationAtDistanceAlongSpline", &USplineComponent::execGetWorldRotationAtDistanceAlongSpline },
			{ "GetWorldRotationAtTime", &USplineComponent::execGetWorldRotationAtTime },
			{ "GetWorldTangentAtDistanceAlongSpline", &USplineComponent::execGetWorldTangentAtDistanceAlongSpline },
			{ "IsClosedLoop", &USplineComponent::execIsClosedLoop },
			{ "RemoveSplinePoint", &USplineComponent::execRemoveSplinePoint },
			{ "SetClosedLoop", &USplineComponent::execSetClosedLoop },
			{ "SetClosedLoopAtPosition", &USplineComponent::execSetClosedLoopAtPosition },
			{ "SetDefaultUpVector", &USplineComponent::execSetDefaultUpVector },
			{ "SetDrawDebug", &USplineComponent::execSetDrawDebug },
			{ "SetLocationAtSplinePoint", &USplineComponent::execSetLocationAtSplinePoint },
			{ "SetSelectedSplineSegmentColor", &USplineComponent::execSetSelectedSplineSegmentColor },
			{ "SetSplineLocalPoints", &USplineComponent::execSetSplineLocalPoints },
			{ "SetSplinePoints", &USplineComponent::execSetSplinePoints },
			{ "SetSplinePointType", &USplineComponent::execSetSplinePointType },
			{ "SetSplineWorldPoints", &USplineComponent::execSetSplineWorldPoints },
			{ "SetTangentAtSplinePoint", &USplineComponent::execSetTangentAtSplinePoint },
			{ "SetTangentsAtSplinePoint", &USplineComponent::execSetTangentsAtSplinePoint },
			{ "SetUnselectedSplineSegmentColor", &USplineComponent::execSetUnselectedSplineSegmentColor },
			{ "SetUpVectorAtSplinePoint", &USplineComponent::execSetUpVectorAtSplinePoint },
			{ "SetWorldLocationAtSplinePoint", &USplineComponent::execSetWorldLocationAtSplinePoint },
			{ "UpdateSpline", &USplineComponent::execUpdateSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineComponent_AddPoint_Statics
	{
		struct SplineComponent_eventAddPoint_Parms
		{
			FSplinePoint Point;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddPoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventAddPoint_Parms), &Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddPoint_Parms, Point), Z_Construct_UScriptStruct_FSplinePoint, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds an FSplinePoint to the spline. This contains its input key, position, tangent, rotation and scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddPoint", sizeof(SplineComponent_eventAddPoint_Parms), Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddPoints_Statics
	{
		struct SplineComponent_eventAddPoints_Parms
		{
			TArray<FSplinePoint> Points;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddPoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventAddPoints_Parms), &Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddPoints_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds an array of FSplinePoints to the spline." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddPoints", sizeof(SplineComponent_eventAddPoints_Parms), Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics
	{
		struct SplineComponent_eventAddSplineLocalPoint_Parms
		{
			FVector Position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplineLocalPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddSplinePoint, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a local space point to the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplineLocalPoint", sizeof(SplineComponent_eventAddSplineLocalPoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics
	{
		struct SplineComponent_eventAddSplinePoint_Parms
		{
			FVector Position;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventAddSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplinePoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a point to the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplinePoint", sizeof(SplineComponent_eventAddSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics
	{
		struct SplineComponent_eventAddSplinePointAtIndex_Parms
		{
			FVector Position;
			int32 Index;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddSplinePointAtIndex_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventAddSplinePointAtIndex_Parms), &Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a point to the spline at the specified index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplinePointAtIndex", sizeof(SplineComponent_eventAddSplinePointAtIndex_Parms), Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics
	{
		struct SplineComponent_eventAddSplineWorldPoint_Parms
		{
			FVector Position;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventAddSplineWorldPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a world space point to the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplineWorldPoint", sizeof(SplineComponent_eventAddSplineWorldPoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics
	{
		struct SplineComponent_eventClearSplinePoints_Parms
		{
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventClearSplinePoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventClearSplinePoints_Parms), &Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Clears all the points in the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "ClearSplinePoints", sizeof(SplineComponent_eventClearSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_ClearSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindDirectionClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world spcae, return a unit direction vector of the spline tangent closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindDirectionClosestToWorldLocation", sizeof(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the input key closest to that location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindInputKeyClosestToWorldLocation", sizeof(SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindLocationClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the point on the curve that is closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindLocationClosestToWorldLocation", sizeof(SplineComponent_eventFindLocationClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return a unit direction vector corresponding to the spline's right vector closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRightVectorClosestToWorldLocation", sizeof(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRollClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the spline's roll closest to the location, in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRollClosestToWorldLocation", sizeof(SplineComponent_eventFindRollClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRotationClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return rotation corresponding to the spline's rotation closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRotationClosestToWorldLocation", sizeof(SplineComponent_eventFindRotationClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindScaleClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindScaleClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindScaleClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the spline's scale closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindScaleClosestToWorldLocation", sizeof(SplineComponent_eventFindScaleClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindTangentClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the tangent vector of the spline closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindTangentClosestToWorldLocation", sizeof(SplineComponent_eventFindTangentClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindTransformClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventFindTransformClosestToWorldLocation_Parms*)Obj)->bUseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventFindTransformClosestToWorldLocation_Parms), &Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return an FTransform closest to that location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindTransformClosestToWorldLocation", sizeof(SplineComponent_eventFindTransformClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return a unit direction vector corresponding to the spline's up vector closest to the location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindUpVectorClosestToWorldLocation", sizeof(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetArriveTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the arrive tangent at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetArriveTangentAtSplinePoint", sizeof(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics
	{
		struct SplineComponent_eventGetDefaultUpVector_Parms
		{
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDefaultUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDefaultUpVector_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_CoordinateSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Gets the default up vector used by this spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDefaultUpVector", sizeof(SplineComponent_eventGetDefaultUpVector_Parms), Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDefaultUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtDistanceAlongSpline", sizeof(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetDirectionAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the location at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtSplinePoint", sizeof(SplineComponent_eventGetDirectionAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics
	{
		struct SplineComponent_eventGetDirectionAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetDirectionAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetDirectionAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtTime", sizeof(SplineComponent_eventGetDirectionAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms
		{
			int32 PointIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the distance along the spline at the spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDistanceAlongSplineAtSplinePoint", sizeof(SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms
		{
			float Distance;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the corresponding input key at that point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetInputKeyAtDistanceAlongSpline", sizeof(SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the leave tangent at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLeaveTangentAtSplinePoint", sizeof(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector LocalLocation;
			FVector LocalTangent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalTangent = { "LocalTangent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, LocalTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAndTangentAtSplinePoint, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get local location and tangent at a spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocalLocationAndTangentAtSplinePoint", sizeof(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector Location;
			FVector Tangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get location and tangent at a spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAndTangentAtSplinePoint", sizeof(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtDistanceAlongSpline", sizeof(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the location at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtSplinePoint", sizeof(SplineComponent_eventGetLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics
	{
		struct SplineComponent_eventGetLocationAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetLocationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetLocationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the point in space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtTime", sizeof(SplineComponent_eventGetLocationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics
	{
		struct SplineComponent_eventGetNumberOfSplinePoints_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetNumberOfSplinePoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the number of points that make up this spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetNumberOfSplinePoints", sizeof(SplineComponent_eventGetNumberOfSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's right vector there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtDistanceAlongSpline", sizeof(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRightVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the right vector at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtSplinePoint", sizeof(SplineComponent_eventGetRightVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics
	{
		struct SplineComponent_eventGetRightVectorAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRightVectorAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetRightVectorAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's right vector there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtTime", sizeof(SplineComponent_eventGetRightVectorAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRollAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the spline's roll there, in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtDistanceAlongSpline", sizeof(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRollAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the amount of roll at spline point, in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtSplinePoint", sizeof(SplineComponent_eventGetRollAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics
	{
		struct SplineComponent_eventGetRollAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRollAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetRollAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's roll there, in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtTime", sizeof(SplineComponent_eventGetRollAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtDistanceAlongSpline", sizeof(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRotationAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the rotation at spline point as a rotator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtSplinePoint", sizeof(SplineComponent_eventGetRotationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics
	{
		struct SplineComponent_eventGetRotationAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRotationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetRotationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtTime", sizeof(SplineComponent_eventGetRotationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the spline's scale there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtDistanceAlongSpline", sizeof(SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetScaleAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the scale at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtSplinePoint", sizeof(SplineComponent_eventGetScaleAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics
	{
		struct SplineComponent_eventGetScaleAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetScaleAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetScaleAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetScaleAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's scale there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtTime", sizeof(SplineComponent_eventGetScaleAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics
	{
		struct SplineComponent_eventGetSplineLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetSplineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Returns total length along this spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetSplineLength", sizeof(SplineComponent_eventGetSplineLength_Parms), Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetSplineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics
	{
		struct SplineComponent_eventGetSplinePointType_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplinePointType::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetSplinePointType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetSplinePointType_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the type of a spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetSplinePointType", sizeof(SplineComponent_eventGetSplinePointType_Parms), Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetSplinePointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the tangent vector of the spline there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtDistanceAlongSpline", sizeof(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the tangent at spline point. This fetches the Leave tangent of the point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtSplinePoint", sizeof(SplineComponent_eventGetTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics
	{
		struct SplineComponent_eventGetTangentAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTangentAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetTangentAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's tangent there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtTime", sizeof(SplineComponent_eventGetTangentAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms*)Obj)->bUseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return an FTransform corresponding to that point on the spline." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtDistanceAlongSpline", sizeof(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetTransformAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtSplinePoint_Parms*)Obj)->bUseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the transform at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtSplinePoint", sizeof(SplineComponent_eventGetTransformAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics
	{
		struct SplineComponent_eventGetTransformAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtTime_Parms*)Obj)->bUseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's transform at the corresponding position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtTime", sizeof(SplineComponent_eventGetTransformAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's up vector there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtDistanceAlongSpline", sizeof(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetUpVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the up vector at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtSplinePoint", sizeof(SplineComponent_eventGetUpVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics
	{
		struct SplineComponent_eventGetUpVectorAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetUpVectorAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetUpVectorAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's up vector there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtTime", sizeof(SplineComponent_eventGetUpVectorAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetDirectionAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector of the spline tangent there, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldDirectionAtDistanceAlongSpline", sizeof(SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics
	{
		struct SplineComponent_eventGetWorldDirectionAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldDirectionAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetWorldDirectionAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetDirectionAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldDirectionAtTime", sizeof(SplineComponent_eventGetWorldDirectionAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in world space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtDistanceAlongSpline", sizeof(SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the world location at spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtSplinePoint", sizeof(SplineComponent_eventGetWorldLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldLocationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetWorldLocationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the point in space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtTime", sizeof(SplineComponent_eventGetWorldLocationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms
		{
			float Distance;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetRotationAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldRotationAtDistanceAlongSpline", sizeof(SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics
	{
		struct SplineComponent_eventGetWorldRotationAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldRotationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventGetWorldRotationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetRotationAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldRotationAtTime", sizeof(SplineComponent_eventGetWorldRotationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetTangentAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the tangent vector of the spline there, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldTangentAtDistanceAlongSpline", sizeof(SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics
	{
		struct SplineComponent_eventIsClosedLoop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventIsClosedLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventIsClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Check whether the spline is a closed loop or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "IsClosedLoop", sizeof(SplineComponent_eventIsClosedLoop_Parms), Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_IsClosedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics
	{
		struct SplineComponent_eventRemoveSplinePoint_Parms
		{
			int32 Index;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventRemoveSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventRemoveSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventRemoveSplinePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Removes point at specified index from the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "RemoveSplinePoint", sizeof(SplineComponent_eventRemoveSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_RemoveSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics
	{
		struct SplineComponent_eventSetClosedLoop_Parms
		{
			bool bInClosedLoop;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static void NewProp_bInClosedLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInClosedLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoop_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoop_Parms*)Obj)->bInClosedLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop = { "bInClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether the spline is a closed loop or not. The loop position will be at 1.0 after the last point's input key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetClosedLoop", sizeof(SplineComponent_eventSetClosedLoop_Parms), Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics
	{
		struct SplineComponent_eventSetClosedLoopAtPosition_Parms
		{
			bool bInClosedLoop;
			float Key;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key;
		static void NewProp_bInClosedLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInClosedLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoopAtPosition_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoopAtPosition_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetClosedLoopAtPosition_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoopAtPosition_Parms*)Obj)->bInClosedLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop = { "bInClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoopAtPosition_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether the spline is a closed loop or not, and if so, the input key corresponding to the loop point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetClosedLoopAtPosition", sizeof(SplineComponent_eventSetClosedLoopAtPosition_Parms), Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics
	{
		struct SplineComponent_eventSetDefaultUpVector_Parms
		{
			FVector UpVector;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetDefaultUpVector_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetDefaultUpVector_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the default up vector used by this spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetDefaultUpVector", sizeof(SplineComponent_eventSetDefaultUpVector_Parms), Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetDefaultUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics
	{
		struct SplineComponent_eventSetDrawDebug_Parms
		{
			bool bShow;
		};
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SplineComponent_eventSetDrawDebug_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetDrawDebug_Parms), &Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether this spline should be rendered when the Editor/Game spline show flag is set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetDrawDebug", sizeof(SplineComponent_eventSetDrawDebug_Parms), Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetDrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetLocationAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetLocationAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Move an existing point to a new location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetLocationAtSplinePoint", sizeof(SplineComponent_eventSetLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics
	{
		struct SplineComponent_eventSetSelectedSplineSegmentColor_Parms
		{
			FLinearColor SegmentColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor = { "SegmentColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSelectedSplineSegmentColor_Parms, SegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify selected spline component segment color in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSelectedSplineSegmentColor", sizeof(SplineComponent_eventSetSelectedSplineSegmentColor_Parms), Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics
	{
		struct SplineComponent_eventSetSplineLocalPoints_Parms
		{
			TArray<FVector> Points;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplineLocalPoints_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetSplinePoints, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of local space points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplineLocalPoints", sizeof(SplineComponent_eventSetSplineLocalPoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics
	{
		struct SplineComponent_eventSetSplinePoints_Parms
		{
			TArray<FVector> Points;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetSplinePoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetSplinePoints_Parms), &Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplinePoints_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplinePoints_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplinePoints", sizeof(SplineComponent_eventSetSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics
	{
		struct SplineComponent_eventSetSplinePointType_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplinePointType::Type> Type;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetSplinePointType_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetSplinePointType_Parms), &Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplinePointType_Parms, Type), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplinePointType_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the type of a spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplinePointType", sizeof(SplineComponent_eventSetSplinePointType_Parms), Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics
	{
		struct SplineComponent_eventSetSplineWorldPoints_Parms
		{
			TArray<FVector> Points;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetSplineWorldPoints_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetSplinePoints, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of world space points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplineWorldPoints", sizeof(SplineComponent_eventSetSplineWorldPoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InTangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTangent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetTangentAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetTangentAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent = { "InTangent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, InTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the tangent at a given spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetTangentAtSplinePoint", sizeof(SplineComponent_eventSetTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetTangentsAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InArriveTangent;
			FVector InLeaveTangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArriveTangent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetTangentsAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetTangentsAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent = { "InLeaveTangent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, InLeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent = { "InArriveTangent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, InArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the tangents at a given spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetTangentsAtSplinePoint", sizeof(SplineComponent_eventSetTangentsAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics
	{
		struct SplineComponent_eventSetUnselectedSplineSegmentColor_Parms
		{
			FLinearColor SegmentColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor = { "SegmentColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetUnselectedSplineSegmentColor_Parms, SegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify unselected spline component segment color in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetUnselectedSplineSegmentColor", sizeof(SplineComponent_eventSetUnselectedSplineSegmentColor_Parms), Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetUpVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InUpVector;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUpVector;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetUpVectorAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineComponent_eventSetUpVectorAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector = { "InUpVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, InUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the up vector at a given spline point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetUpVectorAtSplinePoint", sizeof(SplineComponent_eventSetUpVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetWorldLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetWorldLocationAtSplinePoint_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineComponent_eventSetWorldLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetLocationAtSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Move an existing point to a new world location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetWorldLocationAtSplinePoint", sizeof(SplineComponent_eventSetWorldLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Update the spline tangents and SplineReparamTable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "UpdateSpline", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_UpdateSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplineComponent_NoRegister()
	{
		return USplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleVisualizationWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleVisualizationWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeScale_MetaData[];
#endif
		static void NewProp_bShouldVisualizeScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDiscontinuousSpline_MetaData[];
#endif
		static void NewProp_bAllowDiscontinuousSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDiscontinuousSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSelectedSplineSegmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorSelectedSplineSegmentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorUnselectedSplineSegmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorUnselectedSplineSegmentColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultUpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultUpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopPositionOverride_MetaData[];
#endif
		static void NewProp_bLoopPositionOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopPositionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[];
#endif
		static void NewProp_bClosedLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputSplinePointsToConstructionScript_MetaData[];
#endif
		static void NewProp_bInputSplinePointsToConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputSplinePointsToConstructionScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifiedByConstructionScript_MetaData[];
#endif
		static void NewProp_bModifiedByConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifiedByConstructionScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplineHasBeenEdited_MetaData[];
#endif
		static void NewProp_bSplineHasBeenEdited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplineHasBeenEdited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStationaryEndpoints_MetaData[];
#endif
		static void NewProp_bStationaryEndpoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStationaryEndpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSplineEditingPerInstance_MetaData[];
#endif
		static void NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSplineEditingPerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineReparamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineReparamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineScaleInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineScaleInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineRotInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineRotInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineComponent_AddPoint, "AddPoint" }, // 2508658984
		{ &Z_Construct_UFunction_USplineComponent_AddPoints, "AddPoints" }, // 2403582165
		{ &Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint, "AddSplineLocalPoint" }, // 1415078461
		{ &Z_Construct_UFunction_USplineComponent_AddSplinePoint, "AddSplinePoint" }, // 3956035959
		{ &Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex, "AddSplinePointAtIndex" }, // 3251888817
		{ &Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint, "AddSplineWorldPoint" }, // 3245600815
		{ &Z_Construct_UFunction_USplineComponent_ClearSplinePoints, "ClearSplinePoints" }, // 3649682780
		{ &Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation, "FindDirectionClosestToWorldLocation" }, // 3607581237
		{ &Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation, "FindInputKeyClosestToWorldLocation" }, // 2536854721
		{ &Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation, "FindLocationClosestToWorldLocation" }, // 1627412561
		{ &Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation, "FindRightVectorClosestToWorldLocation" }, // 1258920200
		{ &Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation, "FindRollClosestToWorldLocation" }, // 679599292
		{ &Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation, "FindRotationClosestToWorldLocation" }, // 1621293435
		{ &Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation, "FindScaleClosestToWorldLocation" }, // 4185293688
		{ &Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation, "FindTangentClosestToWorldLocation" }, // 2467067681
		{ &Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation, "FindTransformClosestToWorldLocation" }, // 2814016316
		{ &Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation, "FindUpVectorClosestToWorldLocation" }, // 2395842385
		{ &Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint, "GetArriveTangentAtSplinePoint" }, // 3732980848
		{ &Z_Construct_UFunction_USplineComponent_GetDefaultUpVector, "GetDefaultUpVector" }, // 2128443165
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline, "GetDirectionAtDistanceAlongSpline" }, // 1011356071
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint, "GetDirectionAtSplinePoint" }, // 3156284354
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtTime, "GetDirectionAtTime" }, // 2184270196
		{ &Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint, "GetDistanceAlongSplineAtSplinePoint" }, // 2927751292
		{ &Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline, "GetInputKeyAtDistanceAlongSpline" }, // 3202078016
		{ &Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint, "GetLeaveTangentAtSplinePoint" }, // 1062833985
		{ &Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint, "GetLocalLocationAndTangentAtSplinePoint" }, // 1057445154
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint, "GetLocationAndTangentAtSplinePoint" }, // 2249527561
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline, "GetLocationAtDistanceAlongSpline" }, // 838724699
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint, "GetLocationAtSplinePoint" }, // 3488228629
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtTime, "GetLocationAtTime" }, // 232380664
		{ &Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints, "GetNumberOfSplinePoints" }, // 2534770983
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline, "GetRightVectorAtDistanceAlongSpline" }, // 1708982773
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint, "GetRightVectorAtSplinePoint" }, // 1442023219
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime, "GetRightVectorAtTime" }, // 1128795425
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline, "GetRollAtDistanceAlongSpline" }, // 1964138139
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint, "GetRollAtSplinePoint" }, // 3751028949
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtTime, "GetRollAtTime" }, // 568784045
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline, "GetRotationAtDistanceAlongSpline" }, // 4071477659
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint, "GetRotationAtSplinePoint" }, // 869958829
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtTime, "GetRotationAtTime" }, // 164282083
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline, "GetScaleAtDistanceAlongSpline" }, // 2101461078
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint, "GetScaleAtSplinePoint" }, // 568042800
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtTime, "GetScaleAtTime" }, // 3365427541
		{ &Z_Construct_UFunction_USplineComponent_GetSplineLength, "GetSplineLength" }, // 297968793
		{ &Z_Construct_UFunction_USplineComponent_GetSplinePointType, "GetSplinePointType" }, // 2487688174
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline, "GetTangentAtDistanceAlongSpline" }, // 1169322965
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint, "GetTangentAtSplinePoint" }, // 697331612
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtTime, "GetTangentAtTime" }, // 2294261876
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline, "GetTransformAtDistanceAlongSpline" }, // 277327111
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint, "GetTransformAtSplinePoint" }, // 979035945
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtTime, "GetTransformAtTime" }, // 1570419822
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline, "GetUpVectorAtDistanceAlongSpline" }, // 3519253054
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint, "GetUpVectorAtSplinePoint" }, // 3891311981
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime, "GetUpVectorAtTime" }, // 1006524830
		{ &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline, "GetWorldDirectionAtDistanceAlongSpline" }, // 1404494101
		{ &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime, "GetWorldDirectionAtTime" }, // 1311152916
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline, "GetWorldLocationAtDistanceAlongSpline" }, // 428798466
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint, "GetWorldLocationAtSplinePoint" }, // 765526070
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime, "GetWorldLocationAtTime" }, // 3072983837
		{ &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline, "GetWorldRotationAtDistanceAlongSpline" }, // 3873792614
		{ &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime, "GetWorldRotationAtTime" }, // 3029942656
		{ &Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline, "GetWorldTangentAtDistanceAlongSpline" }, // 1952086714
		{ &Z_Construct_UFunction_USplineComponent_IsClosedLoop, "IsClosedLoop" }, // 1004788143
		{ &Z_Construct_UFunction_USplineComponent_RemoveSplinePoint, "RemoveSplinePoint" }, // 3942966392
		{ &Z_Construct_UFunction_USplineComponent_SetClosedLoop, "SetClosedLoop" }, // 2798547832
		{ &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition, "SetClosedLoopAtPosition" }, // 495110705
		{ &Z_Construct_UFunction_USplineComponent_SetDefaultUpVector, "SetDefaultUpVector" }, // 249611366
		{ &Z_Construct_UFunction_USplineComponent_SetDrawDebug, "SetDrawDebug" }, // 1342076517
		{ &Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint, "SetLocationAtSplinePoint" }, // 1135231577
		{ &Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor, "SetSelectedSplineSegmentColor" }, // 2954548593
		{ &Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints, "SetSplineLocalPoints" }, // 74667591
		{ &Z_Construct_UFunction_USplineComponent_SetSplinePoints, "SetSplinePoints" }, // 3387090221
		{ &Z_Construct_UFunction_USplineComponent_SetSplinePointType, "SetSplinePointType" }, // 3505140278
		{ &Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints, "SetSplineWorldPoints" }, // 3789006262
		{ &Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint, "SetTangentAtSplinePoint" }, // 945223571
		{ &Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint, "SetTangentsAtSplinePoint" }, // 907016982
		{ &Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor, "SetUnselectedSplineSegmentColor" }, // 893245294
		{ &Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint, "SetUpVectorAtSplinePoint" }, // 3259292789
		{ &Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint, "SetWorldLocationAtSplinePoint" }, // 2630338484
		{ &Z_Construct_UFunction_USplineComponent_UpdateSpline, "UpdateSpline" }, // 4146128925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger" },
		{ "IncludePath", "Components/SplineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A spline component is a spline shape which can be used for other purposes (e.g. animating objects). It contains debug rendering capabilities.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData[] = {
		{ "Category", "Editor" },
		{ "EditCondition", "bShouldVisualizeScale" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Width of spline in editor for use with scale visualization" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth = { "ScaleVisualizationWidth", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, ScaleVisualizationWidth), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData[] = {
		{ "Category", "Editor" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether scale visualization should be displayed" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bShouldVisualizeScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale = { "bShouldVisualizeScale", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline's leave and arrive tangents can be different" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bAllowDiscontinuousSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline = { "bAllowDiscontinuousSpline", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Color of a selected spline component segment in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor = { "EditorSelectedSplineSegmentColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, EditorSelectedSplineSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Color of an unselected spline component segment in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor = { "EditorUnselectedSplineSegmentColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, EditorUnselectedSplineSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Default up vector in local space to be used when calculating transforms along the spline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector = { "DefaultUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, DefaultUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "bLoopPositionOverride" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition = { "LoopPosition", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, LoopPosition), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData[] = {
		{ "Category", "Spline" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bLoopPositionOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride = { "bLoopPositionOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline is to be considered as a closed loop.\nUse SetClosedLoop() to set this property, and IsClosedLoop() to read it." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bClosedLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "If true, the spline will be rendered if the Splines showflag is set." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline points should be passed to the User Construction Script so they can be further manipulated by it.\nIf false, they will not be visible to it, and it will not be able to influence the per-instance positions set in the editor." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bInputSplinePointsToConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript = { "bInputSplinePointsToConstructionScript", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the UCS has made changes to the spline points" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bModifiedByConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript = { "bModifiedByConstructionScript", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData[] = {
		{ "Category", "Spline" },
		{ "DisplayName", "Override Construction Script" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline has been edited from its default by the spline component visualizer" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bSplineHasBeenEdited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited = { "bSplineHasBeenEdited", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "!bClosedLoop" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the endpoints of the spline are considered stationary when traversing the spline at non-constant velocity.  Essentially this sets the endpoints' tangents to zero vectors." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bStationaryEndpoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints = { "bStationaryEndpoints", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specifies the duration of the spline in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "Category", "Spline" },
		{ "ClampMax", "100" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Number of steps per spline segment to place in the reparameterization table" },
		{ "UIMax", "100" },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, ReparamStepsPerSegment), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bAllowSplineEditingPerInstance_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance = { "bAllowSplineEditingPerInstance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable = { "SplineReparamTable", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, SplineReparamTable_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsScale() to fetch this FInterpCurve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo = { "SplineScaleInfo", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, SplineScaleInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsRotation() to fetch this FInterpCurve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo = { "SplineRotInfo", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, SplineRotInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveQuat, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsPosition() to fetch this FInterpCurve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo = { "SplineInfo", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, SplineInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplineComponent, SplineCurves), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplineComponent_Statics::ClassParams = {
		&USplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USplineComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplineComponent, 1048685625);
	template<> ENGINE_API UClass* StaticClass<USplineComponent>()
	{
		return USplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplineComponent(Z_Construct_UClass_USplineComponent, &USplineComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USplineComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
