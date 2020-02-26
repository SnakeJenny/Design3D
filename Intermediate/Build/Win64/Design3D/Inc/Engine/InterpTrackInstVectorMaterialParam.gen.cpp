// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstVectorMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVectorMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveMaterialRef();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UInterpTrackInstVectorMaterialParam::StaticRegisterNativesUInterpTrackInstVectorMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_NoRegister()
	{
		return UInterpTrackInstVectorMaterialParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialRefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimitiveMaterialRefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimitiveMaterialRefs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetVectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResetVectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetVectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstVectorMaterialParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_InstancedTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
		{ "ToolTip", "Track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_InstancedTrack = { "InstancedTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, InstancedTrack), Z_Construct_UClass_UInterpTrackVectorMaterialParam_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_InstancedTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_InstancedTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
		{ "ToolTip", "Primitive components on which materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs = { "PrimitiveMaterialRefs", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, PrimitiveMaterialRefs), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner = { "PrimitiveMaterialRefs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimitiveMaterialRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
		{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors = { "ResetVectors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, ResetVectors), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors_Inner = { "ResetVectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorMaterialParam.h" },
		{ "ToolTip", "MIDs we're using to set the desired parameter." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVectorMaterialParam, MaterialInstances), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_InstancedTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_ResetVectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::NewProp_MaterialInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstVectorMaterialParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::ClassParams = {
		&UInterpTrackInstVectorMaterialParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstVectorMaterialParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstVectorMaterialParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstVectorMaterialParam, 3533644749);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstVectorMaterialParam>()
	{
		return UInterpTrackInstVectorMaterialParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVectorMaterialParam(Z_Construct_UClass_UInterpTrackInstVectorMaterialParam, &UInterpTrackInstVectorMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVectorMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVectorMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
