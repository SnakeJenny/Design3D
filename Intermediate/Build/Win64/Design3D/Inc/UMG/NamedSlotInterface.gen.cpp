// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/NamedSlotInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlotInterface() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlotInterface::StaticRegisterNativesUNamedSlotInterface()
	{
	}
	UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister()
	{
		return UNamedSlotInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNamedSlotInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedSlotInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Components/NamedSlotInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedSlotInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INamedSlotInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams = {
		&UNamedSlotInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedSlotInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNamedSlotInterface, 1160121436);
	template<> UMG_API UClass* StaticClass<UNamedSlotInterface>()
	{
		return UNamedSlotInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNamedSlotInterface(Z_Construct_UClass_UNamedSlotInterface, &UNamedSlotInterface::StaticClass, TEXT("/Script/UMG"), TEXT("UNamedSlotInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlotInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
