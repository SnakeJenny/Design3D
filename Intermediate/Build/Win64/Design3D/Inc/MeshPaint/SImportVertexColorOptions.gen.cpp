// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaint/Private/SImportVertexColorOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSImportVertexColorOptions() {}
// Cross Module References
	MESHPAINT_API UClass* Z_Construct_UClass_UVertexColorImportOptions_NoRegister();
	MESHPAINT_API UClass* Z_Construct_UClass_UVertexColorImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
// End Cross Module References
	void UVertexColorImportOptions::StaticRegisterNativesUVertexColorImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UVertexColorImportOptions_NoRegister()
	{
		return UVertexColorImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UVertexColorImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanImportToInstance_MetaData[];
#endif
		static void NewProp_bCanImportToInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanImportToInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportToInstance_MetaData[];
#endif
		static void NewProp_bImportToInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportToInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlpha_MetaData[];
#endif
		static void NewProp_bAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGreen_MetaData[];
#endif
		static void NewProp_bGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlue_MetaData[];
#endif
		static void NewProp_bBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRed_MetaData[];
#endif
		static void NewProp_bRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UVIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexColorImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SImportVertexColorOptions.h" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bCanImportToInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance = { "bCanImportToInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Whether or not to import the Vertex Colors to Mesh Component instance or the underlying Static Mesh" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bImportToInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance = { "bImportToInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Alpha Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha = { "bAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Green Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen = { "bGreen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Blue Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue = { "bBlue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Red Texture Channel" },
	};
#endif
	void Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_SetBit(void* Obj)
	{
		((UVertexColorImportOptions*)Obj)->bRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed = { "bRed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexColorImportOptions), &Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "LOD Index to import the Vertex Colors to" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexColorImportOptions, LODIndex), METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SImportVertexColorOptions.h" },
		{ "ToolTip", "Texture Coordinate Channel to use for Sampling the Texture" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex = { "UVIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexColorImportOptions, UVIndex), METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bCanImportToInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bImportToInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_bRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorImportOptions_Statics::NewProp_UVIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexColorImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorImportOptions_Statics::ClassParams = {
		&UVertexColorImportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVertexColorImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexColorImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVertexColorImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVertexColorImportOptions, 651648858);
	template<> MESHPAINT_API UClass* StaticClass<UVertexColorImportOptions>()
	{
		return UVertexColorImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVertexColorImportOptions(Z_Construct_UClass_UVertexColorImportOptions, &UVertexColorImportOptions::StaticClass, TEXT("/Script/MeshPaint"), TEXT("UVertexColorImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
