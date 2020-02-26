// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/DrawSphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDrawSphereComponent::StaticRegisterNativesUDrawSphereComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister()
	{
		return UDrawSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/DrawSphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DrawSphereComponent.h" },
		{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawSphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawSphereComponent_Statics::ClassParams = {
		&UDrawSphereComponent::StaticClass,
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
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawSphereComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDrawSphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawSphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawSphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawSphereComponent, 1074432180);
	template<> ENGINE_API UClass* StaticClass<UDrawSphereComponent>()
	{
		return UDrawSphereComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawSphereComponent(Z_Construct_UClass_UDrawSphereComponent, &UDrawSphereComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDrawSphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawSphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
