// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PreviewMeshProvider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_PreviewMeshProvider::StaticRegisterNativesUInterface_PreviewMeshProvider()
	{
	}
	UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister()
	{
		return UInterface_PreviewMeshProvider::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_PreviewMeshProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_PreviewMeshProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams = {
		&UInterface_PreviewMeshProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface_PreviewMeshProvider, 3872040030);
	template<> ENGINE_API UClass* StaticClass<UInterface_PreviewMeshProvider>()
	{
		return UInterface_PreviewMeshProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_PreviewMeshProvider(Z_Construct_UClass_UInterface_PreviewMeshProvider, &UInterface_PreviewMeshProvider::StaticClass, TEXT("/Script/Engine"), TEXT("UInterface_PreviewMeshProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PreviewMeshProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
