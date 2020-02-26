// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/WorldThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldThumbnailRenderer::StaticRegisterNativesUWorldThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister()
	{
		return UWorldThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UWorldThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowWorldThumbnails_MetaData[];
#endif
		static void NewProp_bAllowWorldThumbnails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldThumbnails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnlitScene_MetaData[];
#endif
		static void NewProp_bUseUnlitScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnlitScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalOrbitYawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalOrbitYawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalOrbitPitchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalOrbitPitchOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "If false, all world thumbnails rendering will be disabled" },
	};
#endif
	void Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_SetBit(void* Obj)
	{
		((UWorldThumbnailRenderer*)Obj)->bAllowWorldThumbnails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails = { "bAllowWorldThumbnails", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldThumbnailRenderer), &Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "If true, all world thumbnails will be rendered unlit. This is useful in games that have shared lighting in a common map" },
	};
#endif
	void Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_SetBit(void* Obj)
	{
		((UWorldThumbnailRenderer*)Obj)->bUseUnlitScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene = { "bUseUnlitScene", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldThumbnailRenderer), &Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "Offset used to orient all worlds to face the camera in degrees when using a perspective camera. Individual thumbnail infos can provide additional offset." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset = { "GlobalOrbitYawOffset", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitYawOffset), METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "Offset used to orient all worlds to show a more vertical camera, if necessary. Individual thumbnail infos can provide additional offset." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset = { "GlobalOrbitPitchOffset", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitPitchOffset), METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::ClassParams = {
		&UWorldThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldThumbnailRenderer, 2910259651);
	template<> UNREALED_API UClass* StaticClass<UWorldThumbnailRenderer>()
	{
		return UWorldThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldThumbnailRenderer(Z_Construct_UClass_UWorldThumbnailRenderer, &UWorldThumbnailRenderer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UWorldThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
