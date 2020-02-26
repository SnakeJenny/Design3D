// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier_Extrude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Extrude() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Extrude_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Extrude();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Extrude::StaticRegisterNativesUGeomModifier_Extrude()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_Extrude_NoRegister()
	{
		return UGeomModifier_Extrude::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Extrude_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveCoordSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveCoordSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Extrude_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Extrude.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem = { "SaveCoordSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Extrude, SaveCoordSystem), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Extrude, Segments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Extrude, Length), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Extrude_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Extrude>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::ClassParams = {
		&UGeomModifier_Extrude::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Extrude()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Extrude_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier_Extrude, 2734672365);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Extrude>()
	{
		return UGeomModifier_Extrude::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier_Extrude(Z_Construct_UClass_UGeomModifier_Extrude, &UGeomModifier_Extrude::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier_Extrude"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Extrude);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
