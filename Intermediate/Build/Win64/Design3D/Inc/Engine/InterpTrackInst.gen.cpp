// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInst::StaticRegisterNativesUInterpTrackInst()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister()
	{
		return UInterpTrackInst::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInst_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInst.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInst.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInst_Statics::ClassParams = {
		&UInterpTrackInst::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInst_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInst, 1314765590);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInst>()
	{
		return UInterpTrackInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInst(Z_Construct_UClass_UInterpTrackInst, &UInterpTrackInst::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
