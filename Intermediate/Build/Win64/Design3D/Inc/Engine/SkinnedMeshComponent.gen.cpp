// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EBoneSpaces_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneSpaces, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneSpaces"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneSpaces::Type>()
	{
		return EBoneSpaces_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneSpaces(EBoneSpaces_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneSpaces"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneSpaces_Hash() { return 20978799U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneSpaces()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneSpaces"), 0, Get_Z_Construct_UEnum_Engine_EBoneSpaces_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneSpaces::WorldSpace", (int64)EBoneSpaces::WorldSpace },
				{ "EBoneSpaces::ComponentSpace", (int64)EBoneSpaces::ComponentSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ComponentSpace.DisplayName", "Component Space" },
				{ "ComponentSpace.ToolTip", "Set position of bone in components reference frame." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "Values for specifying bone space." },
				{ "WorldSpace.DisplayName", "World Space" },
				{ "WorldSpace.ToolTip", "Set absolute position of bone in world space." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneSpaces",
				"EBoneSpaces::Type",
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
	static UEnum* EVisibilityBasedAnimTickOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityBasedAnimTickOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>()
	{
		return EVisibilityBasedAnimTickOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityBasedAnimTickOption(EVisibilityBasedAnimTickOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityBasedAnimTickOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Hash() { return 613216541U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityBasedAnimTickOption"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones },
				{ "EVisibilityBasedAnimTickOption::AlwaysTickPose", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPose },
				{ "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered },
				{ "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysTickPose.ToolTip", "Always Tick, but Refresh BoneTransforms only when rendered." },
				{ "AlwaysTickPoseAndRefreshBones.ToolTip", "Always Tick and Refresh BoneTransforms whether rendered or not." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "OnlyTickMontagesWhenNotRendered.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages and skip everything else.\n(AnimBP graph will not be updated)." },
				{ "OnlyTickPoseWhenRendered.ToolTip", "Tick only when rendered, and it will only RefreshBoneTransforms when rendered." },
				{ "ToolTip", "Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVisibilityBasedAnimTickOption",
				"EVisibilityBasedAnimTickOption",
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
	static UEnum* EPhysBodyOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysBodyOp, Z_Construct_UPackage__Script_Engine(), TEXT("EPhysBodyOp"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPhysBodyOp>()
	{
		return EPhysBodyOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysBodyOp(EPhysBodyOp_StaticEnum, TEXT("/Script/Engine"), TEXT("EPhysBodyOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPhysBodyOp_Hash() { return 3863391538U; }
	UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysBodyOp"), 0, Get_Z_Construct_UEnum_Engine_EPhysBodyOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PBO_None", (int64)PBO_None },
				{ "PBO_Term", (int64)PBO_Term },
				{ "PBO_MAX", (int64)PBO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "PBO_None.ToolTip", "Don't do anything." },
				{ "PBO_Term.ToolTip", "Terminate - if you terminate, you won't be able to re-init when unhidden." },
				{ "ToolTip", "PhysicsBody options when bone is hidden" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPhysBodyOp",
				"EPhysBodyOp",
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
	static UEnum* EBoneVisibilityStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneVisibilityStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneVisibilityStatus"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneVisibilityStatus>()
	{
		return EBoneVisibilityStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneVisibilityStatus(EBoneVisibilityStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneVisibilityStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Hash() { return 2566978929U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneVisibilityStatus"), 0, Get_Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BVS_HiddenByParent", (int64)BVS_HiddenByParent },
				{ "BVS_Visible", (int64)BVS_Visible },
				{ "BVS_ExplicitlyHidden", (int64)BVS_ExplicitlyHidden },
				{ "BVS_MAX", (int64)BVS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BVS_ExplicitlyHidden.ToolTip", "Bone is hidden directly." },
				{ "BVS_HiddenByParent.ToolTip", "Bone is hidden because it's parent is hidden." },
				{ "BVS_Visible.ToolTip", "Bone is visible." },
				{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
				{ "ToolTip", "The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneVisibilityStatus",
				"EBoneVisibilityStatus",
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
class UScriptStruct* FSkelMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshComponentLODInfo>()
{
	return FSkelMeshComponentLODInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshComponentLODInfo(FSkelMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshComponentLODInfo")),new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshComponentLODInfo;
	struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenMaterials;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HiddenMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD specific setup for the skeletal mesh component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Material corresponds to section. To show/hide each section, use this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkelMeshComponentLODInfo, HiddenMaterials), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshComponentLODInfo",
		sizeof(FSkelMeshComponentLODInfo),
		alignof(FSkelMeshComponentLODInfo),
		Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshComponentLODInfo"), sizeof(FSkelMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Hash() { return 2408345858U; }
class UScriptStruct* FSkelMeshSkinWeightInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshSkinWeightInfo>()
{
	return FSkelMeshSkinWeightInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshSkinWeightInfo(FSkelMeshSkinWeightInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkelMeshSkinWeightInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshSkinWeightInfo")),new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkelMeshSkinWeightInfo;
	struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "Engine.KismetRenderingLibrary.BreakSkinWeightInfo" },
		{ "HasNativeMake", "Engine.KismetRenderingLibrary.MakeSkinWeightInfo" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Vertex skin weight info supplied for a component override." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Influence of each bone on this vertex" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Weights, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Weights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Index of bones that influence this vertex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Bones, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Bones), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshSkinWeightInfo",
		sizeof(FSkelMeshSkinWeightInfo),
		alignof(FSkelMeshSkinWeightInfo),
		Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshSkinWeightInfo"), sizeof(FSkelMeshSkinWeightInfo), Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Hash() { return 1895994641U; }
	void USkinnedMeshComponent::StaticRegisterNativesUSkinnedMeshComponent()
	{
		UClass* Class = USkinnedMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneIsChildOf", &USkinnedMeshComponent::execBoneIsChildOf },
			{ "ClearSkinWeightOverride", &USkinnedMeshComponent::execClearSkinWeightOverride },
			{ "ClearVertexColorOverride", &USkinnedMeshComponent::execClearVertexColorOverride },
			{ "FindClosestBone_K2", &USkinnedMeshComponent::execFindClosestBone_K2 },
			{ "GetBoneIndex", &USkinnedMeshComponent::execGetBoneIndex },
			{ "GetBoneName", &USkinnedMeshComponent::execGetBoneName },
			{ "GetDeltaTransformFromRefPose", &USkinnedMeshComponent::execGetDeltaTransformFromRefPose },
			{ "GetNumBones", &USkinnedMeshComponent::execGetNumBones },
			{ "GetNumLODs", &USkinnedMeshComponent::execGetNumLODs },
			{ "GetParentBone", &USkinnedMeshComponent::execGetParentBone },
			{ "GetRefPosePosition", &USkinnedMeshComponent::execGetRefPosePosition },
			{ "GetSocketBoneName", &USkinnedMeshComponent::execGetSocketBoneName },
			{ "HideBoneByName", &USkinnedMeshComponent::execHideBoneByName },
			{ "IsBoneHiddenByName", &USkinnedMeshComponent::execIsBoneHiddenByName },
			{ "IsMaterialSectionShown", &USkinnedMeshComponent::execIsMaterialSectionShown },
			{ "SetCapsuleIndirectShadowMinVisibility", &USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility },
			{ "SetCastCapsuleDirectShadow", &USkinnedMeshComponent::execSetCastCapsuleDirectShadow },
			{ "SetCastCapsuleIndirectShadow", &USkinnedMeshComponent::execSetCastCapsuleIndirectShadow },
			{ "SetForcedLOD", &USkinnedMeshComponent::execSetForcedLOD },
			{ "SetMasterPoseComponent", &USkinnedMeshComponent::execSetMasterPoseComponent },
			{ "SetMinLOD", &USkinnedMeshComponent::execSetMinLOD },
			{ "SetPhysicsAsset", &USkinnedMeshComponent::execSetPhysicsAsset },
			{ "SetRenderStatic", &USkinnedMeshComponent::execSetRenderStatic },
			{ "SetSkeletalMesh", &USkinnedMeshComponent::execSetSkeletalMesh },
			{ "SetSkinWeightOverride", &USkinnedMeshComponent::execSetSkinWeightOverride },
			{ "SetVertexColorOverride_LinearColor", &USkinnedMeshComponent::execSetVertexColorOverride_LinearColor },
			{ "ShowAllMaterialSections", &USkinnedMeshComponent::execShowAllMaterialSections },
			{ "ShowMaterialSection", &USkinnedMeshComponent::execShowMaterialSection },
			{ "TransformFromBoneSpace", &USkinnedMeshComponent::execTransformFromBoneSpace },
			{ "TransformToBoneSpace", &USkinnedMeshComponent::execTransformToBoneSpace },
			{ "UnHideBoneByName", &USkinnedMeshComponent::execUnHideBoneByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics
	{
		struct SkinnedMeshComponent_eventBoneIsChildOf_Parms
		{
			FName BoneName;
			FName ParentBoneName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventBoneIsChildOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Tests if BoneName is child of (or equal to) ParentBoneName.\n\n@param BoneName Name of the bone\n@param ParentBone Name to check\n\n@return true if child (strictly, not same). false otherwise\nNote - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "BoneIsChildOf", sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearSkinWeightOverride_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied skin weight override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightOverride", sizeof(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearVertexColorOverride_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearVertexColorOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied vertex color override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearVertexColorOverride", sizeof(SkinnedMeshComponent_eventClearVertexColorOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics
	{
		struct SkinnedMeshComponent_eventFindClosestBone_K2_Parms
		{
			FVector TestLocation;
			FVector BoneLocation;
			float IgnoreScale;
			bool bRequirePhysicsAsset;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static void NewProp_bRequirePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequirePhysicsAsset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventFindClosestBone_K2_Parms*)Obj)->bRequirePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset = { "bRequirePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale = { "IgnoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, IgnoreScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bRequirePhysicsAsset" },
		{ "Category", "Components|SkinnedMesh" },
		{ "CPP_Default_bRequirePhysicsAsset", "false" },
		{ "CPP_Default_IgnoreScale", "0.000000" },
		{ "DisplayName", "FindClosestBone" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "finds the closest bone to the given location\n\n@param TestLocation the location to test against\n@param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n@param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n@param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\n@return the name of the bone that was found, or 'None' if no bone was found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "FindClosestBone_K2", sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneIndex_Parms
		{
			FName BoneName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\n@param BoneName Name of bone to look up\n\n@return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\n@see USkeletalMesh::GetBoneIndex." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneIndex", sizeof(SkinnedMeshComponent_eventGetBoneIndex_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneName_Parms
		{
			int32 BoneIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Bone Name from index\n@param BoneIndex Index of the bone\n\n@return the name of the bone at the specified index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneName", sizeof(SkinnedMeshComponent_eventGetBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics
	{
		struct SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms
		{
			FName BoneName;
			FName BaseName;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BaseName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "CPP_Default_BaseName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get delta transform from reference pose based on BaseNode.\nThis uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\n@param BoneName Name of the bone\n@param BaseName Name of the base bone - if none, it will use parent as a base\n\n@return the delta transform from refpose in that given space (BaseName)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetDeltaTransformFromRefPose", sizeof(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics
	{
		struct SkinnedMeshComponent_eventGetNumBones_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumBones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns the number of bones in the skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumBones", sizeof(SkinnedMeshComponent_eventGetNumBones_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics
	{
		struct SkinnedMeshComponent_eventGetNumLODs_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the number of LODs on this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumLODs", sizeof(SkinnedMeshComponent_eventGetNumLODs_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics
	{
		struct SkinnedMeshComponent_eventGetParentBone_Parms
		{
			FName BoneName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Parent Bone of the input bone\n\n@param BoneName Name of the bone\n\n@return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetParentBone", sizeof(SkinnedMeshComponent_eventGetParentBone_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics
	{
		struct SkinnedMeshComponent_eventGetRefPosePosition_Parms
		{
			int32 BoneIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space position of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPosePosition", sizeof(SkinnedMeshComponent_eventGetRefPosePosition_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetSocketBoneName_Parms
		{
			FName InSocketName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns bone name linked to a given named socket on the skeletal mesh component.\nIf you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\n@param       bone name or socket name\n\n@return      bone name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSocketBoneName", sizeof(SkinnedMeshComponent_eventGetSocketBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventHideBoneByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EPhysBodyOp> PhysBodyOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysBodyOption;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption = { "PhysBodyOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, PhysBodyOption), Z_Construct_UEnum_Engine_EPhysBodyOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\n@param  BoneName            Name of bone to hide\n@param  PhysBodyOption          Option for physics bodies that attach to the bones to be hidden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "HideBoneByName", sizeof(SkinnedMeshComponent_eventHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics
	{
		struct SkinnedMeshComponent_eventIsBoneHiddenByName_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsBoneHiddenByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Determines if the specified bone is hidden.\n\n@param  BoneName            Name of bone to check\n\n@return true if hidden" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsBoneHiddenByName", sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics
	{
		struct SkinnedMeshComponent_eventIsMaterialSectionShown_Parms
		{
			int32 MaterialID;
			int32 LODIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsMaterialSectionShown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsMaterialSectionShown", sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics
	{
		struct SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCapsuleIndirectShadowMinVisibility", sizeof(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleDirectShadow", sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleIndirectShadow", sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetForcedLOD_Parms
		{
			int32 InNewForcedLOD;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewForcedLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD = { "InNewForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetForcedLOD_Parms, InNewForcedLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewForcedLOD  Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetForcedLOD", sizeof(SkinnedMeshComponent_eventSetForcedLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics
	{
		struct SkinnedMeshComponent_eventSetMasterPoseComponent_Parms
		{
			USkinnedMeshComponent* NewMasterBoneComponent;
			bool bForceUpdate;
		};
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMasterBoneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMasterBoneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetMasterPoseComponent_Parms*)Obj)->bForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent = { "NewMasterBoneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms, NewMasterBoneComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_bForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::NewProp_NewMasterBoneComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MasterPoseComponent for this component\n\n@param NewMasterBoneComponent New MasterPoseComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMasterPoseComponent", sizeof(SkinnedMeshComponent_eventSetMasterPoseComponent_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetMinLOD_Parms
		{
			int32 InNewMinLOD;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD = { "InNewMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewMinLOD     Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMinLOD", sizeof(SkinnedMeshComponent_eventSetMinLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics
	{
		struct SkinnedMeshComponent_eventSetPhysicsAsset_Parms
		{
			UPhysicsAsset* NewPhysicsAsset;
			bool bForceReInit;
		};
		static void NewProp_bForceReInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReInit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetPhysicsAsset_Parms*)Obj)->bForceReInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit = { "bForceReInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset = { "NewPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPhysicsAsset_Parms, NewPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "CPP_Default_bForceReInit", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\n@param       NewPhysicsAsset New PhysicsAsset\n@param       bForceReInit    Force reinitialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPhysicsAsset", sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics
	{
		struct SkinnedMeshComponent_eventSetRenderStatic_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetRenderStatic_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\n@param       whether this skinned mesh should be rendered as static" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetRenderStatic", sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics
	{
		struct SkinnedMeshComponent_eventSetSkeletalMesh_Parms
		{
			USkeletalMesh* NewMesh;
			bool bReinitPose;
		};
		static void NewProp_bReinitPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReinitPose;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetSkeletalMesh_Parms*)Obj)->bReinitPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose = { "bReinitPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkeletalMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_bReinitPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "CPP_Default_bReinitPose", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the SkeletalMesh that is rendered for this Component. Will re-initialize the animation tree etc.\n\n@param NewMesh New mesh to set for this component\n@param bReinitPose Whether we should keep current pose or reinitialize." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkeletalMesh", sizeof(SkinnedMeshComponent_eventSetSkeletalMesh_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinWeightOverride_Parms
		{
			int32 LODIndex;
			TArray<FSkelMeshSkinWeightInfo> SkinWeights;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinWeights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinWeights_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights = { "SkinWeights", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, SkinWeights), METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner = { "SkinWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of skin weights on a per-component basis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightOverride", sizeof(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics
	{
		struct SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms
		{
			int32 LODIndex;
			TArray<FLinearColor> VertexColors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, VertexColors), METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "DisplayName", "Set Vertex Color Override" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexColorOverride_LinearColor", sizeof(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics
	{
		struct SkinnedMeshComponent_eventShowAllMaterialSections_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowAllMaterialSections_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any material visibility modifications made by ShowMaterialSection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowAllMaterialSections", sizeof(SkinnedMeshComponent_eventShowAllMaterialSections_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics
	{
		struct SkinnedMeshComponent_eventShowMaterialSection_Parms
		{
			int32 MaterialID;
			bool bShow;
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventShowMaterialSection_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\n@param MaterialID - Index of the material show/hide\n@param bShow - True to show the material, false to hide it\n@param LODIndex - Index of the LOD to modify material visibility within" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowMaterialSection", sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformFromBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation in bone relative space to world space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformFromBoneSpace", sizeof(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformToBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation from world space to bone relative space.\nThis is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformToBoneSpace", sizeof(SkinnedMeshComponent_eventTransformToBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventUnHideBoneByName_Parms
		{
			FName BoneName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventUnHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompoared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n@param  BoneName            Name of bone to unhide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnHideBoneByName", sizeof(SkinnedMeshComponent_eventUnHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMeshObjectUpdate_MetaData[];
#endif
		static void NewProp_bForceMeshObjectUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMeshObjectUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedLocalBoundsUpToDate_MetaData[];
#endif
		static void NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedLocalBoundsUpToDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMasterPoseComponentLOD_MetaData[];
#endif
		static void NewProp_bIgnoreMasterPoseComponentLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMasterPoseComponentLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderStatic_MetaData[];
#endif
		static void NewProp_bRenderStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCPUSkinning_MetaData[];
#endif
		static void NewProp_bCPUSkinning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCPUSkinning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleIndirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleDirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleDirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecentlyRendered_MetaData[];
#endif
		static void NewProp_bRecentlyRendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecentlyRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHighlightSelectedSections_MetaData[];
#endif
		static void NewProp_bCanHighlightSelectedSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHighlightSelectedSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncAttachParentLOD_MetaData[];
#endif
		static void NewProp_bSyncAttachParentLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncAttachParentLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderAllBodiesForBounds_MetaData[];
#endif
		static void NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderAllBodiesForBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentUseFixedSkelBounds_MetaData[];
#endif
		static void NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentUseFixedSkelBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_bPerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSkin_MetaData[];
#endif
		static void NewProp_bHideSkin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSkin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTarget_MetaData[];
#endif
		static void NewProp_bDisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayBones_MetaData[];
#endif
		static void NewProp_bDisplayBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceWireframe_MetaData[];
#endif
		static void NewProp_bForceWireframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceWireframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsFromMasterPoseComponent_MetaData[];
#endif
		static void NewProp_bUseBoundsFromMasterPoseComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsFromMasterPoseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLod_MetaData[];
#endif
		static void NewProp_bOverrideMinLod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityBasedAnimTickOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VisibilityBasedAnimTickOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityBasedAnimTickOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLodModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAssetOverride;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPoseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_MasterPoseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf, "BoneIsChildOf" }, // 2081877355
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride, "ClearSkinWeightOverride" }, // 1247965974
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride, "ClearVertexColorOverride" }, // 322620793
		{ &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2, "FindClosestBone_K2" }, // 2173171306
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex, "GetBoneIndex" }, // 4179981647
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName, "GetBoneName" }, // 469763931
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose, "GetDeltaTransformFromRefPose" }, // 1110039654
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones, "GetNumBones" }, // 1301286024
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs, "GetNumLODs" }, // 1982244873
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone, "GetParentBone" }, // 983196993
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition, "GetRefPosePosition" }, // 3842460142
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName, "GetSocketBoneName" }, // 2458012838
		{ &Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName, "HideBoneByName" }, // 1370610425
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName, "IsBoneHiddenByName" }, // 2637772414
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown, "IsMaterialSectionShown" }, // 1622281010
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility, "SetCapsuleIndirectShadowMinVisibility" }, // 4212676299
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow, "SetCastCapsuleDirectShadow" }, // 1873469906
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow, "SetCastCapsuleIndirectShadow" }, // 2529683676
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD, "SetForcedLOD" }, // 1901949270
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMasterPoseComponent, "SetMasterPoseComponent" }, // 2684420143
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD, "SetMinLOD" }, // 1408547959
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 1651143719
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic, "SetRenderStatic" }, // 352007538
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkeletalMesh, "SetSkeletalMesh" }, // 3174749319
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride, "SetSkinWeightOverride" }, // 615407064
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor, "SetVertexColorOverride_LinearColor" }, // 1916674483
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections, "ShowAllMaterialSections" }, // 3935934781
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection, "ShowMaterialSection" }, // 1016886098
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace, "TransformFromBoneSpace" }, // 3554639832
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace, "TransformToBoneSpace" }, // 2955376193
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName, "UnHideBoneByName" }, // 1270608676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/SkinnedMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Skinned mesh component that supports bone skinned mesh rendering.\nThis class does not support animation.\n\n@see USkeletalMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedLocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LocalBounds cached, so they're computed just once." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedLocalBounds = { "CachedLocalBounds", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, CachedLocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedLocalBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedLocalBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Capsule Indirect Shadow Min Visibility" },
		{ "EditCondition", "bCastCapsuleIndirectShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Controls how dark the capsule indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility = { "CapsuleIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, UpdateTransform will always result in a call to MeshObject->Update." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceMeshObjectUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate = { "bForceMeshObjectUpdate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true when CachedLocalBounds is up to date." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCachedLocalBoundsUpToDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate = { "bCachedLocalBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Flag that when set will ensure UpdateLODStatus will not take the MasterPoseComponent's current LOD in consideration when determining the correct LOD level (this requires MasterPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bIgnoreMasterPoseComponentLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD = { "bIgnoreMasterPoseComponentLOD", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, render as static in reference pose." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRenderStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic = { "bRenderStatic", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Enable on screen debugging of update rate optimization.\nRed = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.\n@todo: turn this into a console command." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayDebugUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations = { "bDisplayDebugUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick()\nThis allows to skip frames for performance. (For example based on visibility and size on screen)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bEnableUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations = { "bEnableUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether or not to CPU skin this component, requires render data refresh after changing" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCPUSkinning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning = { "bCPUSkinning", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Capsule Indirect Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleIndirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow = { "bCastCapsuleIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Capsule Direct Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\nThis type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\nThis flag will force bCastInsetShadow to be enabled." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleDirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow = { "bCastCapsuleDirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true if mesh has been recently rendered, false otherwise" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRecentlyRendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered = { "bRecentlyRendered", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether or not we can highlight selected sections - this should really only be done in the editor" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCanHighlightSelectedSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections = { "bCanHighlightSelectedSections", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, this component uses its parents LOD when attached if available\nForcedLOD can override this change. By default, it will use parent LOD." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bSyncAttachParentLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD = { "bSyncAttachParentLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bConsiderAllBodiesForBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds = { "bConsiderAllBodiesForBounds", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bComponentUseFixedSkelBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds = { "bComponentUseFixedSkelBounds", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bPerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur = { "bPerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Don't bother rendering the skin." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bHideSkin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin = { "bHideSkin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Disable Morphtarget for this component." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget = { "bDisableMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Draw the skeleton hierarchy for this skel mesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayBones_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones = { "bDisplayBones", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Forces the mesh to draw in wireframe mode." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceWireframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe = { "bForceWireframe", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, we will just using the bounds from our MasterPoseComponent.  This is useful for when we have a Mesh Parented\nto the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\nbounds as parent.  We want to do no calculations in that case." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bUseBoundsFromMasterPoseComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent = { "bUseBoundsFromMasterPoseComponent", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bOverrideMinLod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod = { "bOverrideMinLod", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "* This is tick animation frequency option based on this component rendered or not or using montage\n*  You can change this default value in the INI file\n* Mostly related with performance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption = { "VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD array info. Each index will correspond to the LOD index *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, LODInfo), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\nmeshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel = { "MinLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, MinLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, ForcedLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "PhysicsAsset is set in SkeletalMesh by default, but you can override with this value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride = { "PhysicsAssetOverride", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, PhysicsAssetOverride), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Wireframe color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, WireframeColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\nuse the component space transforms from the MasterPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\nskeleton within the same Actor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent = { "MasterPoseComponent", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, MasterPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The skeletal mesh used by this component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedLocalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreMasterPoseComponentLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromMasterPoseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MasterPoseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams = {
		&USkinnedMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkinnedMeshComponent, 1244468310);
	template<> ENGINE_API UClass* StaticClass<USkinnedMeshComponent>()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkinnedMeshComponent(Z_Construct_UClass_USkinnedMeshComponent, &USkinnedMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkinnedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
