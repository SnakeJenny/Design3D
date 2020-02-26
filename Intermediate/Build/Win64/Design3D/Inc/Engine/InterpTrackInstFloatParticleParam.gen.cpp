// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstFloatParticleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatParticleParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstFloatParticleParam::StaticRegisterNativesUInterpTrackInstFloatParticleParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam_NoRegister()
	{
		return UInterpTrackInstFloatParticleParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstFloatParticleParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatParticleParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::NewProp_ResetFloat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatParticleParam.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::NewProp_ResetFloat = { "ResetFloat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatParticleParam, ResetFloat), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::NewProp_ResetFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::NewProp_ResetFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::NewProp_ResetFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstFloatParticleParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::ClassParams = {
		&UInterpTrackInstFloatParticleParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstFloatParticleParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstFloatParticleParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstFloatParticleParam, 80078842);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstFloatParticleParam>()
	{
		return UInterpTrackInstFloatParticleParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatParticleParam(Z_Construct_UClass_UInterpTrackInstFloatParticleParam, &UInterpTrackInstFloatParticleParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatParticleParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatParticleParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
