// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeBranch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister()
	{
		return USoundNodeBranch::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoolParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Branch" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeBranch.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "Selects a child node based on the value of a boolean parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData[] = {
		{ "Category", "Branch" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "The name of the boolean parameter to use to determine which branch we should take" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName = { "BoolParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeBranch, BoolParameterName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams = {
		&USoundNodeBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeBranch, 321600687);
	template<> ENGINE_API UClass* StaticClass<USoundNodeBranch>()
	{
		return USoundNodeBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeBranch(Z_Construct_UClass_USoundNodeBranch, &USoundNodeBranch::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
