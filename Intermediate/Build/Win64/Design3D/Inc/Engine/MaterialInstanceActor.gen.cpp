// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstanceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AMaterialInstanceActor::StaticRegisterNativesAMaterialInstanceActor()
	{
	}
	UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister()
	{
		return AMaterialInstanceActor::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialInstanceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialInstanceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Movement Advanced Collision Display Actor Attachment" },
		{ "IncludePath", "Materials/MaterialInstanceActor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData[] = {
		{ "Category", "MaterialInstanceActor" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
		{ "ToolTip", "Pointer to actors that we want to control paramters of using Matinee." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialInstanceActor, TargetActors), METADATA_PARAMS(Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialInstanceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialInstanceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams = {
		&AMaterialInstanceActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaterialInstanceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaterialInstanceActor, 3557607974);
	template<> ENGINE_API UClass* StaticClass<AMaterialInstanceActor>()
	{
		return AMaterialInstanceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaterialInstanceActor(Z_Construct_UClass_AMaterialInstanceActor, &AMaterialInstanceActor::StaticClass, TEXT("/Script/Engine"), TEXT("AMaterialInstanceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialInstanceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
