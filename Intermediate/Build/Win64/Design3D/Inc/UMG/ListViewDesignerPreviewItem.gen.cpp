// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Private/Blueprint/ListViewDesignerPreviewItem.h"
#include "UMG/Public/Components/ListView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListViewDesignerPreviewItem() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UListViewDesignerPreviewItem::StaticRegisterNativesUListViewDesignerPreviewItem()
	{
	}
	UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister()
	{
		return UListViewDesignerPreviewItem::StaticClass();
	}
	struct Z_Construct_UClass_UListViewDesignerPreviewItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ModuleRelativePath", "Private/Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ToolTip", "Empty dummy UObject used as the table view item during design time\nAllows rough design-time previewing of how list contents will lay out" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListViewDesignerPreviewItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams = {
		&UListViewDesignerPreviewItem::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListViewDesignerPreviewItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UListViewDesignerPreviewItem, 340451671);
	template<> UMG_API UClass* StaticClass<UListViewDesignerPreviewItem>()
	{
		return UListViewDesignerPreviewItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UListViewDesignerPreviewItem(Z_Construct_UClass_UListViewDesignerPreviewItem, &UListViewDesignerPreviewItem::StaticClass, TEXT("/Script/UMG"), TEXT("UListViewDesignerPreviewItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListViewDesignerPreviewItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
