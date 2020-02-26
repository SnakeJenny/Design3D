// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCamera/Public/CameraRig_Rail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Rail() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail()
	{
	}
	UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister()
	{
		return ACameraRig_Rail::StaticClass();
	}
	struct Z_Construct_UClass_ACameraRig_Rail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Mount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Mount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewRailStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewRailStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewRailMeshSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewRailMeshSegments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewRailMeshSegments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Rail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Rail;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RailCameraMount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RailCameraMount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RailSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RailSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationToRail_MetaData[];
#endif
		static void NewProp_bLockOrientationToRail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationToRail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionOnRail_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPositionOnRail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraRig_Rail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraRig_Rail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount = { "PreviewMesh_Mount", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Mount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh = { "PreviewRailStaticMesh", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0040008800000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailMeshSegments), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Preview meshes for visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail = { "PreviewMesh_Rail", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Rail), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Component to define the attach point for cameras. Moves along the rail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount = { "RailCameraMount", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, RailCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Spline component to define the rail path." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent = { "RailSplineComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, RailSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Root component to give the whole actor a transform." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines whether the orientation of the mount should be in the direction of the rail." },
	};
#endif
	void Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit(void* Obj)
	{
		((ACameraRig_Rail*)Obj)->bLockOrientationToRail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail = { "bLockOrientationToRail", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraRig_Rail), &Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail = { "CurrentPositionOnRail", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Rail, CurrentPositionOnRail), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraRig_Rail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraRig_Rail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams = {
		&ACameraRig_Rail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraRig_Rail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraRig_Rail, 2092409860);
	template<> CINEMATICCAMERA_API UClass* StaticClass<ACameraRig_Rail>()
	{
		return ACameraRig_Rail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraRig_Rail(Z_Construct_UClass_ACameraRig_Rail, &ACameraRig_Rail::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACameraRig_Rail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Rail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
