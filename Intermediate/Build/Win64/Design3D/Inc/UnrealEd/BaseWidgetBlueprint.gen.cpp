// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/BaseWidgetBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWidgetBlueprint() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
// End Cross Module References
	void UBaseWidgetBlueprint::StaticRegisterNativesUBaseWidgetBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister()
	{
		return UBaseWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/BaseWidgetBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseWidgetBlueprint.h" },
		{ "ToolTip", "A tree of the widget templates to be created" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseWidgetBlueprint, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWidgetBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseWidgetBlueprint_Statics::ClassParams = {
		&UBaseWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers), 0),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseWidgetBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseWidgetBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseWidgetBlueprint, 585916060);
	template<> UNREALED_API UClass* StaticClass<UBaseWidgetBlueprint>()
	{
		return UBaseWidgetBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseWidgetBlueprint(Z_Construct_UClass_UBaseWidgetBlueprint, &UBaseWidgetBlueprint::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UBaseWidgetBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWidgetBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
