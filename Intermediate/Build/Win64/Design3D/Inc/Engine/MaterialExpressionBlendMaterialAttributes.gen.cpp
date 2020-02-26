// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionBlendMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	static UEnum* EMaterialAttributeBlend_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAttributeBlend, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialAttributeBlend"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>()
	{
		return EMaterialAttributeBlend_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialAttributeBlend(EMaterialAttributeBlend_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialAttributeBlend"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Hash() { return 2696776321U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialAttributeBlend()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialAttributeBlend"), 0, Get_Z_Construct_UEnum_Engine_EMaterialAttributeBlend_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaterialAttributeBlend::Blend", (int64)EMaterialAttributeBlend::Blend },
				{ "EMaterialAttributeBlend::UseA", (int64)EMaterialAttributeBlend::UseA },
				{ "EMaterialAttributeBlend::UseB", (int64)EMaterialAttributeBlend::UseB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialAttributeBlend",
				"EMaterialAttributeBlend::Type",
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
	void UMaterialExpressionBlendMaterialAttributes::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionBlendMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeBlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexAttributeBlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelAttributeBlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixelAttributeBlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType = { "VertexAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
		{ "ToolTip", "Optionally skip blending attributes of this type." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType = { "PixelAttributeBlendType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType), Z_Construct_UEnum_Engine_EMaterialAttributeBlend, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlendMaterialAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributes, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_VertexAttributeBlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_PixelAttributeBlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionBlendMaterialAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionBlendMaterialAttributes, 504251749);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBlendMaterialAttributes>()
	{
		return UMaterialExpressionBlendMaterialAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBlendMaterialAttributes(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes, &UMaterialExpressionBlendMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBlendMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
