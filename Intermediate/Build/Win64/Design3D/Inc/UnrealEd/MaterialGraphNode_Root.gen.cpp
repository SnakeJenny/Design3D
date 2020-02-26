// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Root() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UMaterialGraphNode_Root::StaticRegisterNativesUMaterialGraphNode_Root()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister()
	{
		return UMaterialGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Root.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Root.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Root.h" },
		{ "ToolTip", "Material whose inputs this root node represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraphNode_Root, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Root_Statics::ClassParams = {
		&UMaterialGraphNode_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraphNode_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraphNode_Root, 1429058107);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Root>()
	{
		return UMaterialGraphNode_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraphNode_Root(Z_Construct_UClass_UMaterialGraphNode_Root, &UMaterialGraphNode_Root::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraphNode_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Root);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
