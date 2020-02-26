// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeConcatenator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister()
	{
		return USoundNodeConcatenator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeConcatenator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputVolume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeConcatenator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Concatenator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeConcatenator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Plays child nodes sequentially" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData[] = {
		{ "Category", "Concatenator" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Volume multiplier for each input." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume = { "InputVolume", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeConcatenator, InputVolume), METADATA_PARAMS(Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner = { "InputVolume", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeConcatenator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeConcatenator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams = {
		&USoundNodeConcatenator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeConcatenator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeConcatenator, 927647208);
	template<> ENGINE_API UClass* StaticClass<USoundNodeConcatenator>()
	{
		return USoundNodeConcatenator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeConcatenator(Z_Construct_UClass_USoundNodeConcatenator, &USoundNodeConcatenator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeConcatenator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeConcatenator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
