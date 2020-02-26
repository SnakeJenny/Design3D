// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/NativeCodeGenCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeCodeGenCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UNativeCodeGenCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UNativeCodeGenCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UNativeCodeGenCommandlet::StaticRegisterNativesUNativeCodeGenCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UNativeCodeGenCommandlet_NoRegister()
	{
		return UNativeCodeGenCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UNativeCodeGenCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NativeCodeGenCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/NativeCodeGenCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeCodeGenCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::ClassParams = {
		&UNativeCodeGenCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNativeCodeGenCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNativeCodeGenCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNativeCodeGenCommandlet, 1112988675);
	template<> UNREALED_API UClass* StaticClass<UNativeCodeGenCommandlet>()
	{
		return UNativeCodeGenCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNativeCodeGenCommandlet(Z_Construct_UClass_UNativeCodeGenCommandlet, &UNativeCodeGenCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UNativeCodeGenCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeCodeGenCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
