// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/HierarchicalLODVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLODVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_AHierarchicalLODVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_AHierarchicalLODVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void AHierarchicalLODVolume::StaticRegisterNativesAHierarchicalLODVolume()
	{
	}
	UClass* Z_Construct_UClass_AHierarchicalLODVolume_NoRegister()
	{
		return AHierarchicalLODVolume::StaticClass();
	}
	struct Z_Construct_UClass_AHierarchicalLODVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOverlappingActors_MetaData[];
#endif
		static void NewProp_bIncludeOverlappingActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOverlappingActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHierarchicalLODVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "HierarchicalLODVolume.h" },
		{ "ModuleRelativePath", "Public/HierarchicalLODVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to manually define/create a HLOD cluster." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData[] = {
		{ "Category", "HLOD Volume" },
		{ "ModuleRelativePath", "Public/HierarchicalLODVolume.h" },
		{ "ToolTip", "When set this volume will incorporate actors which bounds overlap with the volume, otherwise only actors which are completely inside of the volume are incorporated" },
	};
#endif
	void Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_SetBit(void* Obj)
	{
		((AHierarchicalLODVolume*)Obj)->bIncludeOverlappingActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors = { "bIncludeOverlappingActors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHierarchicalLODVolume), &Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHierarchicalLODVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHierarchicalLODVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::ClassParams = {
		&AHierarchicalLODVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHierarchicalLODVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHierarchicalLODVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHierarchicalLODVolume, 1959090483);
	template<> UNREALED_API UClass* StaticClass<AHierarchicalLODVolume>()
	{
		return AHierarchicalLODVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHierarchicalLODVolume(Z_Construct_UClass_AHierarchicalLODVolume, &AHierarchicalLODVolume::StaticClass, TEXT("/Script/UnrealEd"), TEXT("AHierarchicalLODVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHierarchicalLODVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
