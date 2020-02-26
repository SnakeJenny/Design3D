// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryEmptyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryEmptyActor() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryEmptyActor::StaticRegisterNativesUActorFactoryEmptyActor()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister()
	{
		return UActorFactoryEmptyActor::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryEmptyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeActor_MetaData[];
#endif
		static void NewProp_bVisualizeActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryEmptyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryEmptyActor.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryEmptyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryEmptyActor.h" },
		{ "ToolTip", "If true a sprite will be added to visualize the actor in the world" },
	};
#endif
	void Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_SetBit(void* Obj)
	{
		((UActorFactoryEmptyActor*)Obj)->bVisualizeActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor = { "bVisualizeActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorFactoryEmptyActor), &Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryEmptyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryEmptyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryEmptyActor_Statics::ClassParams = {
		&UActorFactoryEmptyActor::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers),
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryEmptyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryEmptyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryEmptyActor, 1982235297);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryEmptyActor>()
	{
		return UActorFactoryEmptyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryEmptyActor(Z_Construct_UClass_UActorFactoryEmptyActor, &UActorFactoryEmptyActor::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryEmptyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryEmptyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
