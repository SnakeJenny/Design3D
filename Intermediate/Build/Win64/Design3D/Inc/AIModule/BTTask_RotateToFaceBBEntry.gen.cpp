// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceBBEntry() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RotateToFaceBBEntry::StaticRegisterNativesUBTTask_RotateToFaceBBEntry()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister()
	{
		return UBTTask_RotateToFaceBBEntry::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Precision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
		{ "ToolTip", "Success condition precision in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RotateToFaceBBEntry, Precision), METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::NewProp_Precision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToFaceBBEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams = {
		&UBTTask_RotateToFaceBBEntry::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RotateToFaceBBEntry, 1006530446);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RotateToFaceBBEntry>()
	{
		return UBTTask_RotateToFaceBBEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RotateToFaceBBEntry(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry, &UBTTask_RotateToFaceBBEntry::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RotateToFaceBBEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceBBEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
