// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackLinearColorBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackLinearColorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveLinearColor();
// End Cross Module References
	void UInterpTrackLinearColorBase::StaticRegisterNativesUInterpTrackLinearColorBase()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister()
	{
		return UInterpTrackLinearColorBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackLinearColorBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackLinearColorBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackLinearColorBase" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackLinearColorBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack = { "LinearColorTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackLinearColorBase, LinearColorTrack), Z_Construct_UScriptStruct_FInterpCurveLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackLinearColorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::ClassParams = {
		&UInterpTrackLinearColorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackLinearColorBase, 2752038112);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackLinearColorBase>()
	{
		return UInterpTrackLinearColorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackLinearColorBase(Z_Construct_UClass_UInterpTrackLinearColorBase, &UInterpTrackLinearColorBase::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackLinearColorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackLinearColorBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterpTrackLinearColorBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
