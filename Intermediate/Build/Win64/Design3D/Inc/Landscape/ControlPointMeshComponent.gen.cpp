// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/ControlPointMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPointMeshComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UControlPointMeshComponent::StaticRegisterNativesUControlPointMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister()
	{
		return UControlPointMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UControlPointMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlPointMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "ControlPointMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ControlPointMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UControlPointMeshComponent*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UControlPointMeshComponent), &Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlPointMeshComponent_Statics::NewProp_bSelected,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlPointMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlPointMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControlPointMeshComponent_Statics::ClassParams = {
		&UControlPointMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::PropPointers), 0),
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UControlPointMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlPointMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControlPointMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControlPointMeshComponent, 2466960368);
	template<> LANDSCAPE_API UClass* StaticClass<UControlPointMeshComponent>()
	{
		return UControlPointMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlPointMeshComponent(Z_Construct_UClass_UControlPointMeshComponent, &UControlPointMeshComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("UControlPointMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlPointMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
