// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PhysicsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APhysicsVolume::StaticRegisterNativesAPhysicsVolume()
	{
	}
	UClass* Z_Construct_UClass_APhysicsVolume_NoRegister()
	{
		return APhysicsVolume::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPhysicsOnContact_MetaData[];
#endif
		static void NewProp_bPhysicsOnContact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPhysicsOnContact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaterVolume_MetaData[];
#endif
		static void NewProp_bWaterVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerminalVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "GameFramework/PhysicsVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "PhysicsVolume: A bounding volume which affects actor physics.\nEach AActor is affected at any time by one PhysicsVolume." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "By default, the origin of an AActor must be inside a PhysicsVolume for it to affect the actor. However if this flag is true, the other actor only has to touch the volume to be affected by it." },
	};
#endif
	void Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_SetBit(void* Obj)
	{
		((APhysicsVolume*)Obj)->bPhysicsOnContact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact = { "bPhysicsOnContact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APhysicsVolume), &Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "True if this volume contains a fluid like water" },
	};
#endif
	void Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_SetBit(void* Obj)
	{
		((APhysicsVolume*)Obj)->bWaterVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume = { "bWaterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APhysicsVolume), &Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "This property controls the amount of friction applied by the volume as pawns using CharacterMovement move through it. The higher this value, the harder it will feel to move through" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction = { "FluidFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsVolume, FluidFriction), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "Determines which PhysicsVolume takes precedence if they overlap (higher number = higher priority)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "Terminal velocity of pawns using CharacterMovement when falling." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity = { "TerminalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsVolume, TerminalVelocity), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsVolume_Statics::ClassParams = {
		&APhysicsVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsVolume, 4253233913);
	template<> ENGINE_API UClass* StaticClass<APhysicsVolume>()
	{
		return APhysicsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsVolume(Z_Construct_UClass_APhysicsVolume, &APhysicsVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APhysicsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
