// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/VoiceChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVoiceChannel::StaticRegisterNativesUVoiceChannel()
	{
	}
	UClass* Z_Construct_UClass_UVoiceChannel_NoRegister()
	{
		return UVoiceChannel::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/VoiceChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/VoiceChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoiceChannel_Statics::ClassParams = {
		&UVoiceChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoiceChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceChannel, 4123838660);
	template<> ENGINE_API UClass* StaticClass<UVoiceChannel>()
	{
		return UVoiceChannel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceChannel(Z_Construct_UClass_UVoiceChannel, &UVoiceChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UVoiceChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
