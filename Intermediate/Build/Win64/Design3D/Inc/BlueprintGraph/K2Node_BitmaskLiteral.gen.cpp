// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_BitmaskLiteral.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BitmaskLiteral() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BitmaskLiteral_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BitmaskLiteral();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
// End Cross Module References
	void UK2Node_BitmaskLiteral::StaticRegisterNativesUK2Node_BitmaskLiteral()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_BitmaskLiteral_NoRegister()
	{
		return UK2Node_BitmaskLiteral::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitflagsEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BitflagsEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_BitmaskLiteral.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BitmaskLiteral.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::NewProp_BitflagsEnum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BitmaskLiteral.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::NewProp_BitflagsEnum = { "BitflagsEnum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_BitmaskLiteral, BitflagsEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::NewProp_BitflagsEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::NewProp_BitflagsEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::NewProp_BitflagsEnum,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_BitmaskLiteral, INodeDependingOnEnumInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BitmaskLiteral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::ClassParams = {
		&UK2Node_BitmaskLiteral::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BitmaskLiteral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_BitmaskLiteral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_BitmaskLiteral, 465134749);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_BitmaskLiteral>()
	{
		return UK2Node_BitmaskLiteral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_BitmaskLiteral(Z_Construct_UClass_UK2Node_BitmaskLiteral, &UK2Node_BitmaskLiteral::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_BitmaskLiteral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BitmaskLiteral);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_BitmaskLiteral)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
