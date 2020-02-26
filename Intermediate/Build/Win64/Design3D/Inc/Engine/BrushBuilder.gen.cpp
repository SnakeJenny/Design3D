// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BrushBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBuilder() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FBuilderPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuilderPoly, Z_Construct_UPackage__Script_Engine(), TEXT("BuilderPoly"), sizeof(FBuilderPoly), Get_Z_Construct_UScriptStruct_FBuilderPoly_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuilderPoly>()
{
	return FBuilderPoly::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuilderPoly(FBuilderPoly::StaticStruct, TEXT("/Script/Engine"), TEXT("BuilderPoly"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuilderPoly
{
	FScriptStruct_Engine_StaticRegisterNativesFBuilderPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuilderPoly")),new UScriptStruct::TCppStructOps<FBuilderPoly>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuilderPoly;
	struct Z_Construct_UScriptStruct_FBuilderPoly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Internal state, not accessible to script." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuilderPoly>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags = { "PolyFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuilderPoly, PolyFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuilderPoly, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuilderPoly, Direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuilderPoly, VertexIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuilderPoly",
		sizeof(FBuilderPoly),
		alignof(FBuilderPoly),
		Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuilderPoly"), sizeof(FBuilderPoly), Get_Z_Construct_UScriptStruct_FBuilderPoly_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuilderPoly_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuilderPoly_Hash() { return 188080804U; }
	void UBrushBuilder::StaticRegisterNativesUBrushBuilder()
	{
	}
	UClass* Z_Construct_UClass_UBrushBuilder_NoRegister()
	{
		return UBrushBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBrushBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeCoplanars_MetaData[];
#endif
		static void NewProp_MergeCoplanars_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeCoplanars;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyBadParams_MetaData[];
#endif
		static void NewProp_NotifyBadParams_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotifyBadParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitmapFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BitmapFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/BrushBuilder.h" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Base class of UnrealEd brush builders.\n\n\nTips for writing brush builders:\n\n- Always validate the user-specified and call BadParameters function\n  if anything is wrong, instead of actually building geometry.\n  If you build an invalid brush due to bad user parameters, you'll\n  cause an extraordinary amount of pain for the poor user.\n\n- When generating polygons with more than 3 vertices, BE SURE all the\n  polygon's vertices are coplanar!  Out-of-plane polygons will cause\n  geometry to be corrupted." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit(void* Obj)
	{
		((UBrushBuilder*)Obj)->MergeCoplanars = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars = { "MergeCoplanars", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushBuilder, Layer), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys = { "Polys", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushBuilder, Polys), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner = { "Polys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBuilderPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushBuilder, Vertices), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "If false, disabled the bad param notifications" },
	};
#endif
	void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit(void* Obj)
	{
		((UBrushBuilder*)Obj)->NotifyBadParams = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams = { "NotifyBadParams", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "localized FString that will be displayed as the name of this brush builder in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushBuilder, ToolTip), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename = { "BitmapFilename", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushBuilder, BitmapFilename), METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrushBuilder_Statics::ClassParams = {
		&UBrushBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrushBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrushBuilder, 3355868252);
	template<> ENGINE_API UClass* StaticClass<UBrushBuilder>()
	{
		return UBrushBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushBuilder(Z_Construct_UClass_UBrushBuilder, &UBrushBuilder::StaticClass, TEXT("/Script/Engine"), TEXT("UBrushBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
