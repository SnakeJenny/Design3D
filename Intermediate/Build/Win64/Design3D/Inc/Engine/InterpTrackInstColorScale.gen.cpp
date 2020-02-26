// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstColorScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstColorScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorScale();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstColorScale::StaticRegisterNativesUInterpTrackInstColorScale()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstColorScale_NoRegister()
	{
		return UInterpTrackInstColorScale::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstColorScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstColorScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstColorScale.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorScale.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstColorScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstColorScale>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstColorScale_Statics::ClassParams = {
		&UInterpTrackInstColorScale::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstColorScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstColorScale_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstColorScale, 920803003);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstColorScale>()
	{
		return UInterpTrackInstColorScale::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstColorScale(Z_Construct_UClass_UInterpTrackInstColorScale, &UInterpTrackInstColorScale::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstColorScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstColorScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
