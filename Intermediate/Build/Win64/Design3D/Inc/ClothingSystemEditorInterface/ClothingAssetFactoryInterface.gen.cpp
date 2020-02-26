// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemEditorInterface/Public/ClothingAssetFactoryInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetFactoryInterface() {}
// Cross Module References
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase_NoRegister();
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemEditorInterface();
// End Cross Module References
	void UClothingAssetFactoryBase::StaticRegisterNativesUClothingAssetFactoryBase()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetFactoryBase_NoRegister()
	{
		return UClothingAssetFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemEditorInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothingAssetFactoryInterface.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetFactoryInterface.h" },
		{ "ToolTip", "Clothing asset factories should inherit this interface/uobject to provide functionality\nto build clothing assets from .apx files imported to the engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetFactoryBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetFactoryBase_Statics::ClassParams = {
		&UClothingAssetFactoryBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetFactoryBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetFactoryBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetFactoryBase, 2138377258);
	template<> CLOTHINGSYSTEMEDITORINTERFACE_API UClass* StaticClass<UClothingAssetFactoryBase>()
	{
		return UClothingAssetFactoryBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetFactoryBase(Z_Construct_UClass_UClothingAssetFactoryBase, &UClothingAssetFactoryBase::StaticClass, TEXT("/Script/ClothingSystemEditorInterface"), TEXT("UClothingAssetFactoryBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetFactoryBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
