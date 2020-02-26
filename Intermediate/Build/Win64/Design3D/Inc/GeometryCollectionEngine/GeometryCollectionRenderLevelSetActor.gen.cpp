// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionRenderLevelSetActor() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
// End Cross Module References
	void AGeometryCollectionRenderLevelSetActor::StaticRegisterNativesAGeometryCollectionRenderLevelSetActor()
	{
	}
	UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister()
	{
		return AGeometryCollectionRenderLevelSetActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderVolumeBoundingBox_MetaData[];
#endif
		static void NewProp_RenderVolumeBoundingBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderVolumeBoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Isovalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Isovalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayMarchMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RayMarchMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVolumeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetVolumeTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "AGeometryCollectionRenderLevelSetActor\nAn actor representing the collection of data necessary to\nrender volumes.  This references a ray marching material, which\nis used internally by a post process component blendable.  This\nis a workflow that can be improved with a deeper implementation\nin the future if we decide to.  Note that behavior with multiple\nrender level set actors isn't currently supported very well,\nbut could be improved in the future" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit(void* Obj)
	{
		((AGeometryCollectionRenderLevelSetActor*)Obj)->RenderVolumeBoundingBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox = { "RenderVolumeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((AGeometryCollectionRenderLevelSetActor*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Isovalue of the level set to use for surface reconstruction.  Generally you want\nthis to be zero, but it can be useful for exploring the distance values to make\nthis negative to see the interior structure of the levelset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue = { "Isovalue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, Isovalue), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Surface tolerance used for rendering.  When surface reconstruction is noisy,\ntry tweaking this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance = { "SurfaceTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, SurfaceTolerance), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Material that performs ray marching.  Note this must have certain parameters in order\nto work correctly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial = { "RayMarchMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Volume texture to fill" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture = { "TargetVolumeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionRenderLevelSetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams = {
		&AGeometryCollectionRenderLevelSetActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryCollectionRenderLevelSetActor, 3899919227);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionRenderLevelSetActor>()
	{
		return AGeometryCollectionRenderLevelSetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCollectionRenderLevelSetActor(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor, &AGeometryCollectionRenderLevelSetActor::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("AGeometryCollectionRenderLevelSetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionRenderLevelSetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
