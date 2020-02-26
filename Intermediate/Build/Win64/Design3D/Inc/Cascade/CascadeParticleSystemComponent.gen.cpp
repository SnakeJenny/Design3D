// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cascade/Classes/CascadeParticleSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascadeParticleSystemComponent() {}
// Cross Module References
	CASCADE_API UClass* Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister();
	CASCADE_API UClass* Z_Construct_UClass_UCascadeParticleSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	UPackage* Z_Construct_UPackage__Script_Cascade();
// End Cross Module References
	void UCascadeParticleSystemComponent::StaticRegisterNativesUCascadeParticleSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister()
	{
		return UCascadeParticleSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCascadeParticleSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Physics Collision Object Physics Collision Mobility" },
		{ "IncludePath", "CascadeParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/CascadeParticleSystemComponent.h" },
		{ "ToolTip", "Used to provide an extended particle system component to allow collision to function in the preview window." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCascadeParticleSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::ClassParams = {
		&UCascadeParticleSystemComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCascadeParticleSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCascadeParticleSystemComponent, 1001885101);
	template<> CASCADE_API UClass* StaticClass<UCascadeParticleSystemComponent>()
	{
		return UCascadeParticleSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCascadeParticleSystemComponent(Z_Construct_UClass_UCascadeParticleSystemComponent, &UCascadeParticleSystemComponent::StaticClass, TEXT("/Script/Cascade"), TEXT("UCascadeParticleSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCascadeParticleSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
