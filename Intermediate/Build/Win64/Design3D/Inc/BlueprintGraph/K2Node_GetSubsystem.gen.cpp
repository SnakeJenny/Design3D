// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_GetSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetSubsystem() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem();
// End Cross Module References
	void UK2Node_GetSubsystem::StaticRegisterNativesUK2Node_GetSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetSubsystem_NoRegister()
	{
		return UK2Node_GetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass = { "CustomClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetSubsystem, CustomClass), Z_Construct_UClass_USubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSubsystem_Statics::NewProp_CustomClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSubsystem_Statics::ClassParams = {
		&UK2Node_GetSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetSubsystem, 1509555075);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetSubsystem>()
	{
		return UK2Node_GetSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetSubsystem(Z_Construct_UClass_UK2Node_GetSubsystem, &UK2Node_GetSubsystem::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSubsystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GetSubsystem)
	void UK2Node_GetSubsystemFromPC::StaticRegisterNativesUK2Node_GetSubsystemFromPC()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC_NoRegister()
	{
		return UK2Node_GetSubsystemFromPC::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSubsystemFromPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::ClassParams = {
		&UK2Node_GetSubsystemFromPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSubsystemFromPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetSubsystemFromPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetSubsystemFromPC, 698868679);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetSubsystemFromPC>()
	{
		return UK2Node_GetSubsystemFromPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetSubsystemFromPC(Z_Construct_UClass_UK2Node_GetSubsystemFromPC, &UK2Node_GetSubsystemFromPC::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetSubsystemFromPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSubsystemFromPC);
	void UK2Node_GetEngineSubsystem::StaticRegisterNativesUK2Node_GetEngineSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem_NoRegister()
	{
		return UK2Node_GetEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetEngineSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::ClassParams = {
		&UK2Node_GetEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetEngineSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetEngineSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetEngineSubsystem, 3396965280);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetEngineSubsystem>()
	{
		return UK2Node_GetEngineSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetEngineSubsystem(Z_Construct_UClass_UK2Node_GetEngineSubsystem, &UK2Node_GetEngineSubsystem::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetEngineSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetEngineSubsystem);
	void UK2Node_GetEditorSubsystem::StaticRegisterNativesUK2Node_GetEditorSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem_NoRegister()
	{
		return UK2Node_GetEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_GetSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSubsystem.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetEditorSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::ClassParams = {
		&UK2Node_GetEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetEditorSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetEditorSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetEditorSubsystem, 3454145598);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetEditorSubsystem>()
	{
		return UK2Node_GetEditorSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetEditorSubsystem(Z_Construct_UClass_UK2Node_GetEditorSubsystem, &UK2Node_GetEditorSubsystem::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetEditorSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetEditorSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
