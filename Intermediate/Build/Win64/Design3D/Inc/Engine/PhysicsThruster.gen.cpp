// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsThruster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThruster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
// End Cross Module References
	void APhysicsThruster::StaticRegisterNativesAPhysicsThruster()
	{
	}
	UClass* Z_Construct_UClass_APhysicsThruster_NoRegister()
	{
		return APhysicsThruster::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsThruster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrusterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrusterComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsThruster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsThruster.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsThruster, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physics" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Activation,Components|Activation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ToolTip", "Thruster component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent = { "ThrusterComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsThruster, ThrusterComponent), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsThruster_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsThruster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsThruster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsThruster_Statics::ClassParams = {
		&APhysicsThruster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsThruster_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsThruster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsThruster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsThruster, 791085824);
	template<> ENGINE_API UClass* StaticClass<APhysicsThruster>()
	{
		return APhysicsThruster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsThruster(Z_Construct_UClass_APhysicsThruster, &APhysicsThruster::StaticClass, TEXT("/Script/Engine"), TEXT("APhysicsThruster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsThruster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
