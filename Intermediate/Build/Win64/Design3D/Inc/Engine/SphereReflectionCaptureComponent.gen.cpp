// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SphereReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void USphereReflectionCaptureComponent::StaticRegisterNativesUSphereReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister()
	{
		return USphereReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_USphereReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SphereReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius = { "PreviewInfluenceRadius", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "Not needed anymore, not yet removed in case the artist setup values are needed in the future" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale = { "CaptureDistanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereReflectionCaptureComponent, CaptureDistanceScale), METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/SphereReflectionCaptureComponent.h" },
		{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius = { "InfluenceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereReflectionCaptureComponent, InfluenceRadius), METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_CaptureDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::NewProp_InfluenceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::ClassParams = {
		&USphereReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USphereReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USphereReflectionCaptureComponent, 3885156189);
	template<> ENGINE_API UClass* StaticClass<USphereReflectionCaptureComponent>()
	{
		return USphereReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereReflectionCaptureComponent(Z_Construct_UClass_USphereReflectionCaptureComponent, &USphereReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USphereReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
