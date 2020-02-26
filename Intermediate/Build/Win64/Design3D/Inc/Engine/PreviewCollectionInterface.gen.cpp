// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/PreviewCollectionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewCollectionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPreviewCollectionInterface::StaticRegisterNativesUPreviewCollectionInterface()
	{
	}
	UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister()
	{
		return UPreviewCollectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewCollectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewCollectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewCollectionInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animation/PreviewCollectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewCollectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPreviewCollectionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreviewCollectionInterface_Statics::ClassParams = {
		&UPreviewCollectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPreviewCollectionInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPreviewCollectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewCollectionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreviewCollectionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreviewCollectionInterface, 1649274544);
	template<> ENGINE_API UClass* StaticClass<UPreviewCollectionInterface>()
	{
		return UPreviewCollectionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreviewCollectionInterface(Z_Construct_UClass_UPreviewCollectionInterface, &UPreviewCollectionInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UPreviewCollectionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewCollectionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
