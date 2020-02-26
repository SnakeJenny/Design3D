// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Private/InteractiveFoliageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent()
	{
	}
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister()
	{
		return UInteractiveFoliageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveFoliageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
		{ "IncludePath", "InteractiveFoliageComponent.h" },
		{ "ModuleRelativePath", "Private/InteractiveFoliageComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveFoliageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveFoliageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams = {
		&UInteractiveFoliageComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveFoliageComponent, 2625864353);
	template<> FOLIAGE_API UClass* StaticClass<UInteractiveFoliageComponent>()
	{
		return UInteractiveFoliageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveFoliageComponent(Z_Construct_UClass_UInteractiveFoliageComponent, &UInteractiveFoliageComponent::StaticClass, TEXT("/Script/Foliage"), TEXT("UInteractiveFoliageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveFoliageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
