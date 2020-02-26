// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstFloatAnimBPParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatAnimBPParam::StaticRegisterNativesUInterpTrackInstFloatAnimBPParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackInstFloatAnimBPParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScriptInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimScriptInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat = { "ResetFloat", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, ResetFloat), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ToolTip", "MIDs we're using to set the desired parameter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance = { "AnimScriptInstance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, AnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstFloatAnimBPParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::ClassParams = {
		&UInterpTrackInstFloatAnimBPParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstFloatAnimBPParam, 3816995291);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstFloatAnimBPParam>()
	{
		return UInterpTrackInstFloatAnimBPParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatAnimBPParam(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam, &UInterpTrackInstFloatAnimBPParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatAnimBPParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatAnimBPParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
