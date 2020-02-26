// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/VIGizmoHandleMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIGizmoHandleMeshComponent() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UGizmoHandleMeshComponent::StaticRegisterNativesUGizmoHandleMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister()
	{
		return UGizmoHandleMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoHandleMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
		{ "IncludePath", "VIGizmoHandleMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandleMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoHandleMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::ClassParams = {
		&UGizmoHandleMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoHandleMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoHandleMeshComponent, 395113569);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UGizmoHandleMeshComponent>()
	{
		return UGizmoHandleMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoHandleMeshComponent(Z_Construct_UClass_UGizmoHandleMeshComponent, &UGizmoHandleMeshComponent::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UGizmoHandleMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoHandleMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
