// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter_Custom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Custom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpFilter_Custom::StaticRegisterNativesUInterpFilter_Custom()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister()
	{
		return UInterpFilter_Custom::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Custom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToInclude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupsToInclude;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupsToInclude_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Custom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter_Custom.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
		{ "ToolTip", "Which groups are included in this filter." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Custom, GroupsToInclude), METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_Inner = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_Inner,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Custom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter_Custom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Custom_Statics::ClassParams = {
		&UInterpFilter_Custom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers), 0),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter_Custom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpFilter_Custom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpFilter_Custom, 1103486531);
	template<> ENGINE_API UClass* StaticClass<UInterpFilter_Custom>()
	{
		return UInterpFilter_Custom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter_Custom(Z_Construct_UClass_UInterpFilter_Custom, &UInterpFilter_Custom::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter_Custom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Custom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
