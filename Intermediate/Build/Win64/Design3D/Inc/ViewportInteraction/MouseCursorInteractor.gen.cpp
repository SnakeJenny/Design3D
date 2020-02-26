// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/MouseCursorInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseCursorInteractor() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UMouseCursorInteractor::StaticRegisterNativesUMouseCursorInteractor()
	{
	}
	UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister()
	{
		return UMouseCursorInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UMouseCursorInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseCursorInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MouseCursorInteractor.h" },
		{ "ModuleRelativePath", "Public/MouseCursorInteractor.h" },
		{ "ToolTip", "Viewport interactor for a mouse cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseCursorInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseCursorInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMouseCursorInteractor_Statics::ClassParams = {
		&UMouseCursorInteractor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseCursorInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMouseCursorInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMouseCursorInteractor, 390967302);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UMouseCursorInteractor>()
	{
		return UMouseCursorInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMouseCursorInteractor(Z_Construct_UClass_UMouseCursorInteractor, &UMouseCursorInteractor::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UMouseCursorInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseCursorInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
