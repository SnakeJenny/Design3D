// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeSoundClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister()
	{
		return USoundNodeSoundClass::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeSoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeSoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SoundClass" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeSoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
		{ "ToolTip", "Remaps the SoundClass of SoundWaves underneath this" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeSoundClass, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeSoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeSoundClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams = {
		&USoundNodeSoundClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeSoundClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeSoundClass, 3886873349);
	template<> ENGINE_API UClass* StaticClass<USoundNodeSoundClass>()
	{
		return USoundNodeSoundClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeSoundClass(Z_Construct_UClass_USoundNodeSoundClass, &USoundNodeSoundClass::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeSoundClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSoundClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
