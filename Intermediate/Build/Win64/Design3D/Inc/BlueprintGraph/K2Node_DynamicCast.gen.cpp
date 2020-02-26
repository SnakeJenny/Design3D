// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_DynamicCast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DynamicCast() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DynamicCast_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_DynamicCast();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_DynamicCast::StaticRegisterNativesUK2Node_DynamicCast()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_DynamicCast_NoRegister()
	{
		return UK2Node_DynamicCast::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DynamicCast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPureCast_MetaData[];
#endif
		static void NewProp_bIsPureCast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPureCast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DynamicCast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DynamicCast.h" },
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_SetBit(void* Obj)
	{
		((UK2Node_DynamicCast*)Obj)->bIsPureCast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast = { "bIsPureCast", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_DynamicCast), &Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_DynamicCast.h" },
		{ "ToolTip", "The type that the input should try to be cast to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_DynamicCast, TargetType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_bIsPureCast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicCast_Statics::NewProp_TargetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DynamicCast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DynamicCast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DynamicCast_Statics::ClassParams = {
		&UK2Node_DynamicCast::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicCast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DynamicCast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_DynamicCast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_DynamicCast, 4072494616);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_DynamicCast>()
	{
		return UK2Node_DynamicCast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_DynamicCast(Z_Construct_UClass_UK2Node_DynamicCast, &UK2Node_DynamicCast::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_DynamicCast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DynamicCast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
