// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeMeshProxyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
// End Cross Module References
	void ALandscapeMeshProxyActor::StaticRegisterNativesALandscapeMeshProxyActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister()
	{
		return ALandscapeMeshProxyActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeMeshProxyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMeshProxyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMeshProxyComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeMeshProxyActor.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LandscapeMeshProxyActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent = { "LandscapeMeshProxyComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent), Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeMeshProxyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::ClassParams = {
		&ALandscapeMeshProxyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeMeshProxyActor, 122396119);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeMeshProxyActor>()
	{
		return ALandscapeMeshProxyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeMeshProxyActor(Z_Construct_UClass_ALandscapeMeshProxyActor, &ALandscapeMeshProxyActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeMeshProxyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeMeshProxyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
