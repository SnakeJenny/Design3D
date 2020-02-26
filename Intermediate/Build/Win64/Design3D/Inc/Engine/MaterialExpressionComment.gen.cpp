// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionComment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionComment::StaticRegisterNativesUMaterialExpressionComment()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister()
	{
		return UMaterialExpressionComment::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionComment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionComment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionComment.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionComment, FontSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Color to style comment with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionComment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionComment, Text), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionComment, SizeY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionComment, SizeX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionComment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionComment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams = {
		&UMaterialExpressionComment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionComment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionComment, 3020569670);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionComment>()
	{
		return UMaterialExpressionComment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionComment(Z_Construct_UClass_UMaterialExpressionComment, &UMaterialExpressionComment::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionComment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
