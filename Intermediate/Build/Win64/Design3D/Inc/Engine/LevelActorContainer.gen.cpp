// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelActorContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelActorContainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULevelActorContainer::StaticRegisterNativesULevelActorContainer()
	{
	}
	UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister()
	{
		return ULevelActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_ULevelActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelActorContainer.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Root object for all level actors" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Array of actors in a level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelActorContainer, Actors), METADATA_PARAMS(Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelActorContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams = {
		&ULevelActorContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelActorContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelActorContainer, 2848151658);
	template<> ENGINE_API UClass* StaticClass<ULevelActorContainer>()
	{
		return ULevelActorContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelActorContainer(Z_Construct_UClass_ULevelActorContainer, &ULevelActorContainer::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelActorContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelActorContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
