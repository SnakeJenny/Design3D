// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FuncTestRenderingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuncTestRenderingComponent() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void UFuncTestRenderingComponent::StaticRegisterNativesUFuncTestRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister()
	{
		return UFuncTestRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFuncTestRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuncTestRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "FuncTestRenderingComponent.h" },
		{ "ModuleRelativePath", "Classes/FuncTestRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuncTestRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuncTestRenderingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams = {
		&UFuncTestRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFuncTestRenderingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFuncTestRenderingComponent, 4214393513);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFuncTestRenderingComponent>()
	{
		return UFuncTestRenderingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFuncTestRenderingComponent(Z_Construct_UClass_UFuncTestRenderingComponent, &UFuncTestRenderingComponent::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UFuncTestRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuncTestRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
