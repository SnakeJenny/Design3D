// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/BoxReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void UBoxReflectionCaptureComponent::StaticRegisterNativesUBoxReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister()
	{
		return UBoxReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTransitionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxTransitionDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/BoxReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox = { "PreviewInfluenceBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewInfluenceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "Adjust capture transition distance" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance = { "BoxTransitionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, BoxTransitionDistance), METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams = {
		&UBoxReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoxReflectionCaptureComponent, 2387426004);
	template<> ENGINE_API UClass* StaticClass<UBoxReflectionCaptureComponent>()
	{
		return UBoxReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxReflectionCaptureComponent(Z_Construct_UClass_UBoxReflectionCaptureComponent, &UBoxReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBoxReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
