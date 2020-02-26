// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_GetArrayItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetArrayItem() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetArrayItem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetArrayItem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetArrayItem::StaticRegisterNativesUK2Node_GetArrayItem()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetArrayItem_NoRegister()
	{
		return UK2Node_GetArrayItem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetArrayItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReturnByRefDesired_MetaData[];
#endif
		static void NewProp_bReturnByRefDesired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnByRefDesired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetArrayItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams[] = {
		{ "Category", "Utilities|Array" },
		{ "IncludePath", "K2Node_GetArrayItem.h" },
		{ "Keywords", "array" },
		{ "ModuleRelativePath", "Classes/K2Node_GetArrayItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetArrayItem.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_SetBit(void* Obj)
	{
		((UK2Node_GetArrayItem*)Obj)->bReturnByRefDesired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired = { "bReturnByRefDesired", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_GetArrayItem), &Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetArrayItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetArrayItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetArrayItem_Statics::ClassParams = {
		&UK2Node_GetArrayItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetArrayItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetArrayItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetArrayItem, 3885693918);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetArrayItem>()
	{
		return UK2Node_GetArrayItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetArrayItem(Z_Construct_UClass_UK2Node_GetArrayItem, &UK2Node_GetArrayItem::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetArrayItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetArrayItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
