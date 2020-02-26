// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier_Clip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Clip() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Clip_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Clip();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGeomModifier_Clip::StaticRegisterNativesUGeomModifier_Clip()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_Clip_NoRegister()
	{
		return UGeomModifier_Clip::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Clip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnappedMouseWorldSpacePos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnappedMouseWorldSpacePos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClipMarkers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipMarkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplit_MetaData[];
#endif
		static void NewProp_bSplit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipNormal_MetaData[];
#endif
		static void NewProp_bFlipNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Clip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Clip.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
		{ "ToolTip", "The mouse position, in world space, where the user currently is hovering." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos = { "SnappedMouseWorldSpacePos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Clip, SnappedMouseWorldSpacePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
		{ "ToolTip", "The clip markers that the user has dropped down in the world so far." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers = { "ClipMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier_Clip, ClipMarkers), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_Inner = { "ClipMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_SetBit(void* Obj)
	{
		((UGeomModifier_Clip*)Obj)->bSplit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit = { "bSplit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Clip), &Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_SetBit(void* Obj)
	{
		((UGeomModifier_Clip*)Obj)->bFlipNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal = { "bFlipNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier_Clip), &Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Clip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Clip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Clip_Statics::ClassParams = {
		&UGeomModifier_Clip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Clip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Clip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier_Clip, 299569503);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Clip>()
	{
		return UGeomModifier_Clip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier_Clip(Z_Construct_UClass_UGeomModifier_Clip, &UGeomModifier_Clip::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier_Clip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Clip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
