// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/MaterialEditorMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorMeshComponent() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialEditorMeshComponent::StaticRegisterNativesUMaterialEditorMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister()
	{
		return UMaterialEditorMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MaterialEditor/MaterialEditorMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::ClassParams = {
		&UMaterialEditorMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditorMeshComponent, 2650706655);
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorMeshComponent>()
	{
		return UMaterialEditorMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditorMeshComponent(Z_Construct_UClass_UMaterialEditorMeshComponent, &UMaterialEditorMeshComponent::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialEditorMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
