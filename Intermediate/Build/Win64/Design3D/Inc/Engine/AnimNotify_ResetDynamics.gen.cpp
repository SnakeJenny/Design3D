// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify_ResetDynamics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetDynamics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_ResetDynamics::StaticRegisterNativesUAnimNotify_ResetDynamics()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister()
	{
		return UAnimNotify_ResetDynamics::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reset Dynamics" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResetDynamics.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResetDynamics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResetDynamics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::ClassParams = {
		&UAnimNotify_ResetDynamics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_ResetDynamics, 1677281473);
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_ResetDynamics>()
	{
		return UAnimNotify_ResetDynamics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_ResetDynamics(Z_Construct_UClass_UAnimNotify_ResetDynamics, &UAnimNotify_ResetDynamics::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_ResetDynamics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResetDynamics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
