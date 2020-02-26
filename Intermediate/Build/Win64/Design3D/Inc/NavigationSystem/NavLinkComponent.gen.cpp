// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavLinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
// End Cross Module References
	void UNavLinkComponent::StaticRegisterNativesUNavLinkComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister()
	{
		return UNavLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation Mobility Trigger" },
		{ "IncludePath", "NavLinkComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkComponent, Links), METADATA_PARAMS(Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkComponent, INavLinkHostInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams = {
		&UNavLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkComponent, 30907643);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkComponent>()
	{
		return UNavLinkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkComponent(Z_Construct_UClass_UNavLinkComponent, &UNavLinkComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavLinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
