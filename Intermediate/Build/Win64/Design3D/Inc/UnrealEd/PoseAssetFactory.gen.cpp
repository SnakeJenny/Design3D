// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/PoseAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPoseAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPoseAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UPoseAssetFactory::StaticRegisterNativesUPoseAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UPoseAssetFactory_NoRegister()
	{
		return UPoseAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PoseAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAssetFactory, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Only used for AnimationEditorUtils::ExecuteNewAnimAsset template. Do not use directly." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAssetFactory, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData[] = {
		{ "Category", "PoseAssetFactory" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Optional. If specified the poses will be named according to this array.\n      If you don't specify, or you don't specify enough names for all poses, then default names will be generated." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAssetFactory, PoseNames), METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "PoseAssetFactory" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Used when creating a composite from an AnimSequence, becomes the only AnimSequence contained" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAssetFactory, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoseAssetFactory_Statics::ClassParams = {
		&UPoseAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseAssetFactory, 2678747601);
	template<> UNREALED_API UClass* StaticClass<UPoseAssetFactory>()
	{
		return UPoseAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseAssetFactory(Z_Construct_UClass_UPoseAssetFactory, &UPoseAssetFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPoseAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
