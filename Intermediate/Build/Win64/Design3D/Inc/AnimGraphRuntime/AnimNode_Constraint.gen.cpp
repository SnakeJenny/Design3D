// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_Constraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Constraint() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
// End Cross Module References
	static UEnum* EConstraintOffsetOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EConstraintOffsetOption"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EConstraintOffsetOption>()
	{
		return EConstraintOffsetOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintOffsetOption(EConstraintOffsetOption_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EConstraintOffsetOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Hash() { return 517162197U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintOffsetOption"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintOffsetOption::None", (int64)EConstraintOffsetOption::None },
				{ "EConstraintOffsetOption::Offset_RefPose", (int64)EConstraintOffsetOption::Offset_RefPose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "Offset_RefPose.ToolTip", "no offset" },
				{ "ToolTip", "Enum value to describe how you'd like to maintain offset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EConstraintOffsetOption",
				"EConstraintOffsetOption",
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
class UScriptStruct* FAnimNode_Constraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Constraint, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Constraint"), sizeof(FAnimNode_Constraint), Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Constraint>()
{
	return FAnimNode_Constraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Constraint(FAnimNode_Constraint::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Constraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Constraint")),new UScriptStruct::TCppStructOps<FAnimNode_Constraint>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint;
	struct Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintWeights;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Constraint node to parent or world transform for rotation/translation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Constraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Weight data - post edit syncs up to ConstraintSetups" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights = { "ConstraintWeights", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_Inner = { "ConstraintWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "Category", "Constraints" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "List of constraints" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintSetup), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_Inner = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstraint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Constraint, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_Constraint",
		sizeof(FAnimNode_Constraint),
		alignof(FAnimNode_Constraint),
		Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Constraint"), sizeof(FAnimNode_Constraint), Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_Hash() { return 606518410U; }
class UScriptStruct* FConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraint, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("Constraint"), sizeof(FConstraint), Get_Z_Construct_UScriptStruct_FConstraint_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FConstraint>()
{
	return FConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraint(FConstraint::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("Constraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Constraint")),new UScriptStruct::TCppStructOps<FConstraint>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint;
	struct Z_Construct_UScriptStruct_FConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Constraint Set up" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Per axis filter options - applied in their local space not in world space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis = { "PerAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraint, PerAxis), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "What transform type is constraint to - Translation, Rotation, Scale OR Parent. Parent overrides all component" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraint, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Maintain offset based on refpose or not.\n\nNone - no offset\nOffset_RefPose - offset is created based on reference pose\n\nIn the future, we'd like to support custom offset, not just based on ref pose" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption = { "OffsetOption", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraint, OffsetOption), Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Target Bone this is constraint to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraint, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"Constraint",
		sizeof(FConstraint),
		alignof(FConstraint),
		Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Constraint"), sizeof(FConstraint), Get_Z_Construct_UScriptStruct_FConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraint_Hash() { return 1719782999U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
