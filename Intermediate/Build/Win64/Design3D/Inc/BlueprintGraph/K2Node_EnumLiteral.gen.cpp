// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_EnumLiteral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EnumLiteral() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EnumLiteral_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EnumLiteral();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
// End Cross Module References
	void UK2Node_EnumLiteral::StaticRegisterNativesUK2Node_EnumLiteral()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_EnumLiteral_NoRegister()
	{
		return UK2Node_EnumLiteral::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EnumLiteral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EnumLiteral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EnumLiteral.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EnumLiteral.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EnumLiteral.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_EnumLiteral, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnumLiteral_Statics::NewProp_Enum,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_EnumLiteral, INodeDependingOnEnumInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EnumLiteral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EnumLiteral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EnumLiteral_Statics::ClassParams = {
		&UK2Node_EnumLiteral::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnumLiteral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EnumLiteral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_EnumLiteral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_EnumLiteral, 2845502916);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EnumLiteral>()
	{
		return UK2Node_EnumLiteral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_EnumLiteral(Z_Construct_UClass_UK2Node_EnumLiteral, &UK2Node_EnumLiteral::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_EnumLiteral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EnumLiteral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
