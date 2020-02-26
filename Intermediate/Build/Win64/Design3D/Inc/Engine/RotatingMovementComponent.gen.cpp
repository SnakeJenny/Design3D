// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/RotatingMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void URotatingMovementComponent::StaticRegisterNativesURotatingMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister()
	{
		return URotatingMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_URotatingMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationInLocalSpace_MetaData[];
#endif
		static void NewProp_bRotationInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationInLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotatingMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatingMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "HideCategories", "Velocity" },
		{ "IncludePath", "GameFramework/RotatingMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Performs continuous rotation of a component at a specific rotation rate.\nRotation can optionally be offset around a pivot point.\nCollision testing is not performed during movement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Whether rotation is applied in local or world space." },
	};
#endif
	void Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_SetBit(void* Obj)
	{
		((URotatingMovementComponent*)Obj)->bRotationInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace = { "bRotationInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URotatingMovementComponent), &Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "Translation of pivot point around which we rotate, relative to current rotation.\nFor instance, with PivotTranslation set to (X=+100, Y=0, Z=0), rotation will occur\naround the point +100 units along the local X axis from the center of the object,\nrather than around the object's origin (the default)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation = { "PivotTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotatingMovementComponent, PivotTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "RotatingComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/RotatingMovementComponent.h" },
		{ "ToolTip", "How fast to update roll/pitch/yaw of the component we update." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotatingMovementComponent, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_bRotationInLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_PivotTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatingMovementComponent_Statics::NewProp_RotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotatingMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatingMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URotatingMovementComponent_Statics::ClassParams = {
		&URotatingMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URotatingMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URotatingMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotatingMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URotatingMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URotatingMovementComponent, 292476301);
	template<> ENGINE_API UClass* StaticClass<URotatingMovementComponent>()
	{
		return URotatingMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URotatingMovementComponent(Z_Construct_UClass_URotatingMovementComponent, &URotatingMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URotatingMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotatingMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
