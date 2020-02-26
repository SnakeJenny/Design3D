// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacketHandler/Classes/HandlerComponentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory() {}
// Cross Module References
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References
	void UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory()
	{
	}
	UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHandlerComponentFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandlerComponentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/HandlerComponentFactory.h" },
		{ "ToolTip", "A UObject alternative for loading HandlerComponents without strict module dependency" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandlerComponentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandlerComponentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams = {
		&UHandlerComponentFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandlerComponentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHandlerComponentFactory, 2423796548);
	template<> PACKETHANDLER_API UClass* StaticClass<UHandlerComponentFactory>()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHandlerComponentFactory(Z_Construct_UClass_UHandlerComponentFactory, &UHandlerComponentFactory::StaticClass, TEXT("/Script/PacketHandler"), TEXT("UHandlerComponentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlerComponentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
