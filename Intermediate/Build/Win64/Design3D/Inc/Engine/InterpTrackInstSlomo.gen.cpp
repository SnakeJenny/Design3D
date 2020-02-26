// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstSlomo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstSlomo::StaticRegisterNativesUInterpTrackInstSlomo()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister()
	{
		return UInterpTrackInstSlomo::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstSlomo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldTimeDilation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstSlomo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstSlomo.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
		{ "ToolTip", "Backup of initial LevelInfo MatineeTimeDilation setting when interpolation started." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation = { "OldTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstSlomo, OldTimeDilation), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstSlomo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstSlomo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstSlomo_Statics::ClassParams = {
		&UInterpTrackInstSlomo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstSlomo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstSlomo, 866200143);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstSlomo>()
	{
		return UInterpTrackInstSlomo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstSlomo(Z_Construct_UClass_UInterpTrackInstSlomo, &UInterpTrackInstSlomo::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstSlomo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstSlomo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
