// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AimOffsetBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister()
	{
		return UAimOffsetBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Animation/AimOffsetBlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/AimOffsetBlendSpace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams = {
		&UAimOffsetBlendSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimOffsetBlendSpace, 2281339933);
	template<> ENGINE_API UClass* StaticClass<UAimOffsetBlendSpace>()
	{
		return UAimOffsetBlendSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetBlendSpace(Z_Construct_UClass_UAimOffsetBlendSpace, &UAimOffsetBlendSpace::StaticClass, TEXT("/Script/Engine"), TEXT("UAimOffsetBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
