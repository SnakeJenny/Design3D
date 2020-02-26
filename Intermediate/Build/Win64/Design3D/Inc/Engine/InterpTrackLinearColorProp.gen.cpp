// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackLinearColorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackLinearColorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackLinearColorProp::StaticRegisterNativesUInterpTrackLinearColorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackLinearColorProp_NoRegister()
	{
		return UInterpTrackLinearColorProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackLinearColorProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackLinearColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "LinearColor Property Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackLinearColorProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "InterpTrackLinearColorProp" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorProp.h" },
		{ "ToolTip", "Name of property in Group  AActor  which this track mill modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackLinearColorProp, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::NewProp_PropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackLinearColorProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::ClassParams = {
		&UInterpTrackLinearColorProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackLinearColorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackLinearColorProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackLinearColorProp, 1020568896);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackLinearColorProp>()
	{
		return UInterpTrackLinearColorProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackLinearColorProp(Z_Construct_UClass_UInterpTrackLinearColorProp, &UInterpTrackLinearColorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackLinearColorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackLinearColorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
