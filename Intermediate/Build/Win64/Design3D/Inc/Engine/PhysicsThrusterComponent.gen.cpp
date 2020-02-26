// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsThrusterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThrusterComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsThrusterComponent::StaticRegisterNativesUPhysicsThrusterComponent()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister()
	{
		return UPhysicsThrusterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsThrusterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrustStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrustStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsThrusterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ToolTip", "Used with objects that have physics to apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ToolTip", "Strength of thrust force applied to the base object." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength = { "ThrustStrength", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsThrusterComponent, ThrustStrength), METADATA_PARAMS(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsThrusterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsThrusterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsThrusterComponent_Statics::ClassParams = {
		&UPhysicsThrusterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsThrusterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsThrusterComponent, 2192450536);
	template<> ENGINE_API UClass* StaticClass<UPhysicsThrusterComponent>()
	{
		return UPhysicsThrusterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsThrusterComponent(Z_Construct_UClass_UPhysicsThrusterComponent, &UPhysicsThrusterComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsThrusterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsThrusterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
