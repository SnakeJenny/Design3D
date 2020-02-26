// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/InputScaleBias.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputScaleBias() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
// End Cross Module References
	static UEnum* EAnimAlphaInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAlphaInputType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimAlphaInputType>()
	{
		return EAnimAlphaInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimAlphaInputType(EAnimAlphaInputType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimAlphaInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimAlphaInputType_Hash() { return 4028156481U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimAlphaInputType"), 0, Get_Z_Construct_UEnum_Engine_EAnimAlphaInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimAlphaInputType::Float", (int64)EAnimAlphaInputType::Float },
				{ "EAnimAlphaInputType::Bool", (int64)EAnimAlphaInputType::Bool },
				{ "EAnimAlphaInputType::Curve", (int64)EAnimAlphaInputType::Curve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.DisplayName", "Bool Value" },
				{ "Curve.DisplayName", "Anim Curve Value" },
				{ "Float.DisplayName", "Float Value" },
				{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
				{ "ToolTip", "AnimNodes using an Alpha can choose how it is driven." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAnimAlphaInputType",
				"EAnimAlphaInputType",
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
class UScriptStruct* FInputAlphaBoolBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAlphaBoolBlend, Z_Construct_UPackage__Script_Engine(), TEXT("InputAlphaBoolBlend"), sizeof(FInputAlphaBoolBlend), Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAlphaBoolBlend>()
{
	return FInputAlphaBoolBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAlphaBoolBlend(FInputAlphaBoolBlend::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAlphaBoolBlend"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAlphaBoolBlend")),new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend;
	struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, AlphaBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FInputAlphaBoolBlend*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputAlphaBoolBlend), &Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAlphaBoolBlend",
		sizeof(FInputAlphaBoolBlend),
		alignof(FInputAlphaBoolBlend),
		Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAlphaBoolBlend"), sizeof(FInputAlphaBoolBlend), Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Hash() { return 2651455836U; }
class UScriptStruct* FInputScaleBiasClamp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClamp, Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClamp"), sizeof(FInputScaleBiasClamp), Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClamp>()
{
	return FInputScaleBiasClamp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputScaleBiasClamp(FInputScaleBiasClamp::StaticStruct, TEXT("/Script/Engine"), TEXT("InputScaleBiasClamp"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp
{
	FScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputScaleBiasClamp")),new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp;
	struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bInterpResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bClampResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bMapRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBiasClamp",
		sizeof(FInputScaleBiasClamp),
		alignof(FInputScaleBiasClamp),
		Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputScaleBiasClamp"), sizeof(FInputScaleBiasClamp), Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_Hash() { return 3531805520U; }
class UScriptStruct* FInputRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputRange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRange, Z_Construct_UPackage__Script_Engine(), TEXT("InputRange"), sizeof(FInputRange), Get_Z_Construct_UScriptStruct_FInputRange_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputRange>()
{
	return FInputRange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputRange(FInputRange::StaticStruct, TEXT("/Script/Engine"), TEXT("InputRange"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputRange
{
	FScriptStruct_Engine_StaticRegisterNativesFInputRange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputRange")),new UScriptStruct::TCppStructOps<FInputRange>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputRange;
	struct Z_Construct_UScriptStruct_FInputRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputRange",
		sizeof(FInputRange),
		alignof(FInputRange),
		Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputRange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputRange"), sizeof(FInputRange), Get_Z_Construct_UScriptStruct_FInputRange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputRange_Hash() { return 2278723195U; }
class UScriptStruct* FInputScaleBias::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias, Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBias>()
{
	return FInputScaleBias::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputScaleBias(FInputScaleBias::StaticStruct, TEXT("/Script/Engine"), TEXT("InputScaleBias"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias
{
	FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputScaleBias")),new UScriptStruct::TCppStructOps<FInputScaleBias>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputScaleBias;
	struct Z_Construct_UScriptStruct_FInputScaleBias_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input scaling struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBias>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBias, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputScaleBias, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBias",
		sizeof(FInputScaleBias),
		alignof(FInputScaleBias),
		Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_Hash() { return 3670738014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
