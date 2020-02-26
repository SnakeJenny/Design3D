// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/Design3DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesign3DGameModeBase() {}
// Cross Module References
	DESIGN3D_API UClass* Z_Construct_UClass_ADesign3DGameModeBase_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_ADesign3DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Design3D();
// End Cross Module References
	void ADesign3DGameModeBase::StaticRegisterNativesADesign3DGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADesign3DGameModeBase_NoRegister()
	{
		return ADesign3DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADesign3DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesign3DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesign3DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Design3DGameModeBase.h" },
		{ "ModuleRelativePath", "Design3DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesign3DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesign3DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesign3DGameModeBase_Statics::ClassParams = {
		&ADesign3DGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADesign3DGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADesign3DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesign3DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesign3DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesign3DGameModeBase, 3519963810);
	template<> DESIGN3D_API UClass* StaticClass<ADesign3DGameModeBase>()
	{
		return ADesign3DGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesign3DGameModeBase(Z_Construct_UClass_ADesign3DGameModeBase, &ADesign3DGameModeBase::StaticClass, TEXT("/Script/Design3D"), TEXT("ADesign3DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesign3DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
