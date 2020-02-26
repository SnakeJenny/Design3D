// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
// End Cross Module References
	void UInterpTrackFloatBase::StaticRegisterNativesUInterpTrackFloatBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister()
	{
		return UInterpTrackFloatBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackFloatBase" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of float as it varies over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack = { "FloatTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatBase, FloatTrack), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::ClassParams = {
		&UInterpTrackFloatBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers),
		0,
		0x001020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackFloatBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackFloatBase, 1544302445);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatBase>()
	{
		return UInterpTrackFloatBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatBase(Z_Construct_UClass_UInterpTrackFloatBase, &UInterpTrackFloatBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
