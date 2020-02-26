// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVectorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackVectorProp::StaticRegisterNativesUInterpTrackVectorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackVectorProp_NoRegister()
	{
		return UInterpTrackVectorProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVectorProp_Statics
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
	UObject* (*const Z_Construct_UClass_UInterpTrackVectorProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorProp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Property Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVectorProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorProp_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "InterpTrackVectorProp" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorProp.h" },
		{ "ToolTip", "Name of property in Group  AActor  which this track mill modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackVectorProp_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorProp, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorProp_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorProp_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVectorProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorProp_Statics::NewProp_PropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVectorProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVectorProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVectorProp_Statics::ClassParams = {
		&UInterpTrackVectorProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVectorProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorProp_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVectorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackVectorProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackVectorProp, 3564394563);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVectorProp>()
	{
		return UInterpTrackVectorProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackVectorProp(Z_Construct_UClass_UInterpTrackVectorProp, &UInterpTrackVectorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackVectorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
