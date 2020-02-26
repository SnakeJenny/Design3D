// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DynamicBlueprintBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicBlueprintBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDynamicBlueprintBinding::StaticRegisterNativesUDynamicBlueprintBinding()
	{
	}
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister()
	{
		return UDynamicBlueprintBinding::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicBlueprintBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicBlueprintBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DynamicBlueprintBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/DynamicBlueprintBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicBlueprintBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicBlueprintBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams = {
		&UDynamicBlueprintBinding::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicBlueprintBinding, 3710349337);
	template<> ENGINE_API UClass* StaticClass<UDynamicBlueprintBinding>()
	{
		return UDynamicBlueprintBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicBlueprintBinding(Z_Construct_UClass_UDynamicBlueprintBinding, &UDynamicBlueprintBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UDynamicBlueprintBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicBlueprintBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
