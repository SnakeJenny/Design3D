// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_SplineIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SplineIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData();
// End Cross Module References
	static UEnum* ESplineBoneAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESplineBoneAxis"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESplineBoneAxis>()
	{
		return ESplineBoneAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineBoneAxis(ESplineBoneAxis_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ESplineBoneAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Hash() { return 2843010386U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineBoneAxis"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineBoneAxis::X", (int64)ESplineBoneAxis::X },
				{ "ESplineBoneAxis::Y", (int64)ESplineBoneAxis::Y },
				{ "ESplineBoneAxis::Z", (int64)ESplineBoneAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
				{ "ToolTip", "The different axes we can align our bones to.\nNote that the values are set to match up with EAxis (but without 'None')" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ESplineBoneAxis",
				"ESplineBoneAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_SplineIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SplineIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SplineIK"), sizeof(FAnimNode_SplineIK), Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SplineIK>()
{
	return FAnimNode_SplineIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SplineIK(FAnimNode_SplineIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SplineIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SplineIK")),new UScriptStruct::TCppStructOps<FAnimNode_SplineIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK;
	struct Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSpline_MetaData[];
#endif
		static void NewProp_bAutoCalculateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SplineIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The distance along the spline from the start from which bones are constrained" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The maximum stretch allowed when fitting bones to the spline. 0.0 means bones do not stretch their length,\n1.0 means bones stretch to the length of the spline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Stretch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "How to interpolate twist along the length of the spline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend = { "TwistBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the end bone. Twist is interpolated along the spline according to Twist Blend." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd = { "TwistEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the start bone. Twist is interpolated along the spline according to Twist Blend." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart = { "TwistStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overall roll of the spline, applied on top of other rotations along the direction of the spline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Transforms applied to spline points *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, ControlPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "2" },
		{ "EditCondition", "!bAutoCalculateSpline" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are not auto-calculating" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount = { "PointCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, PointCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are specifying it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit(void* Obj)
	{
		((FAnimNode_SplineIK*)Obj)->bAutoCalculateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline = { "bAutoCalculateSpline", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SplineIK), &Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Axis of the controlled bone (ie the direction of the spline) to use as the direction for the curve." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis = { "BoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, BoneAxis), Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of bone at the end of the spline chain. Bones after this will not be altered by the controller." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, EndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of root bone from which the spline extends *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SplineIK, StartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SplineIK",
		sizeof(FAnimNode_SplineIK),
		alignof(FAnimNode_SplineIK),
		Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SplineIK"), sizeof(FAnimNode_SplineIK), Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_Hash() { return 2491017603U; }
class UScriptStruct* FSplineIKCachedBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineIKCachedBoneData, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SplineIKCachedBoneData"), sizeof(FSplineIKCachedBoneData), Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSplineIKCachedBoneData>()
{
	return FSplineIKCachedBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineIKCachedBoneData(FSplineIKCachedBoneData::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("SplineIKCachedBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineIKCachedBoneData")),new UScriptStruct::TCppStructOps<FSplineIKCachedBoneData>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData;
	struct Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefSkeletonIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefSkeletonIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Data cached per bone in the chain" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineIKCachedBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Index of the bone in the reference skeleton" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex = { "RefSkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineIKCachedBoneData, RefSkeletonIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The bone we refer to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineIKCachedBoneData, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"SplineIKCachedBoneData",
		sizeof(FSplineIKCachedBoneData),
		alignof(FSplineIKCachedBoneData),
		Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineIKCachedBoneData"), sizeof(FSplineIKCachedBoneData), Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Hash() { return 2546137253U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
