// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/TestPhaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPhaseComponent() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void UTestPhaseComponent::StaticRegisterNativesUTestPhaseComponent()
	{
	}
	UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister()
	{
		return UTestPhaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestPhaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestPhaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "TestPhaseComponent.h" },
		{ "ModuleRelativePath", "Classes/TestPhaseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestPhaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPhaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams = {
		&UTestPhaseComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestPhaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestPhaseComponent, 3328372658);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UTestPhaseComponent>()
	{
		return UTestPhaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestPhaseComponent(Z_Construct_UClass_UTestPhaseComponent, &UTestPhaseComponent::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UTestPhaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPhaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
