// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportInteractableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractableInterface() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UViewportInteractableInterface::StaticRegisterNativesUViewportInteractableInterface()
	{
	}
	UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister()
	{
		return UViewportInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UViewportInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IViewportInteractableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportInteractableInterface_Statics::ClassParams = {
		&UViewportInteractableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportInteractableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportInteractableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportInteractableInterface, 491319316);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportInteractableInterface>()
	{
		return UViewportInteractableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportInteractableInterface(Z_Construct_UClass_UViewportInteractableInterface, &UViewportInteractableInterface::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportInteractableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportInteractableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
