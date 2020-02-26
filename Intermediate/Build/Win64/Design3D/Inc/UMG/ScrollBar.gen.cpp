// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ScrollBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBar() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UScrollBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBar_SetState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
// End Cross Module References
	void UScrollBar::StaticRegisterNativesUScrollBar()
	{
		UClass* Class = UScrollBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetState", &UScrollBar::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScrollBar_SetState_Statics
	{
		struct ScrollBar_eventSetState_Parms
		{
			float InOffsetFraction;
			float InThumbSizeFraction;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThumbSizeFraction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOffsetFraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction = { "InThumbSizeFraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InThumbSizeFraction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction = { "InOffsetFraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InOffsetFraction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scrolling" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Set the offset and size of the track's thumb.\nNote that the maximum offset is 1.0-ThumbSizeFraction.\nIf the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\n@param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n@param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBar, nullptr, "SetState", sizeof(ScrollBar_eventSetState_Parms), Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBar_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBar_NoRegister()
	{
		return UScrollBar::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbarTrack_MetaData[];
#endif
		static void NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbarTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbar_MetaData[];
#endif
		static void NewProp_bAlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScrollBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBar_SetState, "SetState" }, // 1384604993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/ScrollBar.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "The thickness of the scrollbar thumb" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBar, Thickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBar, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj)
	{
		((UScrollBar*)Obj)->bAlwaysShowScrollbarTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack = { "bAlwaysShowScrollbarTrack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit(void* Obj)
	{
		((UScrollBar*)Obj)->bAlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar = { "bAlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBar, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Style of the scrollbar" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScrollBar, WidgetStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScrollBar_Statics::ClassParams = {
		&UScrollBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScrollBar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScrollBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBar, 2256448356);
	template<> UMG_API UClass* StaticClass<UScrollBar>()
	{
		return UScrollBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBar(Z_Construct_UClass_UScrollBar, &UScrollBar::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
