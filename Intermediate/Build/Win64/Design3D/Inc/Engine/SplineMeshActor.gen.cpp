// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SplineMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	void ASplineMeshActor::StaticRegisterNativesASplineMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister()
	{
		return ASplineMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SplineMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "SplineMeshActor is an actor with a SplineMeshComponent.\n\n@see USplineMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|SplineMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent = { "SplineMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineMeshActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams = {
		&ASplineMeshActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineMeshActor, 3835003083);
	template<> ENGINE_API UClass* StaticClass<ASplineMeshActor>()
	{
		return ASplineMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineMeshActor(Z_Construct_UClass_ASplineMeshActor, &ASplineMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("ASplineMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
