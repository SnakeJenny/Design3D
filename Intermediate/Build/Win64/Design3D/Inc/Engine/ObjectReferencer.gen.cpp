// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ObjectReferencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UObjectReferencer::StaticRegisterNativesUObjectReferencer()
	{
	}
	UClass* Z_Construct_UClass_UObjectReferencer_NoRegister()
	{
		return UObjectReferencer::StaticClass();
	}
	struct Z_Construct_UClass_UObjectReferencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectReferencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ObjectReferencer.h" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "Category", "ObjectReferencer" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
		{ "ToolTip", "Array of objects being referenced." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectReferencer, ReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReferencer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectReferencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReferencer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectReferencer_Statics::ClassParams = {
		&UObjectReferencer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectReferencer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectReferencer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectReferencer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectReferencer, 1060522964);
	template<> ENGINE_API UClass* StaticClass<UObjectReferencer>()
	{
		return UObjectReferencer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectReferencer(Z_Construct_UClass_UObjectReferencer, &UObjectReferencer::StaticClass, TEXT("/Script/Engine"), TEXT("UObjectReferencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReferencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
