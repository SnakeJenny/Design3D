// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ActorTransformer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTransformer() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UActorTransformer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UActorTransformer();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UActorTransformer::StaticRegisterNativesUActorTransformer()
	{
	}
	UClass* Z_Construct_UClass_UActorTransformer_NoRegister()
	{
		return UActorTransformer::StaticClass();
	}
	struct Z_Construct_UClass_UActorTransformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorTransformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportTransformer,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorTransformer.h" },
		{ "ModuleRelativePath", "Public/ActorTransformer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorTransformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTransformer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorTransformer_Statics::ClassParams = {
		&UActorTransformer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorTransformer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorTransformer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorTransformer, 1365020854);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UActorTransformer>()
	{
		return UActorTransformer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorTransformer(Z_Construct_UClass_UActorTransformer, &UActorTransformer::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UActorTransformer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTransformer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
