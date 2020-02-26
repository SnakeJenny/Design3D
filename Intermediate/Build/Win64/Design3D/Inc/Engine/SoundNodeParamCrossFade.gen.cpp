// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeParamCrossFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister()
	{
		return USoundNodeParamCrossFade::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeParamCrossFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNodeDistanceCrossFade,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Crossfade by Param" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeParamCrossFade.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Crossfades between different sounds based on a parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "CrossFade" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Parameter controlling cross fades." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeParamCrossFade, ParamName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeParamCrossFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeParamCrossFade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams = {
		&USoundNodeParamCrossFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeParamCrossFade, 1313499671);
	template<> ENGINE_API UClass* StaticClass<USoundNodeParamCrossFade>()
	{
		return USoundNodeParamCrossFade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeParamCrossFade(Z_Construct_UClass_USoundNodeParamCrossFade, &USoundNodeParamCrossFade::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeParamCrossFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeParamCrossFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
