// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTextureSpace.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureSpace() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_PageTableFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureLayer();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureSpace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTextureSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTextureSpace();
// End Cross Module References
	static UEnum* PageTableFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_PageTableFormat, Z_Construct_UPackage__Script_Engine(), TEXT("PageTableFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<PageTableFormat>()
	{
		return PageTableFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PageTableFormat(PageTableFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("PageTableFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_PageTableFormat_Hash() { return 1377396318U; }
	UEnum* Z_Construct_UEnum_Engine_PageTableFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PageTableFormat"), 0, Get_Z_Construct_UEnum_Engine_PageTableFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PTF_16", (int64)PTF_16 },
				{ "PTF_32", (int64)PTF_32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
				{ "PTF_32.ToolTip", "16 bpp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"PageTableFormat",
				"PageTableFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVirtualTextureLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureLayer, Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureLayer"), sizeof(FVirtualTextureLayer), Get_Z_Construct_UScriptStruct_FVirtualTextureLayer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureLayer>()
{
	return FVirtualTextureLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualTextureLayer(FVirtualTextureLayer::StaticStruct, TEXT("/Script/Engine"), TEXT("VirtualTextureLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureLayer
{
	FScriptStruct_Engine_StaticRegisterNativesFVirtualTextureLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualTextureLayer")),new UScriptStruct::TCppStructOps<FVirtualTextureLayer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVirtualTextureLayer;
	struct Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAlpha_MetaData[];
#endif
		static void NewProp_bHasAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[];
#endif
		static void NewProp_bCompressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
		{ "ToolTip", "The data on this layer has an alpha channel" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureLayer, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_CompressionSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
		{ "ToolTip", "Use (lossy) texture compression on this layer" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha_SetBit(void* Obj)
	{
		((FVirtualTextureLayer*)Obj)->bHasAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha = { "bHasAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualTextureLayer), &Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed_SetBit(void* Obj)
	{
		((FVirtualTextureLayer*)Obj)->bCompressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualTextureLayer), &Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVirtualTextureLayer, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bHasAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_bCompressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::NewProp_Format,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualTextureLayer",
		sizeof(FVirtualTextureLayer),
		alignof(FVirtualTextureLayer),
		Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualTextureLayer"), sizeof(FVirtualTextureLayer), Get_Z_Construct_UScriptStruct_FVirtualTextureLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVirtualTextureLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualTextureLayer_Hash() { return 1918321148U; }
	void UVirtualTextureSpace::StaticRegisterNativesUVirtualTextureSpace()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTextureSpace_NoRegister()
	{
		return UVirtualTextureSpace::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BorderWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTextureSpace.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
		{ "ToolTip", "The VTPool is at the moment coupled at the Space" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, PoolSize), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_PoolSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, Format), Z_Construct_UEnum_Engine_PageTableFormat, METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, Dimensions), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Dimensions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, Size), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_BorderWidth_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_BorderWidth = { "BorderWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, BorderWidth), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_BorderWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_BorderWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, TileSize), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_TileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureSpace, Layers), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVirtualTextureLayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_PoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Dimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_BorderWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureSpace_Statics::NewProp_Layers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureSpace_Statics::ClassParams = {
		&UVirtualTextureSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTextureSpace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureSpace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTextureSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTextureSpace, 4010124053);
	template<> ENGINE_API UClass* StaticClass<UVirtualTextureSpace>()
	{
		return UVirtualTextureSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTextureSpace(Z_Construct_UClass_UVirtualTextureSpace, &UVirtualTextureSpace::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTextureSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureSpace);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureSpace)
	void ULightMapVirtualTextureSpace::StaticRegisterNativesULightMapVirtualTextureSpace()
	{
	}
	UClass* Z_Construct_UClass_ULightMapVirtualTextureSpace_NoRegister()
	{
		return ULightMapVirtualTextureSpace::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVirtualTextureSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "VT/VirtualTextureSpace.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureSpace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTextureSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::ClassParams = {
		&ULightMapVirtualTextureSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTextureSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapVirtualTextureSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapVirtualTextureSpace, 2151337551);
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTextureSpace>()
	{
		return ULightMapVirtualTextureSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapVirtualTextureSpace(Z_Construct_UClass_ULightMapVirtualTextureSpace, &ULightMapVirtualTextureSpace::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapVirtualTextureSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTextureSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
