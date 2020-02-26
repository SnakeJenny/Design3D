// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerInterface() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void USlateWidgetStyleContainerInterface::StaticRegisterNativesUSlateWidgetStyleContainerInterface()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister()
	{
		return USlateWidgetStyleContainerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISlateWidgetStyleContainerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::ClassParams = {
		&USlateWidgetStyleContainerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateWidgetStyleContainerInterface, 2363783884);
	template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleContainerInterface>()
	{
		return USlateWidgetStyleContainerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleContainerInterface(Z_Construct_UClass_USlateWidgetStyleContainerInterface, &USlateWidgetStyleContainerInterface::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleContainerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
