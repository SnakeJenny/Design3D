// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneThumbnailInfoWithPrimitive() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType();
// End Cross Module References
	void USceneThumbnailInfoWithPrimitive::StaticRegisterNativesUSceneThumbnailInfoWithPrimitive()
	{
	}
	UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_NoRegister()
	{
		return USceneThumbnailInfoWithPrimitive::StaticClass();
	}
	struct Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserModifiedShape_MetaData[];
#endif
		static void NewProp_bUserModifiedShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserModifiedShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
	};
#endif
	void Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_SetBit(void* Obj)
	{
		((USceneThumbnailInfoWithPrimitive*)Obj)->bUserModifiedShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape = { "bUserModifiedShape", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USceneThumbnailInfoWithPrimitive), &Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "AllowedClasses", "StaticMesh,SkeletalMesh" },
		{ "Category", "Thumbnail" },
		{ "ExactClass", "true" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ToolTip", "The custom mesh used when the primitive type is TPT_None" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneThumbnailInfoWithPrimitive, PreviewMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ToolTip", "The type of primitive used in this thumbnail" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneThumbnailInfoWithPrimitive, PrimitiveType), Z_Construct_UEnum_UnrealEd_EThumbnailPrimType, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneThumbnailInfoWithPrimitive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::ClassParams = {
		&USceneThumbnailInfoWithPrimitive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneThumbnailInfoWithPrimitive, 2419414321);
	template<> UNREALED_API UClass* StaticClass<USceneThumbnailInfoWithPrimitive>()
	{
		return USceneThumbnailInfoWithPrimitive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneThumbnailInfoWithPrimitive(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive, &USceneThumbnailInfoWithPrimitive::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USceneThumbnailInfoWithPrimitive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneThumbnailInfoWithPrimitive);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneThumbnailInfoWithPrimitive)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
