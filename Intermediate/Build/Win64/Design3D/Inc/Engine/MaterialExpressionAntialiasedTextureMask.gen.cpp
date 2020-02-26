// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionAntialiasedTextureMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAntialiasedTextureMask() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
// End Cross Module References
	static UEnum* ETextureColorChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureColorChannel, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureColorChannel"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureColorChannel>()
	{
		return ETextureColorChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureColorChannel(ETextureColorChannel_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureColorChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureColorChannel_Hash() { return 1894000359U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureColorChannel"), 0, Get_Z_Construct_UEnum_Engine_ETextureColorChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TCC_Red", (int64)TCC_Red },
				{ "TCC_Green", (int64)TCC_Green },
				{ "TCC_Blue", (int64)TCC_Blue },
				{ "TCC_Alpha", (int64)TCC_Alpha },
				{ "TCC_MAX", (int64)TCC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureColorChannel",
				"ETextureColorChannel",
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
	void UMaterialExpressionAntialiasedTextureMask::StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister()
	{
		return UMaterialExpressionAntialiasedTextureMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Channel), Z_Construct_UEnum_Engine_ETextureColorChannel, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Threshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAntialiasedTextureMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams = {
		&UMaterialExpressionAntialiasedTextureMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionAntialiasedTextureMask, 208210407);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAntialiasedTextureMask>()
	{
		return UMaterialExpressionAntialiasedTextureMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAntialiasedTextureMask(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask, &UMaterialExpressionAntialiasedTextureMask::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAntialiasedTextureMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAntialiasedTextureMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
