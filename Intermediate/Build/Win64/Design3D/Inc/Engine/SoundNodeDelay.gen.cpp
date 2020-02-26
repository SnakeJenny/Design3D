// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDelay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDelay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDelay();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDelay::StaticRegisterNativesUSoundNodeDelay()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDelay_NoRegister()
	{
		return USoundNodeDelay::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDelay_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Delay" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDelay.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
		{ "ToolTip", "Defines a delay" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMax_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
		{ "ToolTip", "The upper bound of delay time in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMax = { "DelayMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeDelay, DelayMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMin_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
		{ "ToolTip", "The lower bound of delay time in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMin = { "DelayMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeDelay, DelayMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDelay_Statics::NewProp_DelayMin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDelay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDelay_Statics::ClassParams = {
		&USoundNodeDelay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDelay_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeDelay_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDelay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDelay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeDelay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeDelay, 1201816441);
	template<> ENGINE_API UClass* StaticClass<USoundNodeDelay>()
	{
		return USoundNodeDelay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDelay(Z_Construct_UClass_USoundNodeDelay, &USoundNodeDelay::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDelay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDelay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
