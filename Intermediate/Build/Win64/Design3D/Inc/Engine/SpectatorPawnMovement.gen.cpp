// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister()
	{
		return USpectatorPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_USpectatorPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectatorPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/SpectatorPawnMovement.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
		{ "ToolTip", "If true, component moves at full speed no matter the time dilation. Default is false." },
	};
#endif
	void Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((USpectatorPawnMovement*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpectatorPawnMovement), &Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectatorPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorPawnMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams = {
		&USpectatorPawnMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectatorPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectatorPawnMovement, 2742048211);
	template<> ENGINE_API UClass* StaticClass<USpectatorPawnMovement>()
	{
		return USpectatorPawnMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectatorPawnMovement(Z_Construct_UClass_USpectatorPawnMovement, &USpectatorPawnMovement::StaticClass, TEXT("/Script/Engine"), TEXT("USpectatorPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
