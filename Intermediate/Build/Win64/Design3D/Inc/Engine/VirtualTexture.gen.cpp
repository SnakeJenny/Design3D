// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture();
// End Cross Module References
	void UVirtualTexture::StaticRegisterNativesUVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTexture_NoRegister()
	{
		return UVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rebuild_MetaData[];
#endif
		static void NewProp_Rebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Space;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild_MetaData[] = {
		{ "Category", "AlphaTesting" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "TEMP HACK: Set this to true from within the editor to trigger a rebuild of the VT for now.\neventually this'll be something smarter with a better GUI" },
	};
#endif
	void Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild_SetBit(void* Obj)
	{
		((UVirtualTexture*)Obj)->Rebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild = { "Rebuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualTexture), &Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTexture, Space), Z_Construct_UClass_UVirtualTextureSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Space_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Space_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTexture, Layers), METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Rebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Space,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture_Statics::NewProp_Layers_Inner,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture_Statics::ClassParams = {
		&UVirtualTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTexture, 902886299);
	template<> ENGINE_API UClass* StaticClass<UVirtualTexture>()
	{
		return UVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTexture(Z_Construct_UClass_UVirtualTexture, &UVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture)
	void ULightMapVirtualTexture::StaticRegisterNativesULightMapVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVirtualTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture_Statics::NewProp_LayerFlags_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightMapVirtualTexture_Statics::NewProp_LayerFlags = { "LayerFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightMapVirtualTexture, LayerFlags), METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture_Statics::NewProp_LayerFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::NewProp_LayerFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightMapVirtualTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture_Statics::NewProp_LayerFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams = {
		&ULightMapVirtualTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightMapVirtualTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapVirtualTexture, 3126817546);
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture>()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapVirtualTexture(Z_Construct_UClass_ULightMapVirtualTexture, &ULightMapVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
