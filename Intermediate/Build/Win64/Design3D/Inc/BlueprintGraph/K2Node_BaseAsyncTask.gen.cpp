// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_BaseAsyncTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BaseAsyncTask() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_BaseAsyncTask::StaticRegisterNativesUK2Node_BaseAsyncTask()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister()
	{
		return UK2Node_BaseAsyncTask::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyActivateFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProxyActivateFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProxyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProxyFactoryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProxyFactoryFunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_BaseAsyncTask.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "!!! The proxy object should have RF_StrongRefOnFrame flag. !!!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The name of the 'go' function on the proxy object that will be called after delegates are in place, can be NAME_None" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName = { "ProxyActivateFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyActivateFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The type of proxy object that will be created" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass = { "ProxyClass", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The class containing the proxy object functions" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass = { "ProxyFactoryClass", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyFactoryClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The name of the function to call to create a proxy object" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName = { "ProxyFactoryFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyFactoryFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BaseAsyncTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::ClassParams = {
		&UK2Node_BaseAsyncTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_BaseAsyncTask, 3915113218);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_BaseAsyncTask>()
	{
		return UK2Node_BaseAsyncTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_BaseAsyncTask(Z_Construct_UClass_UK2Node_BaseAsyncTask, &UK2Node_BaseAsyncTask::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_BaseAsyncTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BaseAsyncTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
