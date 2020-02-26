// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/IntSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntSerialization() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UIntSerialization::StaticRegisterNativesUIntSerialization()
	{
	}
	UClass* Z_Construct_UClass_UIntSerialization_NoRegister()
	{
		return UIntSerialization::StaticClass();
	}
	struct Z_Construct_UClass_UIntSerialization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt32Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SignedInt32Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt8Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnsignedInt8Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt64Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SignedInt64Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt16Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_SignedInt16Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignedInt8Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_SignedInt8Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt64Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_UnsignedInt64Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt32Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UnsignedInt32Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt16Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_UnsignedInt16Variable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntSerialization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/IntSerialization.h" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable = { "SignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, SignedInt32Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "Existing types" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable = { "UnsignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt8Variable), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable = { "SignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, SignedInt64Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable = { "SignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, SignedInt16Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable = { "SignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, SignedInt8Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable = { "UnsignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt64Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable = { "UnsignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt32Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "New types" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable = { "UnsignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt16Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntSerialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntSerialization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntSerialization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIntSerialization_Statics::ClassParams = {
		&UIntSerialization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIntSerialization_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntSerialization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIntSerialization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIntSerialization, 2275650954);
	template<> ENGINE_API UClass* StaticClass<UIntSerialization>()
	{
		return UIntSerialization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIntSerialization(Z_Construct_UClass_UIntSerialization, &UIntSerialization::StaticClass, TEXT("/Script/Engine"), TEXT("UIntSerialization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntSerialization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
