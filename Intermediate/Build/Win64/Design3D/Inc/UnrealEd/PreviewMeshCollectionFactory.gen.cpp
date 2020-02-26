// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/PreviewMeshCollectionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMeshCollectionFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMeshCollectionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMeshCollectionFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	void UPreviewMeshCollectionFactory::StaticRegisterNativesUPreviewMeshCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UPreviewMeshCollectionFactory_NoRegister()
	{
		return UPreviewMeshCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PreviewMeshCollectionFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PreviewMeshCollectionFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::NewProp_CurrentSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/PreviewMeshCollectionFactory.h" },
		{ "ToolTip", "The current skeleton we are creating collections for" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::NewProp_CurrentSkeleton = { "CurrentSkeleton", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreviewMeshCollectionFactory, CurrentSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::NewProp_CurrentSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::NewProp_CurrentSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::NewProp_CurrentSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMeshCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::ClassParams = {
		&UPreviewMeshCollectionFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewMeshCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreviewMeshCollectionFactory, 2500103607);
	template<> UNREALED_API UClass* StaticClass<UPreviewMeshCollectionFactory>()
	{
		return UPreviewMeshCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreviewMeshCollectionFactory(Z_Construct_UClass_UPreviewMeshCollectionFactory, &UPreviewMeshCollectionFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPreviewMeshCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMeshCollectionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
