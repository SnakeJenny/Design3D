// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Tests/TextPropertyTestObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextPropertyTestObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject()
	{
	}
	UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UTextPropertyTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransientText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TransientText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndefaultedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UndefaultedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultedText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextPropertyTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TextPropertyTestObject.h" },
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText = { "TransientText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextPropertyTestObject, TransientText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText = { "UndefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextPropertyTestObject, UndefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText = { "DefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextPropertyTestObject, DefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextPropertyTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextPropertyTestObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams = {
		&UTextPropertyTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextPropertyTestObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextPropertyTestObject, 3288764815);
	template<> ENGINE_API UClass* StaticClass<UTextPropertyTestObject>()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextPropertyTestObject(Z_Construct_UClass_UTextPropertyTestObject, &UTextPropertyTestObject::StaticClass, TEXT("/Script/Engine"), TEXT("UTextPropertyTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextPropertyTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
