// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataChunk() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk()
	{
	}
	UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister()
	{
		return UNavigationDataChunk::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationDataChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NavigationDataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationDataChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Navigation/NavigationDataChunk.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
		{ "ToolTip", "Name of NavigationData actor that owns this chunk" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName = { "NavigationDataName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationDataChunk, NavigationDataName), METADATA_PARAMS(Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationDataChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationDataChunk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams = {
		&UNavigationDataChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationDataChunk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationDataChunk, 2764826031);
	template<> ENGINE_API UClass* StaticClass<UNavigationDataChunk>()
	{
		return UNavigationDataChunk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationDataChunk(Z_Construct_UClass_UNavigationDataChunk, &UNavigationDataChunk::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationDataChunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataChunk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
