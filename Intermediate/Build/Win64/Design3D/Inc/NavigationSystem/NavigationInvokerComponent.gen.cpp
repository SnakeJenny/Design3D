// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationInvokerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister()
	{
		return UNavigationInvokerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationInvokerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileRemovalRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileGenerationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationInvokerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "NavigationInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius = { "TileRemovalRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationInvokerComponent, TileRemovalRadius), METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius = { "TileGenerationRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationInvokerComponent, TileGenerationRadius), METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationInvokerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationInvokerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams = {
		&UNavigationInvokerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationInvokerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationInvokerComponent, 1085672885);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationInvokerComponent>()
	{
		return UNavigationInvokerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationInvokerComponent(Z_Construct_UClass_UNavigationInvokerComponent, &UNavigationInvokerComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationInvokerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationInvokerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
