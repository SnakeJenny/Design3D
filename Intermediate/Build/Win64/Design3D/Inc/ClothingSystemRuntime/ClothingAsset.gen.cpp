// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntime/Public/Assets/ClothingAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAsset() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	CLOTHINGSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAssetCustomData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAsset_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAsset();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
	static UEnum* EClothingWindMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("EClothingWindMethod"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIME_API UEnum* StaticEnum<EClothingWindMethod>()
	{
		return EClothingWindMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothingWindMethod(EClothingWindMethod_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("EClothingWindMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_Hash() { return 1404208060U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothingWindMethod"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClothingWindMethod::Legacy", (int64)EClothingWindMethod::Legacy },
				{ "EClothingWindMethod::Accurate", (int64)EClothingWindMethod::Accurate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
				{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				"EClothingWindMethod",
				"EClothingWindMethod",
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
	static UEnum* MaskTarget_PhysMesh_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("MaskTarget_PhysMesh"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIME_API UEnum* StaticEnum<MaskTarget_PhysMesh>()
	{
		return MaskTarget_PhysMesh_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MaskTarget_PhysMesh(MaskTarget_PhysMesh_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("MaskTarget_PhysMesh"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_Hash() { return 91948972U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MaskTarget_PhysMesh"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MaskTarget_PhysMesh::None", (int64)MaskTarget_PhysMesh::None },
				{ "MaskTarget_PhysMesh::MaxDistance", (int64)MaskTarget_PhysMesh::MaxDistance },
				{ "MaskTarget_PhysMesh::BackstopDistance", (int64)MaskTarget_PhysMesh::BackstopDistance },
				{ "MaskTarget_PhysMesh::BackstopRadius", (int64)MaskTarget_PhysMesh::BackstopRadius },
				{ "MaskTarget_PhysMesh::AnimDriveMultiplier", (int64)MaskTarget_PhysMesh::AnimDriveMultiplier },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The possible targets for a physical mesh mask" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				"MaskTarget_PhysMesh",
				"MaskTarget_PhysMesh",
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
class UScriptStruct* FClothConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothConfig>()
{
	return FClothConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConfig(FClothConfig::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConfig"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConfig")),new UScriptStruct::TCppStructOps<FClothConfig>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig;
	struct Z_Construct_UScriptStruct_FClothConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamperStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveDamperStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CentrifugalInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearInertiaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindLiftCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindDragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionCullScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Holds initial, asset level config for clothing actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, AnimDriveDamperStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveDamperStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveDamperStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, AnimDriveSpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, CollisionThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CollisionThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, TetherLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, TetherStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((FClothConfig*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClothConfig), &Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_StiffnessFrequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "30" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
		{ "UIMax", "240" },
		{ "UIMin", "30" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SolverFrequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CentrifugalInertiaScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularInertiaScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearInertiaScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularDrag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearDrag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, WindLiftCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindLiftCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindDragCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, WindDragCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindDragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Friction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Damping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, SelfCollisionCullScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionCullScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, SelfCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_ShearConstraintConfig_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, ShearConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_ShearConstraintConfig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_ShearConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_BendConstraintConfig_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, BendConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_BendConstraintConfig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_BendConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, HorizontalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_HorizontalConstraintConfig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_HorizontalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, VerticalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_VerticalConstraintConfig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_VerticalConstraintConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConfig, WindMethod), Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveDamperStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AnimDriveSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_TetherStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_StiffnessFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SolverFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_CentrifugalInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearInertiaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_AngularDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_LinearDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindLiftCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionCullScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_SelfCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_ShearConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_BendConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_HorizontalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_VerticalConstraintConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Statics::NewProp_WindMethod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothConfig",
		sizeof(FClothConfig),
		alignof(FClothConfig),
		Z_Construct_UScriptStruct_FClothConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConfig_Hash() { return 3210285994U; }
class UScriptStruct* FClothConstraintSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothConstraintSetup>()
{
	return FClothConstraintSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConstraintSetup(FClothConstraintSetup::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConstraintSetup"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConstraintSetup")),new UScriptStruct::TCppStructOps<FClothConstraintSetup>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup;
	struct Z_Construct_UScriptStruct_FClothConstraintSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Container for a constraint setup, these can be horizontal, vertical, shear and bend" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_CompressionLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup, CompressionLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_CompressionLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_CompressionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The hard limit on how far this constarint can stretch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StretchLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StiffnessMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothConstraintSetup, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_Stiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_Stiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_CompressionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StretchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_StiffnessMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::NewProp_Stiffness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothConstraintSetup",
		sizeof(FClothConstraintSetup),
		alignof(FClothConstraintSetup),
		Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothConstraintSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_Hash() { return 1396945659U; }
class UScriptStruct* FClothLODData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothLODData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothLODData>()
{
	return FClothLODData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothLODData(FClothLODData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothLODData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothLODData")),new UScriptStruct::TCppStructOps<FClothLODData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData;
	struct Z_Construct_UScriptStruct_FClothLODData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalMeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothLODData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothLODData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks_MetaData[] = {
		{ "Category", "Masks" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks = { "ParameterMasks", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODData, ParameterMasks), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks_Inner = { "ParameterMasks", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Collision primitive and covex data for clothing collisions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODData, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_CollisionData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_CollisionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_PhysicalMeshData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Raw phys mesh data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_PhysicalMeshData = { "PhysicalMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothLODData, PhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_PhysicalMeshData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_PhysicalMeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothLODData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_ParameterMasks_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_CollisionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODData_Statics::NewProp_PhysicalMeshData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothLODData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothLODData",
		sizeof(FClothLODData),
		alignof(FClothLODData),
		Z_Construct_UScriptStruct_FClothLODData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothLODData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothLODData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothLODData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothLODData_Hash() { return 4272938777U; }
class UScriptStruct* FClothPhysicalMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothPhysicalMeshData>()
{
	return FClothPhysicalMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicalMeshData(FClothPhysicalMeshData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothPhysicalMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicalMeshData")),new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData;
	struct Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InverseMasses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimDriveMultipliers;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveMultipliers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Physical mesh data created during asset import or created from a skeletal mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, SelfCollisionIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts = { "NumFixedVerts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, NumFixedVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Maximum number of bone weights of any vetex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights = { "MaxBoneWeights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxBoneWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BoneData), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses = { "InverseMasses", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, InverseMasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner = { "InverseMasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Strength of anim drive per-particle (spring driving particle back to skinned location" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, AnimDriveMultipliers), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Radius of movement to allow for backstop movement" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopRadiuses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances = { "BackstopDistances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopDistances), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner = { "BackstopDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances = { "MaxDistances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxDistances), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner = { "MaxDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Indices of the simulation mesh triangles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Indices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Color at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, VertexColors), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Normal at each vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Normals), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Positions of each simulation vertex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Vertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothPhysicalMeshData",
		sizeof(FClothPhysicalMeshData),
		alignof(FClothPhysicalMeshData),
		Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_Hash() { return 4117914452U; }
class UScriptStruct* FClothVertBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothVertBoneData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothVertBoneData>()
{
	return FClothVertBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothVertBoneData(FClothVertBoneData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothVertBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothVertBoneData")),new UScriptStruct::TCppStructOps<FClothVertBoneData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData;
	struct Z_Construct_UScriptStruct_FClothVertBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_BoneIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInfluences_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInfluences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Bone data for a vertex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothVertBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The weights for each entry in BoneIndices" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BoneWeights, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BoneIndices, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Number of influences for this vertex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences = { "NumInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothVertBoneData, NumInfluences), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothVertBoneData",
		sizeof(FClothVertBoneData),
		alignof(FClothVertBoneData),
		Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothVertBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_Hash() { return 1485955604U; }
class UScriptStruct* FClothParameterMask_PhysMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FClothParameterMask_PhysMesh>()
{
	return FClothParameterMask_PhysMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothParameterMask_PhysMesh(FClothParameterMask_PhysMesh::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothParameterMask_PhysMesh"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothParameterMask_PhysMesh")),new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh;
	struct Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaskName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "A mask is simply some storage for a physical mesh parameter painted onto clothing.\nUsed in the editor for users to paint onto and then target to a parameter, which\nis then later applied to a phys mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Whether this mask is enabled and able to effect final mesh values" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FClothParameterMask_PhysMesh*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClothParameterMask_PhysMesh), &Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The actual values stored in the mask" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothParameterMask_PhysMesh, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The maximum value currently in the mask value array" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MinValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The maximum value currently in the mask value array" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MaxValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The currently targeted parameter for the mask" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothParameterMask_PhysMesh, CurrentTarget), Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaskName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Name of the mask, mainly for users to differentiate" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaskName = { "MaskName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MaskName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaskName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaskName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_CurrentTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::NewProp_MaskName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
		nullptr,
		&NewStructOps,
		"ClothParameterMask_PhysMesh",
		sizeof(FClothParameterMask_PhysMesh),
		alignof(FClothParameterMask_PhysMesh),
		Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_Hash() { return 544507249U; }
	void UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Assets/ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Custom data wrapper for clothing assets\nIf writing a new clothing asset importer, creating a new derived custom data is how to store importer (and possibly simulation)\ndata that importer will create. This needs to be set to the CustomData member on the asset your factory creates.\nTesting whether a UClothingAsset was made from a custom plugin can be achieved with\nif(AssetPtr->CustomData->IsA(UMyCustomData::StaticClass()))" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams = {
		&UClothingAssetCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetCustomData, 3560160589);
	template<> CLOTHINGSYSTEMRUNTIME_API UClass* StaticClass<UClothingAssetCustomData>()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetCustomData(Z_Construct_UClass_UClothingAssetCustomData, &UClothingAssetCustomData::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAssetCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCustomData);
	void UClothingAsset::StaticRegisterNativesUClothingAsset()
	{
	}
	UClass* Z_Construct_UClass_UClothingAsset_NoRegister()
	{
		return UClothingAsset::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LodData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Assets/ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_CustomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Custom data applied by the importer depending on where the asset was imported from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, CustomData), Z_Construct_UClass_UClothingAssetCustomData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_CustomData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_ReferenceBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Bone to treat as the root of the simulation space" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_ReferenceBoneIndex = { "ReferenceBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, ReferenceBoneIndex), METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_ReferenceBoneIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_ReferenceBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "List of the indices for the bones in UsedBoneNames, used for remapping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, UsedBoneIndices), METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices_Inner = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "List of bones this asset uses inside its parent mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, UsedBoneNames), METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames_Inner = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap = { "LodMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, LodMap), METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap_Inner = { "LodMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The actual asset data, listed by LOD" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData = { "LodData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, LodData), METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData_Inner = { "LodData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothLODData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_ClothConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "Configuration of the cloth, contains all the parameters for how the clothing behaves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_ClothConfig = { "ClothConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, ClothConfig), Z_Construct_UScriptStruct_FClothConfig, METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_ClothConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_ClothConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAsset_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
		{ "ToolTip", "The physics asset to extract collisions from when building a simulation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAsset_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAsset, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::NewProp_PhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::NewProp_PhysicsAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_ReferenceBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_UsedBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_LodData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_ClothConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAsset_Statics::NewProp_PhysicsAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAsset_Statics::ClassParams = {
		&UClothingAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothingAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothingAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAsset, 852623548);
	template<> CLOTHINGSYSTEMRUNTIME_API UClass* StaticClass<UClothingAsset>()
	{
		return UClothingAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAsset(Z_Construct_UClass_UClothingAsset, &UClothingAsset::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothingAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
