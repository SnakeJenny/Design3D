// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/InterpTrackHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackHelper() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Matinee();
// End Cross Module References
	void UInterpTrackHelper::StaticRegisterNativesUInterpTrackHelper()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackHelper_NoRegister()
	{
		return UInterpTrackHelper::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterpTrackHelper.h" },
		{ "ModuleRelativePath", "Classes/InterpTrackHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackHelper_Statics::ClassParams = {
		&UInterpTrackHelper::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackHelper, 2711605195);
	template<> MATINEE_API UClass* StaticClass<UInterpTrackHelper>()
	{
		return UInterpTrackHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackHelper(Z_Construct_UClass_UInterpTrackHelper, &UInterpTrackHelper::StaticClass, TEXT("/Script/Matinee"), TEXT("UInterpTrackHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
