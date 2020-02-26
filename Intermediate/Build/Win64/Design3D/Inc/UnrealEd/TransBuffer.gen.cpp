// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/TransBuffer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransBuffer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTransBuffer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTransBuffer();
	UNREALED_API UClass* Z_Construct_UClass_UTransactor();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTransBuffer::StaticRegisterNativesUTransBuffer()
	{
	}
	UClass* Z_Construct_UClass_UTransBuffer_NoRegister()
	{
		return UTransBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UTransBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransactor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/TransBuffer.h" },
		{ "ModuleRelativePath", "Classes/Editor/TransBuffer.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransBuffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransBuffer_Statics::ClassParams = {
		&UTransBuffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransBuffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransBuffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransBuffer, 1765061619);
	template<> UNREALED_API UClass* StaticClass<UTransBuffer>()
	{
		return UTransBuffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransBuffer(Z_Construct_UClass_UTransBuffer, &UTransBuffer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTransBuffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransBuffer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTransBuffer)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
