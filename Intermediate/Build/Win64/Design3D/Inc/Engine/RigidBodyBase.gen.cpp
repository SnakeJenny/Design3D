// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/RigidBodyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigidBodyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ARigidBodyBase::StaticRegisterNativesARigidBodyBase()
	{
	}
	UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister()
	{
		return ARigidBodyBase::StaticClass();
	}
	struct Z_Construct_UClass_ARigidBodyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARigidBodyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "PhysicsEngine/RigidBodyBase.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RigidBodyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARigidBodyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARigidBodyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams = {
		&ARigidBodyBase::StaticClass,
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
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARigidBodyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARigidBodyBase, 2407846675);
	template<> ENGINE_API UClass* StaticClass<ARigidBodyBase>()
	{
		return ARigidBodyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARigidBodyBase(Z_Construct_UClass_ARigidBodyBase, &ARigidBodyBase::StaticClass, TEXT("/Script/Engine"), TEXT("ARigidBodyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARigidBodyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
