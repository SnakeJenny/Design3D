// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeGizmoRenderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoRenderComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeGizmoRenderComponent::StaticRegisterNativesULandscapeGizmoRenderComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent_NoRegister()
	{
		return ULandscapeGizmoRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "LandscapeGizmoRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoRenderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGizmoRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::ClassParams = {
		&ULandscapeGizmoRenderComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeGizmoRenderComponent, 3752968071);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeGizmoRenderComponent>()
	{
		return ULandscapeGizmoRenderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeGizmoRenderComponent(Z_Construct_UClass_ULandscapeGizmoRenderComponent, &ULandscapeGizmoRenderComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeGizmoRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGizmoRenderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
