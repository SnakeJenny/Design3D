// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Base() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Base::StaticRegisterNativesUMaterialGraphNode_Base()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister()
	{
		return UMaterialGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Base.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Base_Statics::ClassParams = {
		&UMaterialGraphNode_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraphNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraphNode_Base, 4151284154);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Base>()
	{
		return UMaterialGraphNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraphNode_Base(Z_Construct_UClass_UMaterialGraphNode_Base, &UMaterialGraphNode_Base::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraphNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
