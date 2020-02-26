// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/CylinderBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCylinderBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCylinderBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCylinderBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCylinderBuilder::StaticRegisterNativesUCylinderBuilder()
	{
	}
	UClass* Z_Construct_UClass_UCylinderBuilder_NoRegister()
	{
		return UCylinderBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCylinderBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hollow_MetaData[];
#endif
		static void NewProp_Hollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSide_MetaData[];
#endif
		static void NewProp_AlignToSide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sides_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCylinderBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Cylinder" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/CylinderBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "Whether this is a hollow or solid cylinder" },
	};
#endif
	void Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow_SetBit(void* Obj)
	{
		((UCylinderBuilder*)Obj)->Hollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow = { "Hollow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCylinderBuilder), &Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "Whether to align the brush to a face" },
	};
#endif
	void Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide_SetBit(void* Obj)
	{
		((UCylinderBuilder*)Obj)->AlignToSide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide = { "AlignToSide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCylinderBuilder), &Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCylinderBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Sides_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "500" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "How many sides this cylinder should have" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCylinderBuilder, Sides), METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Sides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Sides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "EditCondition", "Hollow" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "Radius of inner cylinder (when hollow)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCylinderBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_InnerRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "Radius of cylinder" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCylinderBuilder, OuterRadius), METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_OuterRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/CylinderBuilder.h" },
		{ "ToolTip", "Distance from base to tip of cylinder" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCylinderBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCylinderBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Hollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_AlignToSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Sides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_InnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_OuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCylinderBuilder_Statics::NewProp_Z,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCylinderBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCylinderBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCylinderBuilder_Statics::ClassParams = {
		&UCylinderBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCylinderBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCylinderBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCylinderBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCylinderBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCylinderBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCylinderBuilder, 4060965396);
	template<> UNREALED_API UClass* StaticClass<UCylinderBuilder>()
	{
		return UCylinderBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCylinderBuilder(Z_Construct_UClass_UCylinderBuilder, &UCylinderBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCylinderBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCylinderBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
