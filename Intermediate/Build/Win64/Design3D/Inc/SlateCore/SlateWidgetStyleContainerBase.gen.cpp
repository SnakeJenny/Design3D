// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerBase() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
// End Cross Module References
	void USlateWidgetStyleContainerBase::StaticRegisterNativesUSlateWidgetStyleContainerBase()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister()
	{
		return USlateWidgetStyleContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleContainerBase.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerBase.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister, (int32)VTABLE_OFFSET(USlateWidgetStyleContainerBase, ISlateWidgetStyleContainerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleContainerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams = {
		&USlateWidgetStyleContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateWidgetStyleContainerBase, 379142420);
	template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleContainerBase>()
	{
		return USlateWidgetStyleContainerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleContainerBase(Z_Construct_UClass_USlateWidgetStyleContainerBase, &USlateWidgetStyleContainerBase::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleContainerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
