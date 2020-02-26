// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BlendSpaceBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFilterInterpolationType();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
// End Cross Module References
	static UEnum* ENotifyTriggerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyTriggerMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyTriggerMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENotifyTriggerMode::Type>()
	{
		return ENotifyTriggerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENotifyTriggerMode(ENotifyTriggerMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENotifyTriggerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENotifyTriggerMode_Hash() { return 1492506635U; }
	UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENotifyTriggerMode"), 0, Get_Z_Construct_UEnum_Engine_ENotifyTriggerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENotifyTriggerMode::AllAnimations", (int64)ENotifyTriggerMode::AllAnimations },
				{ "ENotifyTriggerMode::HighestWeightedAnimation", (int64)ENotifyTriggerMode::HighestWeightedAnimation },
				{ "ENotifyTriggerMode::None", (int64)ENotifyTriggerMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllAnimations.DisplayName", "All Animations" },
				{ "HighestWeightedAnimation.DisplayName", "Highest Weighted Animation" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENotifyTriggerMode",
				"ENotifyTriggerMode::Type",
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
	static UEnum* EBlendSpaceAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpaceAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EBlendSpaceAxis"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlendSpaceAxis>()
	{
		return EBlendSpaceAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlendSpaceAxis(EBlendSpaceAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlendSpaceAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlendSpaceAxis_Hash() { return 2649979764U; }
	UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlendSpaceAxis"), 0, Get_Z_Construct_UEnum_Engine_EBlendSpaceAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BSA_None", (int64)BSA_None },
				{ "BSA_X", (int64)BSA_X },
				{ "BSA_Y", (int64)BSA_Y },
				{ "BSA_Max", (int64)BSA_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BSA_None.DisplayName", "None" },
				{ "BSA_X.DisplayName", "Horizontal (X) Axis" },
				{ "BSA_Y.DisplayName", "Vertical (Y) Axis" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
				{ "ToolTip", "Interpolation data types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlendSpaceAxis",
				"EBlendSpaceAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPerBoneInterpolation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneInterpolation, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneInterpolation"), sizeof(FPerBoneInterpolation), Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneInterpolation>()
{
	return FPerBoneInterpolation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneInterpolation(FPerBoneInterpolation::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneInterpolation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneInterpolation")),new UScriptStruct::TCppStructOps<FPerBoneInterpolation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation;
	struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeedPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeedPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneInterpolation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec = { "InterpolationSpeedPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerBoneInterpolation, InterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerBoneInterpolation, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneInterpolation",
		sizeof(FPerBoneInterpolation),
		alignof(FPerBoneInterpolation),
		Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneInterpolation"), sizeof(FPerBoneInterpolation), Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_Hash() { return 2120029956U; }
class UScriptStruct* FGridBlendSample::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridBlendSample, Z_Construct_UPackage__Script_Engine(), TEXT("GridBlendSample"), sizeof(FGridBlendSample), Get_Z_Construct_UScriptStruct_FGridBlendSample_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGridBlendSample>()
{
	return FGridBlendSample::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridBlendSample(FGridBlendSample::StaticStruct, TEXT("/Script/Engine"), TEXT("GridBlendSample"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGridBlendSample
{
	FScriptStruct_Engine_StaticRegisterNativesFGridBlendSample()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GridBlendSample")),new UScriptStruct::TCppStructOps<FGridBlendSample>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGridBlendSample;
	struct Z_Construct_UScriptStruct_FGridBlendSample_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "result of how much weight of the grid element *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridBlendSample>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridBlendSample, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement = { "GridElement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridBlendSample, GridElement), Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GridBlendSample",
		sizeof(FGridBlendSample),
		alignof(FGridBlendSample),
		Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridBlendSample"), sizeof(FGridBlendSample), Get_Z_Construct_UScriptStruct_FGridBlendSample_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_Hash() { return 2365503552U; }
class UScriptStruct* FEditorElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorElement, Z_Construct_UPackage__Script_Engine(), TEXT("EditorElement"), sizeof(FEditorElement), Get_Z_Construct_UScriptStruct_FEditorElement_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorElement>()
{
	return FEditorElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorElement(FEditorElement::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorElement
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorElement")),new UScriptStruct::TCppStructOps<FEditorElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorElement;
	struct Z_Construct_UScriptStruct_FEditorElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Each elements in the grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Weights, FEditorElement), STRUCT_OFFSET(FEditorElement, Weights), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Indices, FEditorElement), STRUCT_OFFSET(FEditorElement, Indices), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorElement",
		sizeof(FEditorElement),
		alignof(FEditorElement),
		Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorElement"), sizeof(FEditorElement), Get_Z_Construct_UScriptStruct_FEditorElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorElement_Hash() { return 2716356003U; }
class UScriptStruct* FBlendSample::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendSample_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSample, Z_Construct_UPackage__Script_Engine(), TEXT("BlendSample"), sizeof(FBlendSample), Get_Z_Construct_UScriptStruct_FBlendSample_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSample>()
{
	return FBlendSample::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendSample(FBlendSample::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendSample"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendSample
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendSample()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendSample")),new UScriptStruct::TCppStructOps<FBlendSample>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendSample;
	struct Z_Construct_UScriptStruct_FBlendSample_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGrid_MetaData[];
#endif
		static void NewProp_bSnapToGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGrid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Sample data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSample>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FBlendSample*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlendSample), &Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_SetBit(void* Obj)
	{
		((FBlendSample*)Obj)->bSnapToGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid = { "bSnapToGrid", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlendSample), &Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ClampMax", "64.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSample, RateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "blend 0->x, blend 1->y, blend 2->z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue = { "SampleValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSample, SampleValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSample, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSample",
		sizeof(FBlendSample),
		alignof(FBlendSample),
		Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSample()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendSample_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendSample"), sizeof(FBlendSample), Get_Z_Construct_UScriptStruct_FBlendSample_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendSample_Hash() { return 2944639323U; }
class UScriptStruct* FBlendParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendParameter, Z_Construct_UPackage__Script_Engine(), TEXT("BlendParameter"), sizeof(FBlendParameter), Get_Z_Construct_UScriptStruct_FBlendParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendParameter>()
{
	return FBlendParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendParameter(FBlendParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendParameter")),new UScriptStruct::TCppStructOps<FBlendParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendParameter;
	struct Z_Construct_UScriptStruct_FBlendParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Grid Divisions" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "The number of grid divisions for this parameter (axis)." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum = { "GridNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendParameter, GridNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Maximum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Max value for this parameter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendParameter, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Minimum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Min value for this parameter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendParameter, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendParameter, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendParameter",
		sizeof(FBlendParameter),
		alignof(FBlendParameter),
		Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendParameter"), sizeof(FBlendParameter), Get_Z_Construct_UScriptStruct_FBlendParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_Hash() { return 147946905U; }
class UScriptStruct* FInterpolationParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpolationParameter, Z_Construct_UPackage__Script_Engine(), TEXT("InterpolationParameter"), sizeof(FInterpolationParameter), Get_Z_Construct_UScriptStruct_FInterpolationParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpolationParameter>()
{
	return FInterpolationParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpolationParameter(FInterpolationParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpolationParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpolationParameter")),new UScriptStruct::TCppStructOps<FInterpolationParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter;
	struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpolationParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Type of interpolation used for filtering the input value to decide how to get to target." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpolationParameter, InterpolationType), Z_Construct_UEnum_Engine_EFilterInterpolationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Interpolation Time for input, when it gets input, it will use this time to interpolate to target, used for smoother interpolation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpolationParameter, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpolationParameter",
		sizeof(FInterpolationParameter),
		alignof(FInterpolationParameter),
		Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpolationParameter"), sizeof(FInterpolationParameter), Get_Z_Construct_UScriptStruct_FInterpolationParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_Hash() { return 2437468499U; }
	void UBlendSpaceBase::StaticRegisterNativesUBlendSpaceBase()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister()
	{
		return UBlendSpaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSamples_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampleData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleIndexWithMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleIndexWithMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneBlend_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyTriggerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetWeightInterpolationSpeedPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpolationParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLength;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationBlendInMeshSpace_MetaData[];
#endif
		static void NewProp_bRotationBlendInMeshSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationBlendInMeshSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/BlendSpaceBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData[] = {
		{ "Category", "BlendParametersTest" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Blend Parameters for each axis. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BlendParameters, UBlendSpaceBase), STRUCT_OFFSET(UBlendSpaceBase, BlendParameters), Z_Construct_UScriptStruct_FBlendParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Grid samples, indexing scheme imposed by subclass *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples = { "GridSamples", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, GridSamples), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_Inner = { "GridSamples", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData[] = {
		{ "Category", "BlendSamples" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Sample animation data *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData = { "SampleData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, SampleData), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_Inner = { "SampleData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlendSample, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Track index to get marker data from. Samples are tested for the suitability of marker based sync\n          during load and if we can use marker based sync we cache an index to a representative sample here" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers = { "SampleIndexWithMarkers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, SampleIndexWithMarkers), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData[] = {
		{ "Category", "SampleInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Define target weight interpolation per bone. This will blend in different speed per each bone setting" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend = { "PerBoneBlend", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, PerBoneBlend), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_Inner = { "PerBoneBlend", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerBoneInterpolation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData[] = {
		{ "Category", "AnimationNotifies" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "The current mode used by the blendspace to decide which animation notifies to fire. Valid options are:\n      - AllAnimations - All notify events will fire\n      - HighestWeightedAnimation - Notify events will only fire from the highest weighted animation\n      - None - No notify events will fire from any animations" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode = { "NotifyTriggerMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, NotifyTriggerMode), Z_Construct_UEnum_Engine_ENotifyTriggerMode, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "SampleInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Target weight interpolation. When target samples are set, how fast you'd like to get to target. Improve target blending.\ni.e. for locomotion, if you interpolate input, when you move from left to right rapidly, you'll interpolate through forward, but if you use target weight interpolation,\nyou'll skip forward, but interpolate between left to right" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec = { "TargetWeightInterpolationSpeedPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, TargetWeightInterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Input interpolation parameter for all 3 axis, for each axis input, decide how you'd like to interpolate input to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam = { "InterpolationParam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InterpolationParam, UBlendSpaceBase), STRUCT_OFFSET(UBlendSpaceBase, InterpolationParam), Z_Construct_UScriptStruct_FInterpolationParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "This animation length changes based on current input (resulting in different blend time)*" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength = { "AnimLength", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, AnimLength), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpaceBase, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "When you use blend per bone, allows rotation to blend in mesh space. This only works if this does not contain additive animation samples\nThis is more performance intensive" },
	};
#endif
	void Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_SetBit(void* Obj)
	{
		((UBlendSpaceBase*)Obj)->bRotationBlendInMeshSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace = { "bRotationBlendInMeshSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlendSpaceBase), &Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceBase_Statics::ClassParams = {
		&UBlendSpaceBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendSpaceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendSpaceBase, 3638760581);
	template<> ENGINE_API UClass* StaticClass<UBlendSpaceBase>()
	{
		return UBlendSpaceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpaceBase(Z_Construct_UClass_UBlendSpaceBase, &UBlendSpaceBase::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpaceBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
