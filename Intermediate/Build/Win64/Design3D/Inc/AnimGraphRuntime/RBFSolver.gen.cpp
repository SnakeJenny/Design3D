// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/RBF/RBFSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBFSolver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	static UEnum* ERBFDistanceMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFDistanceMethod"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFDistanceMethod>()
	{
		return ERBFDistanceMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFDistanceMethod(ERBFDistanceMethod_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFDistanceMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Hash() { return 134774878U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFDistanceMethod"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFDistanceMethod::Euclidean", (int64)ERBFDistanceMethod::Euclidean },
				{ "ERBFDistanceMethod::Quaternion", (int64)ERBFDistanceMethod::Quaternion },
				{ "ERBFDistanceMethod::SwingAngle", (int64)ERBFDistanceMethod::SwingAngle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Euclidean.ToolTip", "Standard n-dimensional distance measure" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "Quaternion.ToolTip", "Treat inputs as quaternion" },
				{ "SwingAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotated TwistAxis direction" },
				{ "ToolTip", "Method for determining distance from input to targets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFDistanceMethod",
				"ERBFDistanceMethod",
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
	static UEnum* ERBFFunctionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFFunctionType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFFunctionType>()
	{
		return ERBFFunctionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFFunctionType(ERBFFunctionType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFFunctionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Hash() { return 378782541U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFFunctionType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFFunctionType::Gaussian", (int64)ERBFFunctionType::Gaussian },
				{ "ERBFFunctionType::Exponential", (int64)ERBFFunctionType::Exponential },
				{ "ERBFFunctionType::Linear", (int64)ERBFFunctionType::Linear },
				{ "ERBFFunctionType::Cubic", (int64)ERBFFunctionType::Cubic },
				{ "ERBFFunctionType::Quintic", (int64)ERBFFunctionType::Quintic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Function to use for each target falloff" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ERBFFunctionType",
				"ERBFFunctionType",
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
class UScriptStruct* FRBFParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFParams, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFParams>()
{
	return FRBFParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFParams(FRBFParams::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFParams"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFParams")),new UScriptStruct::TCppStructOps<FRBFParams>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams;
	struct Z_Construct_UScriptStruct_FRBFParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Function_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetDimensions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Weight below which we shouldn't bother returning a contribution from a target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, WeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Axis to use when DistanceMethod is SwingAngle" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, TwistAxis), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, Function), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Default radius for each target, scaled by per-Target ScaleFactor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How many dimensions input data has" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions = { "TargetDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFParams, TargetDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFParams",
		sizeof(FRBFParams),
		alignof(FRBFParams),
		Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFParams_Hash() { return 3732980205U; }
class UScriptStruct* FRBFTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFTarget, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFTarget>()
{
	return FRBFTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFTarget(FRBFTarget::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFTarget")),new UScriptStruct::TCppStructOps<FRBFTarget>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget;
	struct Z_Construct_UScriptStruct_FRBFTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[];
#endif
		static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Data about a particular target in the RBF, including scaling factor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Custom curve to apply to activation of this target, if bApplyCustomCurve is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Whether we want to apply an additional custom curve when activating this target" },
	};
#endif
	void Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FRBFTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRBFTarget), &Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How large to scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFTarget, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FRBFEntry,
		&NewStructOps,
		"RBFTarget",
		sizeof(FRBFTarget),
		alignof(FRBFTarget),
		Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_Hash() { return 3321006740U; }
class UScriptStruct* FRBFEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFEntry>()
{
	return FRBFEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFEntry(FRBFEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFEntry")),new UScriptStruct::TCppStructOps<FRBFEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry;
	struct Z_Construct_UScriptStruct_FRBFEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Struct storing a particular entry within the RBF" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Set of values for this target, size must be TargetDimensions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBFEntry, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFEntry",
		sizeof(FRBFEntry),
		alignof(FRBFEntry),
		Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_Hash() { return 4084264784U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
