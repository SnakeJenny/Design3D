// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileView() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UTileView_SetEntryHeight();
	UMG_API UFunction* Z_Construct_UFunction_UTileView_SetEntryWidth();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
// End Cross Module References
	void UTileView::StaticRegisterNativesUTileView()
	{
		UClass* Class = UTileView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEntryHeight", &UTileView::execSetEntryHeight },
			{ "SetEntryWidth", &UTileView::execSetEntryWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileView_SetEntryHeight_Statics
	{
		struct TileView_eventSetEntryHeight_Parms
		{
			float NewHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventSetEntryHeight_Parms, NewHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the height of every tile entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryHeight", sizeof(TileView_eventSetEntryHeight_Parms), Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_SetEntryWidth_Statics
	{
		struct TileView_eventSetEntryWidth_Parms
		{
			float NewWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventSetEntryWidth_Parms, NewWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the width if every tile entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryWidth", sizeof(TileView_eventSetEntryWidth_Parms), Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileView_NoRegister()
	{
		return UTileView::StaticClass();
	}
	struct Z_Construct_UClass_UTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapHorizontalNavigation_MetaData[];
#endif
		static void NewProp_bWrapHorizontalNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapHorizontalNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TileAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TileAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntryWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntryHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileView_SetEntryHeight, "SetEntryHeight" }, // 2478841753
		{ &Z_Construct_UFunction_UTileView_SetEntryWidth, "SetEntryWidth" }, // 1822245793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/TileView.h" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ListView that presents the contents as a set of tiles all uniformly sized." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "True to allow left/right navigation to wrap back to the tile on the opposite edge" },
	};
#endif
	void Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit(void* Obj)
	{
		((UTileView*)Obj)->bWrapHorizontalNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation = { "bWrapHorizontalNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileView), &Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The method by which to align the tile entries in the available space for the tile view" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment = { "TileAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, TileAlignment), Z_Construct_UEnum_Slate_EListItemAlignment, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The width of each tile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth = { "EntryWidth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, EntryWidth), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The height of each tile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight = { "EntryHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, EntryHeight), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileView_Statics::ClassParams = {
		&UTileView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTileView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileView, 2821562099);
	template<> UMG_API UClass* StaticClass<UTileView>()
	{
		return UTileView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileView(Z_Construct_UClass_UTileView, &UTileView::StaticClass, TEXT("/Script/UMG"), TEXT("UTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
