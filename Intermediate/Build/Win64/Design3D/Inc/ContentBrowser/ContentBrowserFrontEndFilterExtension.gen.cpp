// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowser/Public/ContentBrowserFrontEndFilterExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserFrontEndFilterExtension() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	void UContentBrowserFrontEndFilterExtension::StaticRegisterNativesUContentBrowserFrontEndFilterExtension()
	{
	}
	UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister()
	{
		return UContentBrowserFrontEndFilterExtension::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserFrontEndFilterExtension.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserFrontEndFilterExtension.h" },
		{ "ToolTip", "Override this class in order to make an additional front-end filter available in the Content Browser" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserFrontEndFilterExtension>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::ClassParams = {
		&UContentBrowserFrontEndFilterExtension::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContentBrowserFrontEndFilterExtension, 4271568008);
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserFrontEndFilterExtension>()
	{
		return UContentBrowserFrontEndFilterExtension::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContentBrowserFrontEndFilterExtension(Z_Construct_UClass_UContentBrowserFrontEndFilterExtension, &UContentBrowserFrontEndFilterExtension::StaticClass, TEXT("/Script/ContentBrowser"), TEXT("UContentBrowserFrontEndFilterExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserFrontEndFilterExtension);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
