// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBodyCollisionResponse();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
// End Cross Module References
	void UBodySetup::StaticRegisterNativesUBodySetup()
	{
	}
	UClass* Z_Construct_UClass_UBodySetup_NoRegister()
	{
		return UBodySetup::StaticClass();
	}
	struct Z_Construct_UClass_UBodySetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildScale3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionReponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionReponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMirroredCollision_MetaData[];
#endif
		static void NewProp_bGenerateMirroredCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMirroredCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedCookedData_MetaData[];
#endif
		static void NewProp_bSharedCookedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedCookedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNonMirroredCollision_MetaData[];
#endif
		static void NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNonMirroredCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshCollideAll_MetaData[];
#endif
		static void NewProp_bMeshCollideAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshCollideAll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderForBounds_MetaData[];
#endif
		static void NewProp_bConsiderForBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderForBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFullAnimWeight_MetaData[];
#endif
		static void NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFullAnimWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggGeom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/BodySetup.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "BodySetup contains all collision information that is associated with a single asset.\nA single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\nAssets typically implement a GetBodySetup function that is used during physics state creation.\n\n@see GetBodySetup\n@see FBodyInstance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Build scale for this body setup (static mesh settings define this value)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D = { "BuildScale3D", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, DefaultInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale = { "BuildScale", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, BuildScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Custom walkable slope setting for this body." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, CollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionTraceFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionReponse_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Collision Type for this body. This eventually changes response to collision to others *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionReponse = { "CollisionReponse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, CollisionReponse), Z_Construct_UEnum_Engine_EBodyCollisionResponse, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionReponse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionReponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on mirrored versions of this mesh.\nThis halves the collision data size for this mesh, but disables collision on mirrored instances of the body." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bGenerateMirroredCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision = { "bGenerateMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes" },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bSharedCookedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData = { "bSharedCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on normal (non-mirrored) versions of this body." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bGenerateNonMirroredCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision = { "bGenerateNonMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision.\nThis is useful for forcing high detail collisions using the entire render mesh." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bMeshCollideAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll = { "bMeshCollideAll", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\nThere is a speed improvement from having less BodySetups processed each frame when updating the bounds." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bConsiderForBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds = { "bConsiderForBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is.\nThis is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails)." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bAlwaysFullAnimWeight_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight = { "bAlwaysFullAnimWeight", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysicsType_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysicsType = { "PhysicsType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, PhysicsType), Z_Construct_UEnum_Engine_EPhysicsType, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysicsType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysicsType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, BoneName), METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "DisplayName", "Primitives" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Simplified collision representation of this" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom = { "AggGeom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetup, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_CollisionReponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysicsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodySetup_Statics::ClassParams = {
		&UBodySetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodySetup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodySetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodySetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodySetup, 318764188);
	template<> ENGINE_API UClass* StaticClass<UBodySetup>()
	{
		return UBodySetup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodySetup(Z_Construct_UClass_UBodySetup, &UBodySetup::StaticClass, TEXT("/Script/Engine"), TEXT("UBodySetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySetup);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
