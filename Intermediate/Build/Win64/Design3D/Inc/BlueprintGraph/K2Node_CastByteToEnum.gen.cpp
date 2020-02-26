// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_CastByteToEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CastByteToEnum() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CastByteToEnum_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CastByteToEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UK2Node_CastByteToEnum::StaticRegisterNativesUK2Node_CastByteToEnum()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_CastByteToEnum_NoRegister()
	{
		return UK2Node_CastByteToEnum::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CastByteToEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSafe_MetaData[];
#endif
		static void NewProp_bSafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CastByteToEnum.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
		{ "ToolTip", "if true, the node returns always a valid value" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_SetBit(void* Obj)
	{
		((UK2Node_CastByteToEnum*)Obj)->bSafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe = { "bSafe", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_CastByteToEnum), &Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_CastByteToEnum, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CastByteToEnum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::ClassParams = {
		&UK2Node_CastByteToEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CastByteToEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_CastByteToEnum, 1607426592);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CastByteToEnum>()
	{
		return UK2Node_CastByteToEnum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_CastByteToEnum(Z_Construct_UClass_UK2Node_CastByteToEnum, &UK2Node_CastByteToEnum::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_CastByteToEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CastByteToEnum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
