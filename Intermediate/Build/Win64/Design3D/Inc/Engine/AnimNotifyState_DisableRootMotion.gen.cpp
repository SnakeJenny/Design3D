// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DisableRootMotion() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotifyState_DisableRootMotion::StaticRegisterNativesUAnimNotifyState_DisableRootMotion()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister()
	{
		return UAnimNotifyState_DisableRootMotion::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Disable Root Motion" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DisableRootMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::ClassParams = {
		&UAnimNotifyState_DisableRootMotion::StaticClass,
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
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_DisableRootMotion, 1553622607);
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState_DisableRootMotion>()
	{
		return UAnimNotifyState_DisableRootMotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_DisableRootMotion(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion, &UAnimNotifyState_DisableRootMotion::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState_DisableRootMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DisableRootMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
