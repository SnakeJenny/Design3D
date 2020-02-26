// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MeshMergeCullingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMergeCullingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AMeshMergeCullingVolume::StaticRegisterNativesAMeshMergeCullingVolume()
	{
	}
	UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister()
	{
		return AMeshMergeCullingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AMeshMergeCullingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshMergeCullingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshMergeCullingVolume_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/MeshMergeCullingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMergeCullingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume that can be added a level in order to remove triangles from source meshes before generating HLOD or merged meshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshMergeCullingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshMergeCullingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeshMergeCullingVolume_Statics::ClassParams = {
		&AMeshMergeCullingVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMeshMergeCullingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeshMergeCullingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshMergeCullingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeshMergeCullingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshMergeCullingVolume, 931561632);
	template<> ENGINE_API UClass* StaticClass<AMeshMergeCullingVolume>()
	{
		return AMeshMergeCullingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshMergeCullingVolume(Z_Construct_UClass_AMeshMergeCullingVolume, &AMeshMergeCullingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AMeshMergeCullingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshMergeCullingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
