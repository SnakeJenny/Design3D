// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter_Classes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Classes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInterpFilter_Classes::StaticRegisterNativesUInterpFilter_Classes()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister()
	{
		return UInterpFilter_Classes::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Classes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToFilterBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToFilterBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Classes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter_Classes.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
		{ "ToolTip", "List of allowed track classes.  If empty, then all track classes will be included.  Only groups that\n              contain at least one of these types of tracks will be displayed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses = { "TrackClasses", nullptr, (EPropertyFlags)0x0014000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Classes, TrackClasses), METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_Inner = { "TrackClasses", nullptr, (EPropertyFlags)0x0004000800000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
		{ "ToolTip", "Which class to filter groups by." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy = { "ClassToFilterBy", nullptr, (EPropertyFlags)0x0014000800000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Classes, ClassToFilterBy), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Classes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter_Classes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Classes_Statics::ClassParams = {
		&UInterpFilter_Classes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter_Classes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpFilter_Classes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpFilter_Classes, 3461408638);
	template<> ENGINE_API UClass* StaticClass<UInterpFilter_Classes>()
	{
		return UInterpFilter_Classes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter_Classes(Z_Construct_UClass_UInterpFilter_Classes, &UInterpFilter_Classes::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter_Classes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Classes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
