// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/TimeStretchCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeStretchCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimeStretchCurveMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveMarker();
// End Cross Module References
	static UEnum* ETimeStretchCurveMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping, Z_Construct_UPackage__Script_Engine(), TEXT("ETimeStretchCurveMapping"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimeStretchCurveMapping>()
	{
		return ETimeStretchCurveMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimeStretchCurveMapping(ETimeStretchCurveMapping_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimeStretchCurveMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Hash() { return 3749298563U; }
	UEnum* Z_Construct_UEnum_Engine_ETimeStretchCurveMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimeStretchCurveMapping"), 0, Get_Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimeStretchCurveMapping::T_Original", (int64)ETimeStretchCurveMapping::T_Original },
				{ "ETimeStretchCurveMapping::T_TargetMin", (int64)ETimeStretchCurveMapping::T_TargetMin },
				{ "ETimeStretchCurveMapping::T_TargetMax", (int64)ETimeStretchCurveMapping::T_TargetMax },
				{ "ETimeStretchCurveMapping::MAX", (int64)ETimeStretchCurveMapping::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETimeStretchCurveMapping",
				"ETimeStretchCurveMapping",
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
class UScriptStruct* FTimeStretchCurveInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurveInstance, Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurveInstance"), sizeof(FTimeStretchCurveInstance), Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurveInstance>()
{
	return FTimeStretchCurveInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeStretchCurveInstance(FTimeStretchCurveInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("TimeStretchCurveInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeStretchCurveInstance")),new UScriptStruct::TCppStructOps<FTimeStretchCurveInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveInstance;
	struct Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasValidData_MetaData[];
#endif
		static void NewProp_bHasValidData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasValidData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurveInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_SetBit(void* Obj)
	{
		((FTimeStretchCurveInstance*)Obj)->bHasValidData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData = { "bHasValidData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTimeStretchCurveInstance), &Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurveInstance",
		sizeof(FTimeStretchCurveInstance),
		alignof(FTimeStretchCurveInstance),
		Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeStretchCurveInstance"), sizeof(FTimeStretchCurveInstance), Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Hash() { return 461229852U; }
class UScriptStruct* FTimeStretchCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurve, Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurve"), sizeof(FTimeStretchCurve), Get_Z_Construct_UScriptStruct_FTimeStretchCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurve>()
{
	return FTimeStretchCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeStretchCurve(FTimeStretchCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("TimeStretchCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeStretchCurve")),new UScriptStruct::TCppStructOps<FTimeStretchCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurve;
	struct Z_Construct_UScriptStruct_FTimeStretchCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sum_dT_i_by_C_i_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sum_dT_i_by_C_i;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Markers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValueMinPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValueMinPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SamplingRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "= Time Stretch Curve =\n\n= What is it?\n\n        The Time Stretch Curve is an optional float curve that montages can\n        use to define where a montage is allowed to speed up or slow down.\n        Let's say we have a montage of default play time T_Original.\n        We now want that montage to play for a different T_Target play time\n        Typically we would uniformly play rate the animation to reach that goal.\n\n        The Time Stretch Curve allows doing the same thing but non uniformly,\n        by defining which regions can be play rated more or less.\n\n        The Curve values are normalized.\n        So a Curve value of 0 means \"don't play rate this\".\n        And a Curve value of 1 means \"play rate this the most\".\n        Intermediate values will be weighted accordingly.\n\n        Imagine the following scenario, you have a character attacking with a staff.\n        The animation is authored with holds after striking.\n        Let's say the character levels up over the course of the game, and\n        his attacks are getting faster and faster (play time is shorter).\n\n        By using a Time Stretch Curve, most of the time compression could happen\n        during the holds. So the strikes look mostly unaffected.\n        This allows using a single animation, and scaling it for very different\n        desired play times.\n\n= How does it work?\n\n        Given a Montage of length T_Original, and a float curve C.\n        Curve C is sampled over N segments of fixed time 'SamplingTimeStep'.\n        Each element, C_i is normalized. 0 <= C_i <= 1\n        and 0 <= i <= N.\n\n        We have Sum(SamplingTimeStep) = T_Original = N * SamplingTimeStep\n        SamplingTimeStep = T_Original / N\n\n        Given a different length T_Target,\n        C remaps positions from T_Target to T_Original according to the following function:\n        dTO = dT_i * U * (1 + S * C_i)\n        where:\n        Sum(dTO) = T_Original\n        Sum(dT_i) = T_Target\n        U = UniformPlayRate\n        S = Curve Scale Factor\n        C_i = sampled curve value, constant over the interval dTO\n\n        dTO is fixed, based on the chosen 'SamplingTimeStep',\n        but in practice we can combine consecutive segments that have the same C_i value.\n\n        We would like U to be 1 (or -1) as much as possible.\n        Meaning the Curve should do all the remapping whenever possible.\n        U(niformPlayRate) should only come into play when C can't remap T_Target to T_Original on its own.\n        This can happen when trying to speed up the animation,\n        but the Curve is not enough to reach that time compression.\n        In that event, uniform scaling kicks in.\n\n        We call PR_i (or OverallPlayRate for Segment i)\n        PR_i = U * (1 + S * C_i)\n        dTO = dT_i * PR_i\n\n        We also want PR_i > 0, that is it should never backtrack or pause during playback of animation.\n        A Montage can still play in reverse with U < 0.\n\n= How is T_Target defined?\n\n        When we play a Montage with a PlayRate of PR, we assume this means:\n        T_Target = T_Original * PR\n        So this system does not change the interface for playing a montage.\n\n        If a curve is not defined, the mapping is defined as:\n        dTO_i = dT_i * U\n\n        If a a curve is defined:\n        dTO_i = dT_i * U * (1 + S * C_i)\n\n        We can see that no curve means S == 0.\n        Also if we're not scaling the montage, T_Target == T_Original, we also have S == 0.\n\n        So, this makes the curve completely optional. And it seamlessly integrates with the current montage interface.\n        If you want playback time to be half, that means playing the montage with a play rate of 2.\n        If there is a TimeStretchCurve, it will be used.\n        But regardless or using a curve or not, play back time is guaranteed.\n\n= Finding U and S =\n\n        Ideally, we could figure out what U and S are given a T_Target play time.\n        Unfortunately, the math for this is very complex.\n\n        We update the montage position like this:\n        dTO_i = dT_i * U * (1 + C_i)\n\n        We sum this over the N time segments:\n        Sum(dTO_i) = Sum(dT_i * U * (1 + C_i))\n        Sum(dTO_i) = Sum(dT_i) * U + Sum(dT_i * U * S * C_i))\n        T_Original = T_Target * U + U * S * Sum(dT_i * C_i)\n\n        Where:\n        S = (T_Original - T_Target * U) / (U * Sum(dT_i * C_i))\n\n        If we were able to get dT_i constant, we could pull it out and get:\n        S = (T_Original - T_Target * U) / (U * dT * Sum(C_i))\n        Where Sum(C_i) can be pre-computed.\n\n        Unfortunately we don't have dT_i constant, and we can't,\n        since it is variable, and dependent on what S and U are.\n\n        So our approach instead is to precompute lower and upper bounds for this curve.\n        We cache the results for dT_i for S = 100.f and S = -1.f + 0.01f\n        This gives us data for T_Target_Min and T_Target_Max.\n        Within these bounds, we can approximate dT_i, and also Sum(dT_i * C_i) by linear interpolation.\n        Outside of these bounds, we rely on U to get us to our desired T_Target play back time.\n\n        'ConditionallyUpdateTimeStretchCurveCachedData' takes care of figuring out U and S\n        based on a given T_Target play back time.\n\n= 'target' and 'original' space\n\n        At run time, we generate a set of markers in what we call 'target' and 'original' space.\n        'original' space means in the original play time the montage was authored in.\n        So that maps to actual frames of animation and actual position in the montage.\n\n        'target' space is the same set of markers, but mapped in play back time.\n        That is the actual time it takes to play back this montage.\n\n        Taking our play rate equation from above, it is:\n        dT_Original = dT_Target * U * (1 + S * C_i)\n\n        We see that montage position = playback time * play rate.\n\n        Once we have mapped our markers in both 'target' and 'original' space,\n        we can easily go from one to the other, since time moves linearly between markers.\n        Since between markers the play rate is defined as constant values:\n        PR_i = U * (1.f + S * C_i).\n        And we know that C_i is constant between two markers.\n\n        So if we know between which markers we are in one space, we can switch to the other space instantly,\n        as our relative position between these markers will be the same.\n\n        So by jumping between these spaces, we can quickly go from a montage position to its playback time.\n        We can increase the playback time by the current's frame deltatime,\n        and jump back to the corresponding frame of animation.\n        That's in a nutshell how this system works." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.ETimeStretchCurveMapping" },
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Cached Sum(dT_i * C_i)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i = { "Sum_dT_i_by_C_i", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Sum_dT_i_by_C_i, FTimeStretchCurve), STRUCT_OFFSET(FTimeStretchCurve, Sum_dT_i_by_C_i), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Optimized list of markers." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStretchCurve, Markers), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeStretchCurveMarker, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Minimum delta allowed between consecutive sampled segments.\nbelow this value, segments will be combined\nto optimize number of markers." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision = { "CurveValueMinPrecision", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStretchCurve, CurveValueMinPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Desired Sampling rate of above curve.\nThis will be rounded off so we sample the whole curve\nwith a fixed time step." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStretchCurve, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurve",
		sizeof(FTimeStretchCurve),
		alignof(FTimeStretchCurve),
		Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeStretchCurve"), sizeof(FTimeStretchCurve), Get_Z_Construct_UScriptStruct_FTimeStretchCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurve_Hash() { return 3431297081U; }
class UScriptStruct* FTimeStretchCurveMarker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurveMarker, Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurveMarker"), sizeof(FTimeStretchCurveMarker), Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurveMarker>()
{
	return FTimeStretchCurveMarker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeStretchCurveMarker(FTimeStretchCurveMarker::StaticStruct, TEXT("/Script/Engine"), TEXT("TimeStretchCurveMarker"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveMarker
{
	FScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveMarker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeStretchCurveMarker")),new UScriptStruct::TCppStructOps<FTimeStretchCurveMarker>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimeStretchCurveMarker;
	struct Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurveMarker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStretchCurveMarker, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.ETimeStretchCurveMapping" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Time, FTimeStretchCurveMarker), STRUCT_OFFSET(FTimeStretchCurveMarker, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurveMarker",
		sizeof(FTimeStretchCurveMarker),
		alignof(FTimeStretchCurveMarker),
		Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveMarker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeStretchCurveMarker"), sizeof(FTimeStretchCurveMarker), Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Hash() { return 3767784471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
