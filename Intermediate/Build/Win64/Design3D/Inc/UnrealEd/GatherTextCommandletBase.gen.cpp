// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GatherTextCommandletBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextCommandletBase() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextCommandletBase::StaticRegisterNativesUGatherTextCommandletBase()
	{
	}
	UClass* Z_Construct_UClass_UGatherTextCommandletBase_NoRegister()
	{
		return UGatherTextCommandletBase::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextCommandletBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextCommandletBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GatherTextCommandletBase.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextCommandletBase.h" },
		{ "ToolTip", "UGatherTextCommandletBase: Base class for localization commandlets. Just to force certain behaviors and provide helper functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextCommandletBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextCommandletBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextCommandletBase_Statics::ClassParams = {
		&UGatherTextCommandletBase::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGatherTextCommandletBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextCommandletBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGatherTextCommandletBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGatherTextCommandletBase, 1030852588);
	template<> UNREALED_API UClass* StaticClass<UGatherTextCommandletBase>()
	{
		return UGatherTextCommandletBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGatherTextCommandletBase(Z_Construct_UClass_UGatherTextCommandletBase, &UGatherTextCommandletBase::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGatherTextCommandletBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextCommandletBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
