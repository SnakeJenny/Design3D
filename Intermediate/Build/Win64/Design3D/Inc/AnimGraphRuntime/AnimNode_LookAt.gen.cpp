// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_LookAt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookAt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
// End Cross Module References
	static UEnum* EInterpolationBlend_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EInterpolationBlend"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EInterpolationBlend::Type>()
	{
		return EInterpolationBlend_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpolationBlend(EInterpolationBlend_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EInterpolationBlend"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Hash() { return 3140583550U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpolationBlend"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterpolationBlend::Linear", (int64)EInterpolationBlend::Linear },
				{ "EInterpolationBlend::Cubic", (int64)EInterpolationBlend::Cubic },
				{ "EInterpolationBlend::Sinusoidal", (int64)EInterpolationBlend::Sinusoidal },
				{ "EInterpolationBlend::EaseInOutExponent2", (int64)EInterpolationBlend::EaseInOutExponent2 },
				{ "EInterpolationBlend::EaseInOutExponent3", (int64)EInterpolationBlend::EaseInOutExponent3 },
				{ "EInterpolationBlend::EaseInOutExponent4", (int64)EInterpolationBlend::EaseInOutExponent4 },
				{ "EInterpolationBlend::EaseInOutExponent5", (int64)EInterpolationBlend::EaseInOutExponent5 },
				{ "EInterpolationBlend::MAX", (int64)EInterpolationBlend::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
				{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EInterpolationBlend",
				"EInterpolationBlend::Type",
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
class UScriptStruct* FAnimNode_LookAt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LookAt"), sizeof(FAnimNode_LookAt), Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LookAt>()
{
	return FAnimNode_LookAt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LookAt(FAnimNode_LookAt::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LookAt"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LookAt")),new UScriptStruct::TCppStructOps<FAnimNode_LookAt>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt;
	struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLookUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLookAtAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLookAtAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookAtAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtBone;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTriggerThreashold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTriggerThreashold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAtClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLookUpAxis_MetaData[];
#endif
		static void NewProp_bUseLookUpAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookAt>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis = { "CustomLookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookUpAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look up axis in local space" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis = { "LookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookUpAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis = { "CustomLookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookAtAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look at axis, which axis to align to look at point" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis = { "LookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket = { "LookAtSocket", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtSocket_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone = { "LookAtBone", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold = { "InterpolationTriggerThreashold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTriggerThreashold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp = { "LookAtClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationType), Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Whether or not to use Look up axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit(void* Obj)
	{
		((FAnimNode_LookAt*)Obj)->bUseLookUpAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis = { "bUseLookUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LookAt), &Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, LookAtTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookAt, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LookAt",
		sizeof(FAnimNode_LookAt),
		alignof(FAnimNode_LookAt),
		Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LookAt"), sizeof(FAnimNode_LookAt), Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_Hash() { return 886437094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
