// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_BoneDrivenController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BoneDrivenController() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EDrivenDestinationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenDestinationMode"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenDestinationMode>()
	{
		return EDrivenDestinationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrivenDestinationMode(EDrivenDestinationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EDrivenDestinationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Hash() { return 502596397U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrivenDestinationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrivenDestinationMode::Bone", (int64)EDrivenDestinationMode::Bone },
				{ "EDrivenDestinationMode::MorphTarget", (int64)EDrivenDestinationMode::MorphTarget },
				{ "EDrivenDestinationMode::MaterialParameter", (int64)EDrivenDestinationMode::MaterialParameter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ToolTip", "Type of destination value to drive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EDrivenDestinationMode",
				"EDrivenDestinationMode",
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
	static UEnum* EDrivenBoneModificationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenBoneModificationMode"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenBoneModificationMode>()
	{
		return EDrivenBoneModificationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrivenBoneModificationMode(EDrivenBoneModificationMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EDrivenBoneModificationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Hash() { return 2148077615U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrivenBoneModificationMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrivenBoneModificationMode::AddToInput", (int64)EDrivenBoneModificationMode::AddToInput },
				{ "EDrivenBoneModificationMode::ReplaceComponent", (int64)EDrivenBoneModificationMode::ReplaceComponent },
				{ "EDrivenBoneModificationMode::AddToRefPose", (int64)EDrivenBoneModificationMode::AddToRefPose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddToInput.ToolTip", "Add the driven value to the input component value(s)" },
				{ "AddToRefPose.ToolTip", "Add the driven value to the reference pose value" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
				{ "ReplaceComponent.ToolTip", "Replace the input component value(s) with the driven value" },
				{ "ToolTip", "The type of modification to make to the destination component(s)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"EDrivenBoneModificationMode",
				"EDrivenBoneModificationMode",
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
class UScriptStruct* FAnimNode_BoneDrivenController::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BoneDrivenController"), sizeof(FAnimNode_BoneDrivenController), Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BoneDrivenController>()
{
	return FAnimNode_BoneDrivenController::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BoneDrivenController(FAnimNode_BoneDrivenController::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BoneDrivenController"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BoneDrivenController")),new UScriptStruct::TCppStructOps<FAnimNode_BoneDrivenController>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BoneDrivenController;
	struct Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleZ_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleY_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleX_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationZ_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationY_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationX_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationZ_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationY_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationX_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRange_MetaData[];
#endif
		static void NewProp_bUseRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModificationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModificationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DestinationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DestinationMode_Underlying;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrivingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BoneDrivenController>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ = { "bAffectTargetScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY = { "bAffectTargetScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX = { "bAffectTargetScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ = { "bAffectTargetRotationZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY = { "bAffectTargetRotationY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX = { "bAffectTargetRotationX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ = { "bAffectTargetTranslationZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY = { "bAffectTargetTranslationY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX = { "bAffectTargetTranslationX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData[] = {
		{ "Category", "Mapping" },
		{ "DisplayName", "Remap Source" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Whether or not to clamp the driver value and remap it before scaling it" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bUseRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange = { "bUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Transform component to use as input" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceComponent), Z_Construct_UEnum_Engine_EComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "The type of modification to make to the destination component(s)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode = { "ModificationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ModificationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Type of destination to drive, currently either bone or morph target" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode = { "DestinationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DestinationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetComponent_DEPRECATED), Z_Construct_UEnum_Engine_EComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Bone to drive using controller input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Name of Morph Target to drive using the source attribute" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "DisplayName", "Mapped Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax = { "RemappedMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "DisplayName", "Mapped Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin = { "RemappedMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "DisplayName", "Source Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "DisplayName", "Source Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Multiplier to apply to the input value (Note: Ignored when a curve is used)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve = { "DrivingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DrivingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Bone to use as controller input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_Underlying,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_BoneDrivenController",
		sizeof(FAnimNode_BoneDrivenController),
		alignof(FAnimNode_BoneDrivenController),
		Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BoneDrivenController"), sizeof(FAnimNode_BoneDrivenController), Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Hash() { return 1509086786U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
