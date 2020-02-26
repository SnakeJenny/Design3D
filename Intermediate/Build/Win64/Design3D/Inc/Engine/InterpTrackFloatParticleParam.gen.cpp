// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatParticleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatParticleParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackFloatParticleParam::StaticRegisterNativesUInterpTrackFloatParticleParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister()
	{
		return UInterpTrackFloatParticleParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Float Particle Param Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatParticleParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackFloatParticleParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
		{ "ToolTip", "Name of property in the Emitter which this track mill modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatParticleParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatParticleParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::ClassParams = {
		&UInterpTrackFloatParticleParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackFloatParticleParam, 2188359919);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatParticleParam>()
	{
		return UInterpTrackFloatParticleParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatParticleParam(Z_Construct_UClass_UInterpTrackFloatParticleParam, &UInterpTrackFloatParticleParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatParticleParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatParticleParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
