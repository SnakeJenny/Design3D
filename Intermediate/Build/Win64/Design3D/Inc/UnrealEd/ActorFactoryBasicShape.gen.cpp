// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryBasicShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryBasicShape() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBasicShape_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBasicShape();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryBasicShape::StaticRegisterNativesUActorFactoryBasicShape()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryBasicShape_NoRegister()
	{
		return UActorFactoryBasicShape::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryBasicShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryBasicShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryBasicShape.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryBasicShape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryBasicShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryBasicShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryBasicShape_Statics::ClassParams = {
		&UActorFactoryBasicShape::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryBasicShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryBasicShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryBasicShape, 3765405454);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryBasicShape>()
	{
		return UActorFactoryBasicShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryBasicShape(Z_Construct_UClass_UActorFactoryBasicShape, &UActorFactoryBasicShape::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryBasicShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryBasicShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
