// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/MorphTarget.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorphTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UMorphTarget::StaticRegisterNativesUMorphTarget()
	{
	}
	UClass* Z_Construct_UClass_UMorphTarget_NoRegister()
	{
		return UMorphTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMorphTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkelMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMorphTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/MorphTarget.h" },
		{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
		{ "ToolTip", "USkeletalMesh that this vertex animation works on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh = { "BaseSkelMesh", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMorphTarget, BaseSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMorphTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMorphTarget_Statics::NewProp_BaseSkelMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMorphTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMorphTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMorphTarget_Statics::ClassParams = {
		&UMorphTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMorphTarget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMorphTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMorphTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMorphTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMorphTarget, 2596745252);
	template<> ENGINE_API UClass* StaticClass<UMorphTarget>()
	{
		return UMorphTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMorphTarget(Z_Construct_UClass_UMorphTarget, &UMorphTarget::StaticClass, TEXT("/Script/Engine"), TEXT("UMorphTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMorphTarget);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMorphTarget)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
