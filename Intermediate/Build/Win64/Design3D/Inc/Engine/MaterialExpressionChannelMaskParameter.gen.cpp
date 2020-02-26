// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionChannelMaskParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EChannelMaskParameterColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChannelMaskParameterColor, Z_Construct_UPackage__Script_Engine(), TEXT("EChannelMaskParameterColor"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>()
	{
		return EChannelMaskParameterColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChannelMaskParameterColor(EChannelMaskParameterColor_StaticEnum, TEXT("/Script/Engine"), TEXT("EChannelMaskParameterColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Hash() { return 2883751439U; }
	UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChannelMaskParameterColor"), 0, Get_Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChannelMaskParameterColor::Red", (int64)EChannelMaskParameterColor::Red },
				{ "EChannelMaskParameterColor::Green", (int64)EChannelMaskParameterColor::Green },
				{ "EChannelMaskParameterColor::Blue", (int64)EChannelMaskParameterColor::Blue },
				{ "EChannelMaskParameterColor::Alpha", (int64)EChannelMaskParameterColor::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EChannelMaskParameterColor",
				"EChannelMaskParameterColor::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionChannelMaskParameter::StaticRegisterNativesUMaterialExpressionChannelMaskParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaskChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionVectorParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionVectorParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionChannelMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData[] = {
		{ "Category", "MaterialExpressionChannelMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel = { "MaskChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, MaskChannel), Z_Construct_UEnum_Engine_EChannelMaskParameterColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionChannelMaskParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams = {
		&UMaterialExpressionChannelMaskParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionChannelMaskParameter, 1614867750);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionChannelMaskParameter>()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionChannelMaskParameter(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter, &UMaterialExpressionChannelMaskParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionChannelMaskParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionChannelMaskParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
