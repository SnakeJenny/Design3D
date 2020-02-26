// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavLinkRenderingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkRenderingComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkRenderingComponent::StaticRegisterNativesUNavLinkRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister()
	{
		return UNavLinkRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "NavLinkRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkRenderingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkRenderingComponent_Statics::ClassParams = {
		&UNavLinkRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLinkRenderingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkRenderingComponent, 208685487);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkRenderingComponent>()
	{
		return UNavLinkRenderingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkRenderingComponent(Z_Construct_UClass_UNavLinkRenderingComponent, &UNavLinkRenderingComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavLinkRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
