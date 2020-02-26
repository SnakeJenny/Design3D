// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeStreamingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeStreamingProxy() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
// End Cross Module References
	void ALandscapeStreamingProxy::StaticRegisterNativesALandscapeStreamingProxy()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister()
	{
		return ALandscapeStreamingProxy::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug LOD Mobility" },
		{ "IncludePath", "LandscapeStreamingProxy.h" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData[] = {
		{ "Category", "LandscapeProxy" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeStreamingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeStreamingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams = {
		&ALandscapeStreamingProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers),
		0,
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeStreamingProxy, 1357843337);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeStreamingProxy>()
	{
		return ALandscapeStreamingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeStreamingProxy(Z_Construct_UClass_ALandscapeStreamingProxy, &ALandscapeStreamingProxy::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeStreamingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeStreamingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
