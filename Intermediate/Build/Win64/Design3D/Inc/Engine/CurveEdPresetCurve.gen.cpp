// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveEdPresetCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister()
	{
		return UDEPRECATED_CurveEdPresetCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Curves/CurveEdPresetCurve.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveEdPresetCurve.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_CurveEdPresetCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams = {
		&UDEPRECATED_CurveEdPresetCurve::StaticClass,
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
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_CurveEdPresetCurve, 3511177786);
	template<> ENGINE_API UClass* StaticClass<UDEPRECATED_CurveEdPresetCurve>()
	{
		return UDEPRECATED_CurveEdPresetCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_CurveEdPresetCurve(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve, &UDEPRECATED_CurveEdPresetCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDEPRECATED_CurveEdPresetCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_CurveEdPresetCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
