// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/CubeBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCubeBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCubeBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCubeBuilder::StaticRegisterNativesUCubeBuilder()
	{
	}
	UClass* Z_Construct_UClass_UCubeBuilder_NoRegister()
	{
		return UCubeBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCubeBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tessellated_MetaData[];
#endif
		static void NewProp_Tessellated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Tessellated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hollow_MetaData[];
#endif
		static void NewProp_Hollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Box" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/CubeBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "Whether extra internal faces should be generated for each cube face" },
	};
#endif
	void Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_SetBit(void* Obj)
	{
		((UCubeBuilder*)Obj)->Tessellated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated = { "Tessellated", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCubeBuilder), &Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "Whether this is a hollow or solid cube" },
	};
#endif
	void Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_SetBit(void* Obj)
	{
		((UCubeBuilder*)Obj)->Hollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow = { "Hollow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCubeBuilder), &Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubeBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "EditCondition", "Hollow" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The thickness of the cube wall when hollow" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness = { "WallThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubeBuilder, WallThickness), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the Z dimension" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubeBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the Y dimension" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubeBuilder, Y), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/CubeBuilder.h" },
		{ "ToolTip", "The size of the cube in the X dimension" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubeBuilder, X), METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Tessellated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Hollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_WallThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeBuilder_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCubeBuilder_Statics::ClassParams = {
		&UCubeBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCubeBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCubeBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCubeBuilder, 1453204821);
	template<> UNREALED_API UClass* StaticClass<UCubeBuilder>()
	{
		return UCubeBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCubeBuilder(Z_Construct_UClass_UCubeBuilder, &UCubeBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCubeBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
