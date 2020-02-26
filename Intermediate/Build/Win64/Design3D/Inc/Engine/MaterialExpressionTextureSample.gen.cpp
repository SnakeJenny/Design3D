// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSample() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESamplerSourceMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ETextureMipValueMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipValueMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipValueMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureMipValueMode>()
	{
		return ETextureMipValueMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureMipValueMode(ETextureMipValueMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureMipValueMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureMipValueMode_Hash() { return 2208590381U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureMipValueMode"), 0, Get_Z_Construct_UEnum_Engine_ETextureMipValueMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMVM_None", (int64)TMVM_None },
				{ "TMVM_MipLevel", (int64)TMVM_MipLevel },
				{ "TMVM_MipBias", (int64)TMVM_MipBias },
				{ "TMVM_Derivative", (int64)TMVM_Derivative },
				{ "TMVM_MAX", (int64)TMVM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
				{ "TMVM_Derivative.DisplayName", "Derivative (explicit derivative to compute mip level)" },
				{ "TMVM_Derivative.ToolTip", "Explicitly compute the sample's DDX and DDY for anisotropic filtering." },
				{ "TMVM_MipBias.DisplayName", "MipBias (relative to the computed mip level)" },
				{ "TMVM_MipBias.ToolTip", "Bias the hardware computed sample's mip level. Disables anisotropic filtering." },
				{ "TMVM_MipLevel.DisplayName", "MipLevel (absolute, 0 is full resolution)" },
				{ "TMVM_MipLevel.ToolTip", "Explicitly compute the sample's mip level. Disables anisotropic filtering." },
				{ "TMVM_None.DisplayName", "None (use computed mip level)" },
				{ "TMVM_None.ToolTip", "Use hardware computed sample's mip level with automatic anisotropic filtering support." },
				{ "ToolTip", "defines how MipValue is used" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureMipValueMode",
				"ETextureMipValueMode",
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
	void UMaterialExpressionTextureSample::StaticRegisterNativesUMaterialExpressionTextureSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister()
	{
		return UMaterialExpressionTextureSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBias_MetaData[];
#endif
		static void NewProp_AutomaticViewMipBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutomaticViewMipBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstMipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConstMipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplerSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipValueMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBiasValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutomaticViewMipBiasValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatesDY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinatesDX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureSample*)Obj)->AutomaticViewMipBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias = { "AutomaticViewMipBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureSample), &Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "only used if MipValue is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue = { "ConstMipValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstMipValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "only used if Coordinates is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "Controls where the sampler for this texture lookup will come from.\nChoose 'from texture asset' to make use of the UTexture addressing settings,\nOtherwise use one of the global samplers, which will not consume a sampler slot.\nThis allows materials to use more than 16 unique textures on SM5 platforms." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource = { "SamplerSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, SamplerSource), Z_Construct_UEnum_Engine_ESamplerSourceMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "DisplayName", "MipValueMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "Defines how the MipValue property is applied to the texture lookup" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode = { "MipValueMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ETextureMipValueMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue = { "AutomaticViewMipBiasValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, AutomaticViewMipBiasValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the Y axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY = { "CoordinatesDY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the X axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX = { "CoordinatesDX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDX), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AutomaticViewMipBias' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue = { "MipValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Texture' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams = {
		&UMaterialExpressionTextureSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureSample, 3427333923);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSample>()
	{
		return UMaterialExpressionTextureSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSample(Z_Construct_UClass_UMaterialExpressionTextureSample, &UMaterialExpressionTextureSample::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
