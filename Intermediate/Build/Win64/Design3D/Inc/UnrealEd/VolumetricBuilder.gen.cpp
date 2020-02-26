// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/VolumetricBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UVolumetricBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UVolumetricBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UVolumetricBuilder::StaticRegisterNativesUVolumetricBuilder()
	{
	}
	UClass* Z_Construct_UClass_UVolumetricBuilder_NoRegister()
	{
		return UVolumetricBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVolumetricBuilder_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSheets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSheets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumetricBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Volumetric" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/VolumetricBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets = { "NumSheets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricBuilder, NumSheets), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricBuilder, Radius), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumetricBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumetricBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVolumetricBuilder_Statics::ClassParams = {
		&UVolumetricBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers),
		0,
		0x000812A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumetricBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVolumetricBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVolumetricBuilder, 1981423672);
	template<> UNREALED_API UClass* StaticClass<UVolumetricBuilder>()
	{
		return UVolumetricBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVolumetricBuilder(Z_Construct_UClass_UVolumetricBuilder, &UVolumetricBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UVolumetricBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumetricBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
