// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PacketHandlers/EngineHandlerComponentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory()
	{
	}
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister()
	{
		return UEngineHandlerComponentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEngineHandlerComponentFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ToolTip", "Factory class for loading HandlerComponent's contained within Engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineHandlerComponentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams = {
		&UEngineHandlerComponentFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineHandlerComponentFactory, 1384153609);
	template<> ENGINE_API UClass* StaticClass<UEngineHandlerComponentFactory>()
	{
		return UEngineHandlerComponentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineHandlerComponentFactory(Z_Construct_UClass_UEngineHandlerComponentFactory, &UEngineHandlerComponentFactory::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineHandlerComponentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineHandlerComponentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
