// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/TetrahedronBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrahedronBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTetrahedronBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTetrahedronBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTetrahedronBuilder::StaticRegisterNativesUTetrahedronBuilder()
	{
	}
	UClass* Z_Construct_UClass_UTetrahedronBuilder_NoRegister()
	{
		return UTetrahedronBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UTetrahedronBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereExtrapolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SphereExtrapolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetrahedronBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Sphere" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/TetrahedronBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetrahedronBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Tessellation" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ToolTip", "How many iterations this sphere uses to tessellate its geometry" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation = { "SphereExtrapolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetrahedronBuilder, SphereExtrapolation), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/TetrahedronBuilder.h" },
		{ "ToolTip", "The radius of this sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetrahedronBuilder, Radius), METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_SphereExtrapolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrahedronBuilder_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetrahedronBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrahedronBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetrahedronBuilder_Statics::ClassParams = {
		&UTetrahedronBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTetrahedronBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetrahedronBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetrahedronBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetrahedronBuilder, 1539005258);
	template<> UNREALED_API UClass* StaticClass<UTetrahedronBuilder>()
	{
		return UTetrahedronBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetrahedronBuilder(Z_Construct_UClass_UTetrahedronBuilder, &UTetrahedronBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTetrahedronBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrahedronBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
