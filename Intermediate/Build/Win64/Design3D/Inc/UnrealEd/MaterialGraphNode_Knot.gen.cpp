// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/MaterialGraphNode_Knot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Knot() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Knot_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Knot();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Knot::StaticRegisterNativesUMaterialGraphNode_Knot()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraphNode_Knot_NoRegister()
	{
		return UMaterialGraphNode_Knot::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Knot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraphNode_Knot.h" },
		{ "ModuleRelativePath", "Public/MaterialGraphNode_Knot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Knot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::ClassParams = {
		&UMaterialGraphNode_Knot::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Knot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraphNode_Knot, 3257989946);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Knot>()
	{
		return UMaterialGraphNode_Knot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraphNode_Knot(Z_Construct_UClass_UMaterialGraphNode_Knot, &UMaterialGraphNode_Knot::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraphNode_Knot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Knot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
