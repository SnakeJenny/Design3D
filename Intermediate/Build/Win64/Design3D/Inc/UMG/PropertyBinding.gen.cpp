// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/PropertyBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UPropertyBinding::StaticRegisterNativesUPropertyBinding()
	{
	}
	UClass* Z_Construct_UClass_UPropertyBinding_NoRegister()
	{
		return UPropertyBinding::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DestinationProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/PropertyBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "Used to determine if a binding already exists on the object and if this binding can be safely removed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty = { "DestinationProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyBinding, DestinationProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The property path to trace to resolve this binding on the Source Object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The source object to use as the initial container to resolve the Source Property Path on." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyBinding, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBinding_Statics::ClassParams = {
		&UPropertyBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyBinding, 3394864193);
	template<> UMG_API UClass* StaticClass<UPropertyBinding>()
	{
		return UPropertyBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyBinding(Z_Construct_UClass_UPropertyBinding, &UPropertyBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UPropertyBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
