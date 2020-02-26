// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/PhysicsAssetUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetUtils() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
// End Cross Module References
	static UEnum* EPhysAssetFitVertWeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysAssetFitVertWeight"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysAssetFitVertWeight>()
	{
		return EPhysAssetFitVertWeight_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysAssetFitVertWeight(EPhysAssetFitVertWeight_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPhysAssetFitVertWeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight_Hash() { return 3943015076U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysAssetFitVertWeight"), 0, Get_Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVW_AnyWeight", (int64)EVW_AnyWeight },
				{ "EVW_DominantWeight", (int64)EVW_DominantWeight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EVW_AnyWeight.DisplayName", "Any Weight" },
				{ "EVW_DominantWeight.DisplayName", "Dominant Weight" },
				{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPhysAssetFitVertWeight",
				"EPhysAssetFitVertWeight",
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
	static UEnum* EPhysAssetFitGeomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysAssetFitGeomType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysAssetFitGeomType>()
	{
		return EPhysAssetFitGeomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysAssetFitGeomType(EPhysAssetFitGeomType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPhysAssetFitGeomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType_Hash() { return 2648007958U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysAssetFitGeomType"), 0, Get_Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFG_Box", (int64)EFG_Box },
				{ "EFG_Sphyl", (int64)EFG_Sphyl },
				{ "EFG_Sphere", (int64)EFG_Sphere },
				{ "EFG_TaperedCapsule", (int64)EFG_TaperedCapsule },
				{ "EFG_SingleConvexHull", (int64)EFG_SingleConvexHull },
				{ "EFG_MultiConvexHull", (int64)EFG_MultiConvexHull },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EFG_Box.DisplayName", "Box" },
				{ "EFG_MultiConvexHull.DisplayName", "Multi Convex Hull" },
				{ "EFG_SingleConvexHull.DisplayName", "Single Convex Hull" },
				{ "EFG_Sphere.DisplayName", "Sphere" },
				{ "EFG_Sphyl.DisplayName", "Capsule" },
				{ "EFG_TaperedCapsule.DisplayName", "Tapered Capsule (Cloth Only)" },
				{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPhysAssetFitGeomType",
				"EPhysAssetFitGeomType",
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
class UScriptStruct* FPhysAssetCreateParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FPhysAssetCreateParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysAssetCreateParams, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PhysAssetCreateParams"), sizeof(FPhysAssetCreateParams), Get_Z_Construct_UScriptStruct_FPhysAssetCreateParams_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPhysAssetCreateParams>()
{
	return FPhysAssetCreateParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysAssetCreateParams(FPhysAssetCreateParams::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("PhysAssetCreateParams"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFPhysAssetCreateParams
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFPhysAssetCreateParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysAssetCreateParams")),new UScriptStruct::TCppStructOps<FPhysAssetCreateParams>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFPhysAssetCreateParams;
	struct Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHullVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HullCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HullCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularConstraintMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularConstraintMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollisionsByDefault_MetaData[];
#endif
		static void NewProp_bDisableCollisionsByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollisionsByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBodyForAll_MetaData[];
#endif
		static void NewProp_bBodyForAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBodyForAll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWalkPastSmall_MetaData[];
#endif
		static void NewProp_bWalkPastSmall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWalkPastSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateConstraints_MetaData[];
#endif
		static void NewProp_bCreateConstraints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoOrientToBone_MetaData[];
#endif
		static void NewProp_bAutoOrientToBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoOrientToBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeomType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWeldSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinWeldSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBoneSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBoneSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Parameters for PhysicsAsset creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysAssetCreateParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "When creating convex hulls, the maximum verts that should be created" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, MaxHullVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "When creating multiple convex hulls, the maximum number that will be created." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, HullCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData[] = {
		{ "Category", "Constraint Creation" },
		{ "EditCondition", "bCreateConstraints" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "The type of angular constraint to create between bodies" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode = { "AngularConstraintMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, AngularConstraintMode), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to disable collision of body with other bodies on creation" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bDisableCollisionsByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault = { "bDisableCollisionsByDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "DisplayName", "Create Body for All Bones" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Forces creation of a body for each bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bBodyForAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll = { "bBodyForAll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "DisplayName", "Walk Past Small Bones" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to skip small bones entirely (rather than merge them with adjacent bones)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bWalkPastSmall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall = { "bWalkPastSmall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData[] = {
		{ "Category", "Constraint Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to create constraints between adjacent created bodies" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bCreateConstraints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints = { "bCreateConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to automatically orient the created bodies to their corresponding bones" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bAutoOrientToBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone = { "bAutoOrientToBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "DisplayName", "Vertex Weighting Type" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "How vertices are mapped to bones when approximating them with bodies" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight = { "VertWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, VertWeight), Z_Construct_UEnum_UnrealEd_EPhysAssetFitVertWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "DisplayName", "Primitive Type" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "The geometry type that should be used when creating bodies" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType = { "GeomType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, GeomType), Z_Construct_UEnum_UnrealEd_EPhysAssetFitGeomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Bones that are smaller than this value will be merged together for body creation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize = { "MinWeldSize", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, MinWeldSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Bones that are shorter than this value will be ignored for body creation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize = { "MinBoneSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetCreateParams, MinBoneSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PhysAssetCreateParams",
		sizeof(FPhysAssetCreateParams),
		alignof(FPhysAssetCreateParams),
		Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysAssetCreateParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysAssetCreateParams"), sizeof(FPhysAssetCreateParams), Get_Z_Construct_UScriptStruct_FPhysAssetCreateParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysAssetCreateParams_Hash() { return 1182745785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
