// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ReplicationDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationDriver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver();
// End Cross Module References
	void UReplicationDriver::StaticRegisterNativesUReplicationDriver()
	{
	}
	UClass* Z_Construct_UClass_UReplicationDriver_NoRegister()
	{
		return UReplicationDriver::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplicationDriver_Statics::ClassParams = {
		&UReplicationDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicationDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicationDriver, 4082976759);
	template<> ENGINE_API UClass* StaticClass<UReplicationDriver>()
	{
		return UReplicationDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicationDriver(Z_Construct_UClass_UReplicationDriver, &UReplicationDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UReplicationDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationDriver);
	void UReplicationConnectionDriver::StaticRegisterNativesUReplicationConnectionDriver()
	{
	}
	UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister()
	{
		return UReplicationConnectionDriver::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationConnectionDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationConnectionDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
		{ "ToolTip", "Class/interface for replication extension that is per connection. It is up to the replication driver to create and associate these with a UNetConnection" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationConnectionDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationConnectionDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams = {
		&UReplicationConnectionDriver::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationConnectionDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicationConnectionDriver, 2692460836);
	template<> ENGINE_API UClass* StaticClass<UReplicationConnectionDriver>()
	{
		return UReplicationConnectionDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicationConnectionDriver(Z_Construct_UClass_UReplicationConnectionDriver, &UReplicationConnectionDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UReplicationConnectionDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationConnectionDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
