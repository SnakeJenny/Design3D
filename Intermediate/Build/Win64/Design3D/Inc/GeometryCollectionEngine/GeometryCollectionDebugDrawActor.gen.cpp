// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugDrawActor() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void AGeometryCollectionDebugDrawActor::StaticRegisterNativesAGeometryCollectionDebugDrawActor()
	{
	}
	UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister()
	{
		return AGeometryCollectionDebugDrawActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextShadow_MetaData[];
#endif
		static void NewProp_bTextShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "AGeometryCollectionDebugDrawActor\n  An actor representing the collection of data necessary to\n  visualize geometry collections' debug informations.\n  Only one actor is to be used in the world, and should be\n  automatically spawned by the GeometryDebugDrawComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Size of arrows used for visualizing normals, breaking information, ...etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale = { "ArrowScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ArrowScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale factor used for visualizing transforms." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TransformScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale factor used for visualizing normals." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale = { "NormalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, NormalScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale of font used in visualizing indices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TextScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Draw text shadows when visualizing indices." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bTextShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow = { "bTextShadow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of lines when visualizing faces, normals, ...etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, LineThickness), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of points when visualizing vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness = { "PointThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, PointThickness), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionDebugDrawActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams = {
		&AGeometryCollectionDebugDrawActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryCollectionDebugDrawActor, 898928467);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionDebugDrawActor>()
	{
		return AGeometryCollectionDebugDrawActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCollectionDebugDrawActor(Z_Construct_UClass_AGeometryCollectionDebugDrawActor, &AGeometryCollectionDebugDrawActor::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("AGeometryCollectionDebugDrawActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionDebugDrawActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
