// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EQSRenderingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSRenderingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEQSRenderingComponent::StaticRegisterNativesUEQSRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister()
	{
		return UEQSRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEQSRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "EnvironmentQuery/EQSRenderingComponent.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEQSRenderingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEQSRenderingComponent_Statics::ClassParams = {
		&UEQSRenderingComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEQSRenderingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEQSRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEQSRenderingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEQSRenderingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEQSRenderingComponent, 4284250569);
	template<> AIMODULE_API UClass* StaticClass<UEQSRenderingComponent>()
	{
		return UEQSRenderingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEQSRenderingComponent(Z_Construct_UClass_UEQSRenderingComponent, &UEQSRenderingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UEQSRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
