// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavCollisionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCollisionBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavCollisionBase::StaticRegisterNativesUNavCollisionBase()
	{
	}
	UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister()
	{
		return UNavCollisionBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavCollisionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicObstacle_MetaData[];
#endif
		static void NewProp_bIsDynamicObstacle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicObstacle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavCollisionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollisionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Navigation/NavCollisionBase.h" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollisionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollisionBase.h" },
		{ "ToolTip", "If set, mesh will be used as dynamic obstacle (don't create navmesh on top, much faster adding/removing)" },
	};
#endif
	void Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_SetBit(void* Obj)
	{
		((UNavCollisionBase*)Obj)->bIsDynamicObstacle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle = { "bIsDynamicObstacle", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavCollisionBase), &Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavCollisionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavCollisionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavCollisionBase_Statics::ClassParams = {
		&UNavCollisionBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavCollisionBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavCollisionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavCollisionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavCollisionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavCollisionBase, 2454528130);
	template<> ENGINE_API UClass* StaticClass<UNavCollisionBase>()
	{
		return UNavCollisionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavCollisionBase(Z_Construct_UClass_UNavCollisionBase, &UNavCollisionBase::StaticClass, TEXT("/Script/Engine"), TEXT("UNavCollisionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCollisionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
