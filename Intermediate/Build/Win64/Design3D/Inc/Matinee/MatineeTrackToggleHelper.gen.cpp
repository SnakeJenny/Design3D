// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/MatineeTrackToggleHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackToggleHelper() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackToggleHelper_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackToggleHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_Matinee();
// End Cross Module References
	void UMatineeTrackToggleHelper::StaticRegisterNativesUMatineeTrackToggleHelper()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackToggleHelper_NoRegister()
	{
		return UMatineeTrackToggleHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeTrackToggleHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatineeTrackToggleHelper.h" },
		{ "ModuleRelativePath", "Classes/MatineeTrackToggleHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeTrackToggleHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::ClassParams = {
		&UMatineeTrackToggleHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeTrackToggleHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeTrackToggleHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackToggleHelper, 2606979939);
	template<> MATINEE_API UClass* StaticClass<UMatineeTrackToggleHelper>()
	{
		return UMatineeTrackToggleHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackToggleHelper(Z_Construct_UClass_UMatineeTrackToggleHelper, &UMatineeTrackToggleHelper::StaticClass, TEXT("/Script/Matinee"), TEXT("UMatineeTrackToggleHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackToggleHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
