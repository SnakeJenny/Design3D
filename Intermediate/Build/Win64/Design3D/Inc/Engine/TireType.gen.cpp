// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Vehicles/TireType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTireType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTireType();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTireType::StaticRegisterNativesUTireType()
	{
	}
	UClass* Z_Construct_UClass_UTireType_NoRegister()
	{
		return UTireType::StaticClass();
	}
	struct Z_Construct_UClass_UTireType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTireType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/TireType.h" },
		{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
		{ "ToolTip", "DEPRECATED - Only used to allow conversion to new TireConfig in PhysXVehicles plugin" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTireType, FrictionScale), METADATA_PARAMS(Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTireType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTireType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTireType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTireType_Statics::ClassParams = {
		&UTireType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTireType_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTireType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTireType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTireType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTireType, 444409287);
	template<> ENGINE_API UClass* StaticClass<UTireType>()
	{
		return UTireType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTireType(Z_Construct_UClass_UTireType, &UTireType::StaticClass, TEXT("/Script/Engine"), TEXT("UTireType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTireType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
