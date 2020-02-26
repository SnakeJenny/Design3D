// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MakeNoise() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MakeNoise::StaticRegisterNativesUBTTask_MakeNoise()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister()
	{
		return UBTTask_MakeNoise::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MakeNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudnes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudnes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MakeNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ToolTip", "Make Noise task node.\nA task node that calls MakeNoise() on this Pawn when executed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ToolTip", "Loudnes of generated noise" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes = { "Loudnes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_MakeNoise, Loudnes), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MakeNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MakeNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MakeNoise_Statics::ClassParams = {
		&UBTTask_MakeNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MakeNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MakeNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MakeNoise, 3285838033);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_MakeNoise>()
	{
		return UBTTask_MakeNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MakeNoise(Z_Construct_UClass_UBTTask_MakeNoise, &UBTTask_MakeNoise::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_MakeNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MakeNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
