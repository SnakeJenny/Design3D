// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier_Lathe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Lathe() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Lathe_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Lathe();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
	void UGeomModifier_Lathe::StaticRegisterNativesUGeomModifier_Lathe()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_Lathe_NoRegister()
	{
		return UGeomModifier_Lathe::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Lathe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSide_MetaData[];
#endif
		static void NewProp_AlignToSide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSegments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Lathe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Lathe.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
		{ "ToolTip", "The axis of rotation to use when creating the brush.  This is automatically determined from the current ortho viewport." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Lathe, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_SetBit(void* Obj)
	{
		((UGeomModifier_Lathe*)Obj)->AlignToSide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide = { "AlignToSide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Lathe), &Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Lathe, Segments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments = { "TotalSegments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Lathe, TotalSegments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Lathe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Lathe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::ClassParams = {
		&UGeomModifier_Lathe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Lathe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Lathe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier_Lathe, 714212465);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Lathe>()
	{
		return UGeomModifier_Lathe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier_Lathe(Z_Construct_UClass_UGeomModifier_Lathe, &UGeomModifier_Lathe::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier_Lathe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Lathe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
