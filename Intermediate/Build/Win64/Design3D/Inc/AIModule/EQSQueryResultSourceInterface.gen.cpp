// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSQueryResultSourceInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEQSQueryResultSourceInterface::StaticRegisterNativesUEQSQueryResultSourceInterface()
	{
	}
	UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister()
	{
		return UEQSQueryResultSourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEQSQueryResultSourceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::ClassParams = {
		&UEQSQueryResultSourceInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEQSQueryResultSourceInterface, 52750256);
	template<> AIMODULE_API UClass* StaticClass<UEQSQueryResultSourceInterface>()
	{
		return UEQSQueryResultSourceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEQSQueryResultSourceInterface(Z_Construct_UClass_UEQSQueryResultSourceInterface, &UEQSQueryResultSourceInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UEQSQueryResultSourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSQueryResultSourceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
