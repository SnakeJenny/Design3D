// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/SceneThumbnailInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneThumbnailInfo() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USceneThumbnailInfo::StaticRegisterNativesUSceneThumbnailInfo()
	{
	}
	UClass* Z_Construct_UClass_USceneThumbnailInfo_NoRegister()
	{
		return USceneThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_USceneThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The offset from the bounds sphere distance from the asset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom = { "OrbitZoom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneThumbnailInfo, OrbitZoom), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The yaw of the orbit camera around the asset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw = { "OrbitYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneThumbnailInfo, OrbitYaw), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The pitch of the orbit camera around the asset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch = { "OrbitPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneThumbnailInfo, OrbitPitch), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneThumbnailInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneThumbnailInfo_Statics::ClassParams = {
		&USceneThumbnailInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneThumbnailInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneThumbnailInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneThumbnailInfo, 1725327449);
	template<> UNREALED_API UClass* StaticClass<USceneThumbnailInfo>()
	{
		return USceneThumbnailInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneThumbnailInfo(Z_Construct_UClass_USceneThumbnailInfo, &USceneThumbnailInfo::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USceneThumbnailInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneThumbnailInfo);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneThumbnailInfo)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
