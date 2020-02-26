// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureRenderTargetCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UTextureRenderTargetCube::StaticRegisterNativesUTextureRenderTargetCube()
	{
	}
	UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister()
	{
		return UTextureRenderTargetCube::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTargetCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTargetCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTargetCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "TextureRenderTargetCube\n\nCube render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular cube texture resource." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTargetCube*)Obj)->bForceLinearGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureRenderTargetCube), &Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTargetCube" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTargetCube*)Obj)->bHDR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureRenderTargetCube), &Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetCube, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetCube, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTargetCube" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetCube.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetCube, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_OverrideFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_SizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTargetCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetCube_Statics::ClassParams = {
		&UTextureRenderTargetCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTargetCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureRenderTargetCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureRenderTargetCube, 3481204597);
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTargetCube>()
	{
		return UTextureRenderTargetCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureRenderTargetCube(Z_Construct_UClass_UTextureRenderTargetCube, &UTextureRenderTargetCube::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureRenderTargetCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
