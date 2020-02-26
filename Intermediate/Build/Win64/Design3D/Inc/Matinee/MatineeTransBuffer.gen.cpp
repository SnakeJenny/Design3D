// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/MatineeTransBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTransBuffer() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTransBuffer_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTransBuffer();
	UNREALED_API UClass* Z_Construct_UClass_UTransBuffer();
	UPackage* Z_Construct_UPackage__Script_Matinee();
// End Cross Module References
	void UMatineeTransBuffer::StaticRegisterNativesUMatineeTransBuffer()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTransBuffer_NoRegister()
	{
		return UMatineeTransBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeTransBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeTransBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransBuffer,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeTransBuffer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatineeTransBuffer.h" },
		{ "ModuleRelativePath", "Classes/MatineeTransBuffer.h" },
		{ "ToolTip", "Special transaction buffer for Matinee undo/redo.\nWill be capped at InMaxMemory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeTransBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeTransBuffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeTransBuffer_Statics::ClassParams = {
		&UMatineeTransBuffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatineeTransBuffer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMatineeTransBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeTransBuffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeTransBuffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTransBuffer, 830166647);
	template<> MATINEE_API UClass* StaticClass<UMatineeTransBuffer>()
	{
		return UMatineeTransBuffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTransBuffer(Z_Construct_UClass_UMatineeTransBuffer, &UMatineeTransBuffer::StaticClass, TEXT("/Script/Matinee"), TEXT("UMatineeTransBuffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTransBuffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
