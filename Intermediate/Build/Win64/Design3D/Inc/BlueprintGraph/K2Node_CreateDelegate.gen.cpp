// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_CreateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CreateDelegate() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CreateDelegate_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CreateDelegate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UK2Node_CreateDelegate::StaticRegisterNativesUK2Node_CreateDelegate()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_CreateDelegate_NoRegister()
	{
		return UK2Node_CreateDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CreateDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedFunctionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedFunctionGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedFunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CreateDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CreateDelegate.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid = { "SelectedFunctionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_CreateDelegate, SelectedFunctionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CreateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName = { "SelectedFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_CreateDelegate, SelectedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CreateDelegate_Statics::NewProp_SelectedFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CreateDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CreateDelegate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CreateDelegate_Statics::ClassParams = {
		&UK2Node_CreateDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CreateDelegate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_CreateDelegate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_CreateDelegate, 2408326207);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CreateDelegate>()
	{
		return UK2Node_CreateDelegate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_CreateDelegate(Z_Construct_UClass_UK2Node_CreateDelegate, &UK2Node_CreateDelegate::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_CreateDelegate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CreateDelegate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
