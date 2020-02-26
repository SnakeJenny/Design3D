// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintFieldNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFieldNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UField();
// End Cross Module References
	void UBlueprintFieldNodeSpawner::StaticRegisterNativesUBlueprintFieldNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister()
	{
		return UBlueprintFieldNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintFieldNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various field related nodes (nodes associated with\nfunctions, enums, structs, properties, etc.). Acts as the \"action\" portion\nfor certain FBlueprintActionMenuItems." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The field to configure new nodes with." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintFieldNodeSpawner, Field), Z_Construct_UClass_UField, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFieldNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::ClassParams = {
		&UBlueprintFieldNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintFieldNodeSpawner, 588120432);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintFieldNodeSpawner>()
	{
		return UBlueprintFieldNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintFieldNodeSpawner(Z_Construct_UClass_UBlueprintFieldNodeSpawner, &UBlueprintFieldNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintFieldNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFieldNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
