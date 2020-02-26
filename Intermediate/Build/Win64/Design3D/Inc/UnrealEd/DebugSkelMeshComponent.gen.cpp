// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/DebugSkelMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugSkelMeshComponent() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedSocketInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
// End Cross Module References
class UScriptStruct* FSelectedSocketInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FSelectedSocketInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectedSocketInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("SelectedSocketInfo"), sizeof(FSelectedSocketInfo), Get_Z_Construct_UScriptStruct_FSelectedSocketInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSelectedSocketInfo>()
{
	return FSelectedSocketInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectedSocketInfo(FSelectedSocketInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("SelectedSocketInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFSelectedSocketInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFSelectedSocketInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectedSocketInfo")),new UScriptStruct::TCppStructOps<FSelectedSocketInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFSelectedSocketInfo;
	struct Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectedSocketInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SelectedSocketInfo",
		sizeof(FSelectedSocketInfo),
		alignof(FSelectedSocketInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectedSocketInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectedSocketInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectedSocketInfo"), sizeof(FSelectedSocketInfo), Get_Z_Construct_UScriptStruct_FSelectedSocketInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectedSocketInfo_Hash() { return 2722712547U; }
	void UDebugSkelMeshComponent::StaticRegisterNativesUDebugSkelMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister()
	{
		return UDebugSkelMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDebugSkelMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseClothingSimulationWithAnim_MetaData[];
#endif
		static void NewProp_bPauseClothingSimulationWithAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseClothingSimulationWithAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformSingleClothingTick_MetaData[];
#endif
		static void NewProp_bPerformSingleClothingTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformSingleClothingTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInGameBounds_MetaData[];
#endif
		static void NewProp_bIsUsingInGameBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInGameBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedAnimScriptInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavedAnimScriptInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkelMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargetOfInterests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MorphTargetOfInterests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MorphTargetOfInterests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesOfInterest_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesOfInterest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BonesOfInterest_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClothCullBackface_MetaData[];
#endif
		static void NewProp_bClothCullBackface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClothCullBackface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClothFlipNormal_MetaData[];
#endif
		static void NewProp_bClothFlipNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClothFlipNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothMeshOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClothMeshOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClothPropertyView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClothPropertyView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClothPropertyView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinClothPropertyView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowClothData_MetaData[];
#endif
		static void NewProp_bShowClothData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowClothData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewRootMotion_MetaData[];
#endif
		static void NewProp_bPreviewRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[];
#endif
		static void NewProp_bDisplayVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayBound_MetaData[];
#endif
		static void NewProp_bDisplayBound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplaySourceAnimation_MetaData[];
#endif
		static void NewProp_bDisplaySourceAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplaySourceAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayBakedAnimation_MetaData[];
#endif
		static void NewProp_bDisplayBakedAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayBakedAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAdditiveBasePose_MetaData[];
#endif
		static void NewProp_bDisplayAdditiveBasePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAdditiveBasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayNonRetargetedPose_MetaData[];
#endif
		static void NewProp_bDisplayNonRetargetedPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayNonRetargetedPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayRawAnimation_MetaData[];
#endif
		static void NewProp_bDisplayRawAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayRawAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshSocketsVisible_MetaData[];
#endif
		static void NewProp_bMeshSocketsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshSocketsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkeletonSocketsVisible_MetaData[];
#endif
		static void NewProp_bSkeletonSocketsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkeletonSocketsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSockets_MetaData[];
#endif
		static void NewProp_bDrawSockets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawBinormals_MetaData[];
#endif
		static void NewProp_bDrawBinormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawBinormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTangents_MetaData[];
#endif
		static void NewProp_bDrawTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawNormals_MetaData[];
#endif
		static void NewProp_bDrawNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawMorphTargetVerts_MetaData[];
#endif
		static void NewProp_bDrawMorphTargetVerts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawMorphTargetVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawBoneInfluences_MetaData[];
#endif
		static void NewProp_bDrawBoneInfluences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawBoneInfluences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBoneNames_MetaData[];
#endif
		static void NewProp_bShowBoneNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawMesh_MetaData[];
#endif
		static void NewProp_bDrawMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderRawSkeleton_MetaData[];
#endif
		static void NewProp_bRenderRawSkeleton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderRawSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugSkelMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "Animation/DebugSkelMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPauseClothingSimulationWithAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim = { "bPauseClothingSimulationWithAnim", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Base skel mesh has support for suspending clothing, but single ticks are more of a debug feature when stepping through an animation\nSo we control that using this flag" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPerformSingleClothingTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick = { "bPerformSingleClothingTick", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Does this component use in game bounds or does it use bounds calculated from bones" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bIsUsingInGameBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds = { "bIsUsingInGameBounds", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance = { "SavedAnimScriptInstance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, SavedAnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance = { "PreviewInstance", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, PreviewInstance), Z_Construct_UClass_UAnimPreviewInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of materials to restore when not rendering blend weights" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials = { "SkelMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, SkelMaterials), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_Inner = { "SkelMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of morphtargets to render verts for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests = { "MorphTargetOfInterests", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, MorphTargetOfInterests), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_Inner = { "MorphTargetOfInterests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of bones to render bone weights for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest = { "BonesOfInterest", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, BonesOfInterest), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_Inner = { "BonesOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bClothCullBackface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface = { "bClothCullBackface", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bClothFlipNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal = { "bClothFlipNormal", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity = { "ClothMeshOpacity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, ClothMeshOpacity), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView = { "MaxClothPropertyView", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, MaxClothPropertyView), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView = { "MinClothPropertyView", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugSkelMeshComponent, MinClothPropertyView), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bShowClothData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData = { "bShowClothData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPreviewRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion = { "bPreviewRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors = { "bDisplayVertexColors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display Bound *" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayBound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound = { "bDisplayBound", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display source animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplaySourceAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation = { "bDisplaySourceAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display baked animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayBakedAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation = { "bDisplayBakedAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display additive base bone transform" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayAdditiveBasePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose = { "bDisplayAdditiveBasePose", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display non retargeted animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayNonRetargetedPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose = { "bDisplayNonRetargetedPose", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display raw animation bone transform" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayRawAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation = { "bDisplayRawAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Mesh sockets visible?" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bMeshSocketsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible = { "bMeshSocketsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Skeleton sockets visible?" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bSkeletonSocketsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible = { "bSkeletonSocketsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Socket hit points viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawSockets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets = { "bDrawSockets", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex binormal viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawBinormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals = { "bDrawBinormals", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex tangent viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents = { "bDrawTangents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex normal viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals = { "bDrawNormals", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Morphtarget viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawMorphTargetVerts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts = { "bDrawMorphTargetVerts", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Bone influences viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawBoneInfluences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences = { "bDrawBoneInfluences", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "If true then the bone names associated with the skeletal mesh are displayed" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bShowBoneNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames = { "bShowBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "If true then the skeletal mesh associated with the component is drawn." },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh = { "bDrawMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "If true, render a wireframe skeleton of the mesh animated with the raw (uncompressed) animation data." },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bRenderRawSkeleton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton = { "bRenderRawSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRenderRawSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugSkelMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugSkelMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::ClassParams = {
		&UDebugSkelMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers),
		0,
		0x00B010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugSkelMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugSkelMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugSkelMeshComponent, 1082364805);
	template<> UNREALED_API UClass* StaticClass<UDebugSkelMeshComponent>()
	{
		return UDebugSkelMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugSkelMeshComponent(Z_Construct_UClass_UDebugSkelMeshComponent, &UDebugSkelMeshComponent::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDebugSkelMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugSkelMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
