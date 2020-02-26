// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/FontFaceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFaceInterface() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void UFontFaceInterface::StaticRegisterNativesUFontFaceInterface()
	{
	}
	UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister()
	{
		return UFontFaceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFontFaceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontFaceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Fonts/FontFaceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontFaceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFontFaceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams = {
		&UFontFaceInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontFaceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFontFaceInterface, 601732817);
	template<> SLATECORE_API UClass* StaticClass<UFontFaceInterface>()
	{
		return UFontFaceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontFaceInterface(Z_Construct_UClass_UFontFaceInterface, &UFontFaceInterface::StaticClass, TEXT("/Script/SlateCore"), TEXT("UFontFaceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFaceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
