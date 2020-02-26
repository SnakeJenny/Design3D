// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier_Pen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Pen() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Pen_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Pen();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGeomModifier_Pen::StaticRegisterNativesUGeomModifier_Pen()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_Pen_NoRegister()
	{
		return UGeomModifier_Pen::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Pen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseWorldSpacePos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseWorldSpacePos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShapeVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeVertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtrudeDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateBrushShape_MetaData[];
#endif
		static void NewProp_bCreateBrushShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateBrushShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateConvexPolygons_MetaData[];
#endif
		static void NewProp_bCreateConvexPolygons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateConvexPolygons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoExtrude_MetaData[];
#endif
		static void NewProp_bAutoExtrude_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoExtrude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Pen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Pen.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "The mouse position, in world space, where the user currently is hovering (snapped to grid if that setting is enabled)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos = { "MouseWorldSpacePos", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Pen, MouseWorldSpacePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "The vertices that the user has dropped down in the world so far." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices = { "ShapeVertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Pen, ShapeVertices), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_Inner = { "ShapeVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "How far to extrude the newly created brush if bAutoExtrude is set to true." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth = { "ExtrudeDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Pen, ExtrudeDepth), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the resulting shape will be turned into an ABrushShape actor." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bCreateBrushShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape = { "bCreateBrushShape", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the tool will try and optimize the resulting triangles into convex polygons before creating the brush." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bCreateConvexPolygons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons = { "bCreateConvexPolygons", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the shape will be automatically extruded into a brush upon completion." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bAutoExtrude = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude = { "bAutoExtrude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Pen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Pen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Pen_Statics::ClassParams = {
		&UGeomModifier_Pen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Pen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Pen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier_Pen, 455236185);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Pen>()
	{
		return UGeomModifier_Pen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier_Pen(Z_Construct_UClass_UGeomModifier_Pen, &UGeomModifier_Pen::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier_Pen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Pen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
