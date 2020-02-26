// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BrushShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushShape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABrushShape_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABrushShape();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABrushShape::StaticRegisterNativesABrushShape()
	{
	}
	UClass* Z_Construct_UClass_ABrushShape_NoRegister()
	{
		return ABrushShape::StaticClass();
	}
	struct Z_Construct_UClass_ABrushShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrushShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrush,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/BrushShape.h" },
		{ "ModuleRelativePath", "Classes/Engine/BrushShape.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A brush that acts as a template for geometry mode modifiers like \"Lathe\"." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrushShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrushShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrushShape_Statics::ClassParams = {
		&ABrushShape::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABrushShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrushShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrushShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrushShape, 3514124970);
	template<> ENGINE_API UClass* StaticClass<ABrushShape>()
	{
		return ABrushShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrushShape(Z_Construct_UClass_ABrushShape, &ABrushShape::StaticClass, TEXT("/Script/Engine"), TEXT("ABrushShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrushShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
