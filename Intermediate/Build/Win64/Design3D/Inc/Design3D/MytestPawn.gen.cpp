// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/MytestPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytestPawn() {}
// Cross Module References
	DESIGN3D_API UClass* Z_Construct_UClass_AMytestPawn_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_AMytestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void AMytestPawn::StaticRegisterNativesAMytestPawn()
	{
	}
	UClass* Z_Construct_UClass_AMytestPawn_NoRegister()
	{
		return AMytestPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMytestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PCOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMytestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMytestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MytestPawn.h" },
		{ "ModuleRelativePath", "MytestPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMytestPawn_Statics::NewProp_PCOwner_MetaData[] = {
		{ "ModuleRelativePath", "MytestPawn.h" },
		{ "ToolTip", "PlayerController that owns this Camera actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMytestPawn_Statics::NewProp_PCOwner = { "PCOwner", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMytestPawn, PCOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMytestPawn_Statics::NewProp_PCOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMytestPawn_Statics::NewProp_PCOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMytestPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMytestPawn_Statics::NewProp_PCOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMytestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytestPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMytestPawn_Statics::ClassParams = {
		&AMytestPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMytestPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMytestPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMytestPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMytestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMytestPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMytestPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMytestPawn, 2298750073);
	template<> DESIGN3D_API UClass* StaticClass<AMytestPawn>()
	{
		return AMytestPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMytestPawn(Z_Construct_UClass_AMytestPawn, &AMytestPawn::StaticClass, TEXT("/Script/Design3D"), TEXT("AMytestPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMytestPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
