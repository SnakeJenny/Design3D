// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/NavigationObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationObjectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	void ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase()
	{
	}
	UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister()
	{
		return ANavigationObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPIEPlayerStart_MetaData[];
#endif
		static void NewProp_bIsPIEPlayerStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPIEPlayerStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BadSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoodSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoodSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Lighting LightColor Force" },
		{ "IncludePath", "Engine/NavigationObjectBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "True if this nav point was spawned to be a PIE player start." },
	};
#endif
	void Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit(void* Obj)
	{
		((ANavigationObjectBase*)Obj)->bIsPIEPlayerStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart = { "bIsPIEPlayerStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANavigationObjectBase), &Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Used to draw bad collision intersection in editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite = { "BadSprite", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationObjectBase, BadSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Normal editor sprite." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite = { "GoodSprite", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationObjectBase, GoodSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavigationObjectBase, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationObjectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationObjectBase, INavAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams = {
		&ANavigationObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationObjectBase, 936111602);
	template<> ENGINE_API UClass* StaticClass<ANavigationObjectBase>()
	{
		return ANavigationObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationObjectBase(Z_Construct_UClass_ANavigationObjectBase, &ANavigationObjectBase::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
