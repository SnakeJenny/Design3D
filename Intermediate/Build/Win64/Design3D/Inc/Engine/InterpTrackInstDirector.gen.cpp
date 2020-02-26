// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UInterpTrackInstDirector::StaticRegisterNativesUInterpTrackInstDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister()
	{
		return UInterpTrackInstDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldViewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget = { "OldViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstDirector, OldViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstDirector_Statics::ClassParams = {
		&UInterpTrackInstDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstDirector, 4040897964);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstDirector>()
	{
		return UInterpTrackInstDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstDirector(Z_Construct_UClass_UInterpTrackInstDirector, &UInterpTrackInstDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
