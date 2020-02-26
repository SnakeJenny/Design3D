// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothPainter/Public/CopyVertexColorToClothParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyVertexColorToClothParams() {}
// Cross Module References
	CLOTHPAINTER_API UEnum* Z_Construct_UEnum_ClothPainter_ESourceColorChannel();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
	CLOTHPAINTER_API UScriptStruct* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams();
// End Cross Module References
	static UEnum* ESourceColorChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothPainter_ESourceColorChannel, Z_Construct_UPackage__Script_ClothPainter(), TEXT("ESourceColorChannel"));
		}
		return Singleton;
	}
	template<> CLOTHPAINTER_API UEnum* StaticEnum<ESourceColorChannel>()
	{
		return ESourceColorChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceColorChannel(ESourceColorChannel_StaticEnum, TEXT("/Script/ClothPainter"), TEXT("ESourceColorChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Hash() { return 2054346566U; }
	UEnum* Z_Construct_UEnum_ClothPainter_ESourceColorChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothPainter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceColorChannel"), 0, Get_Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceColorChannel::Red", (int64)ESourceColorChannel::Red },
				{ "ESourceColorChannel::Green", (int64)ESourceColorChannel::Green },
				{ "ESourceColorChannel::Blue", (int64)ESourceColorChannel::Blue },
				{ "ESourceColorChannel::Alpha", (int64)ESourceColorChannel::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
				{ "ToolTip", "Enum for selecting color channel to copy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothPainter,
				nullptr,
				"ESourceColorChannel",
				"ESourceColorChannel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCopyVertexColorToClothParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHPAINTER_API uint32 Get_Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams, Z_Construct_UPackage__Script_ClothPainter(), TEXT("CopyVertexColorToClothParams"), sizeof(FCopyVertexColorToClothParams), Get_Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Hash());
	}
	return Singleton;
}
template<> CLOTHPAINTER_API UScriptStruct* StaticStruct<FCopyVertexColorToClothParams>()
{
	return FCopyVertexColorToClothParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCopyVertexColorToClothParams(FCopyVertexColorToClothParams::StaticStruct, TEXT("/Script/ClothPainter"), TEXT("CopyVertexColorToClothParams"), false, nullptr, nullptr);
static struct FScriptStruct_ClothPainter_StaticRegisterNativesFCopyVertexColorToClothParams
{
	FScriptStruct_ClothPainter_StaticRegisterNativesFCopyVertexColorToClothParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CopyVertexColorToClothParams")),new UScriptStruct::TCppStructOps<FCopyVertexColorToClothParams>);
	}
} ScriptStruct_ClothPainter_StaticRegisterNativesFCopyVertexColorToClothParams;
	struct Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorChannel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Helper struct used for specifying options when copying vertex colors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCopyVertexColorToClothParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "Copy Vertex Colors" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Scaling factor applied to vertex colours (in range 0-1) before applying to mask." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCopyVertexColorToClothParams, ScalingFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData[] = {
		{ "Category", "Copy Vertex Colors" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Color channel to copy from vertex colors." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel = { "ColorChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCopyVertexColorToClothParams, ColorChannel), Z_Construct_UEnum_ClothPainter_ESourceColorChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
		nullptr,
		&NewStructOps,
		"CopyVertexColorToClothParams",
		sizeof(FCopyVertexColorToClothParams),
		alignof(FCopyVertexColorToClothParams),
		Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothPainter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CopyVertexColorToClothParams"), sizeof(FCopyVertexColorToClothParams), Get_Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Hash() { return 3026459033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
