// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/VolumeTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UVolumeTexture::StaticRegisterNativesUVolumeTexture()
	{
	}
	UClass* Z_Construct_UClass_UVolumeTexture_NoRegister()
	{
		return UVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLightingGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLightingGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source2DTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source2DTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Compositing ImportSettings" },
		{ "IncludePath", "Engine/VolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "DisplayName", "Tile Size Y" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size Y" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY = { "Source2DTileSizeY", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeY), METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "DisplayName", "Tile Size X" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size X" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX = { "Source2DTileSizeX", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeX), METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The lighting Guid of the source 2D texture, used to trigger rebuild when the source changes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid = { "SourceLightingGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, SourceLightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData[] = {
		{ "Category", "Source2D" },
		{ "DisplayName", "Source Texture" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "A (optional) reference texture from which the volume texture was built" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture = { "Source2DTexture", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVolumeTexture_Statics::ClassParams = {
		&UVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVolumeTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVolumeTexture, 1652746772);
	template<> ENGINE_API UClass* StaticClass<UVolumeTexture>()
	{
		return UVolumeTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVolumeTexture(Z_Construct_UClass_UVolumeTexture, &UVolumeTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UVolumeTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
