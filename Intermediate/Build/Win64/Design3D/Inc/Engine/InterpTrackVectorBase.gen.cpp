// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVectorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	void UInterpTrackVectorBase::StaticRegisterNativesUInterpTrackVectorBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister()
	{
		return UInterpTrackVectorBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVectorBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackVectorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVectorBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackVectorBase" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack = { "VectorTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorBase, VectorTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVectorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVectorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::ClassParams = {
		&UInterpTrackVectorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers),
		0,
		0x001020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVectorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackVectorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackVectorBase, 2386906638);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVectorBase>()
	{
		return UInterpTrackVectorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVectorBase(Z_Construct_UClass_UInterpTrackVectorBase, &UInterpTrackVectorBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVectorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
