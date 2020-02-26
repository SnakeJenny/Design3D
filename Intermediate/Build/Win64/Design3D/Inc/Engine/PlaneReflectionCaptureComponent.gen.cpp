// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PlaneReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void UPlaneReflectionCaptureComponent::StaticRegisterNativesUPlaneReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister()
	{
		return UPlaneReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadiusScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PlaneReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius = { "PreviewInfluenceRadius", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale = { "InfluenceRadiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, InfluenceRadiusScale), METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams = {
		&UPlaneReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlaneReflectionCaptureComponent, 341868314);
	template<> ENGINE_API UClass* StaticClass<UPlaneReflectionCaptureComponent>()
	{
		return UPlaneReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaneReflectionCaptureComponent(Z_Construct_UClass_UPlaneReflectionCaptureComponent, &UPlaneReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPlaneReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
