// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacketHandler/Classes/PacketHandlerProfileConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketHandlerProfileConfig() {}
// Cross Module References
	PACKETHANDLER_API UClass* Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UPacketHandlerProfileConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References
	void UPacketHandlerProfileConfig::StaticRegisterNativesUPacketHandlerProfileConfig()
	{
	}
	UClass* Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister()
	{
		return UPacketHandlerProfileConfig::StaticClass();
	}
	struct Z_Construct_UClass_UPacketHandlerProfileConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PacketHandlerProfileConfig.h" },
		{ "ModuleRelativePath", "Classes/PacketHandlerProfileConfig.h" },
		{ "ToolTip", "PacketHandler Configuration Profiles based on each NetDriver" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PacketHandlerProfileConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPacketHandlerProfileConfig, Components), METADATA_PARAMS(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketHandlerProfileConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::ClassParams = {
		&UPacketHandlerProfileConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers),
		0,
		0x000004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPacketHandlerProfileConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPacketHandlerProfileConfig, 2074304513);
	template<> PACKETHANDLER_API UClass* StaticClass<UPacketHandlerProfileConfig>()
	{
		return UPacketHandlerProfileConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPacketHandlerProfileConfig(Z_Construct_UClass_UPacketHandlerProfileConfig, &UPacketHandlerProfileConfig::StaticClass, TEXT("/Script/PacketHandler"), TEXT("UPacketHandlerProfileConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketHandlerProfileConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
