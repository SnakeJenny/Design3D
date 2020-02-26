// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Services/BTService_DefaultFocus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_DefaultFocus() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService_DefaultFocus::StaticRegisterNativesUBTService_DefaultFocus()
	{
	}
	UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister()
	{
		return UBTService_DefaultFocus::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_DefaultFocus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_DefaultFocus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Service" },
		{ "IncludePath", "BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Default Focus service node.\nA service node that automatically sets the AI controller's focus when it becomes active." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
		{ "ToolTip", "not exposed to users on purpose. Here to make reusing focus-setting mechanics by derived classes possible" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority = { "FocusPriority", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_DefaultFocus, FocusPriority), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_DefaultFocus_Statics::NewProp_FocusPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_DefaultFocus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_DefaultFocus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_DefaultFocus_Statics::ClassParams = {
		&UBTService_DefaultFocus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTService_DefaultFocus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_DefaultFocus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_DefaultFocus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_DefaultFocus, 2858257153);
	template<> AIMODULE_API UClass* StaticClass<UBTService_DefaultFocus>()
	{
		return UBTService_DefaultFocus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_DefaultFocus(Z_Construct_UClass_UBTService_DefaultFocus, &UBTService_DefaultFocus::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService_DefaultFocus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_DefaultFocus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
