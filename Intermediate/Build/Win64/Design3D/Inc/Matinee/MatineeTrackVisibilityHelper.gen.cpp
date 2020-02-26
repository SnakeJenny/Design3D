// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/MatineeTrackVisibilityHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackVisibilityHelper() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackVisibilityHelper_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackVisibilityHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_Matinee();
// End Cross Module References
	void UMatineeTrackVisibilityHelper::StaticRegisterNativesUMatineeTrackVisibilityHelper()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackVisibilityHelper_NoRegister()
	{
		return UMatineeTrackVisibilityHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatineeTrackVisibilityHelper.h" },
		{ "ModuleRelativePath", "Classes/MatineeTrackVisibilityHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeTrackVisibilityHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::ClassParams = {
		&UMatineeTrackVisibilityHelper::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeTrackVisibilityHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeTrackVisibilityHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackVisibilityHelper, 2604727084);
	template<> MATINEE_API UClass* StaticClass<UMatineeTrackVisibilityHelper>()
	{
		return UMatineeTrackVisibilityHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackVisibilityHelper(Z_Construct_UClass_UMatineeTrackVisibilityHelper, &UMatineeTrackVisibilityHelper::StaticClass, TEXT("/Script/Matinee"), TEXT("UMatineeTrackVisibilityHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackVisibilityHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
