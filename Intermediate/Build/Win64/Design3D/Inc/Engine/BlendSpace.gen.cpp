// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis();
// End Cross Module References
	void UBlendSpace::StaticRegisterNativesUBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpace_NoRegister()
	{
		return UBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisToScaleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisToScaleAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/BlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Contains a grid of data points with weights from sample points in the space" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If you have input interpolation, which axis to drive animation speed (scale) - i.e. for locomotion animation, speed axis will drive animation speed (thus scale)*" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation = { "AxisToScaleAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlendSpace, AxisToScaleAnimation), Z_Construct_UEnum_Engine_EBlendSpaceAxis, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpace_Statics::ClassParams = {
		&UBlendSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendSpace, 1105827043);
	template<> ENGINE_API UClass* StaticClass<UBlendSpace>()
	{
		return UBlendSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpace(Z_Construct_UClass_UBlendSpace, &UBlendSpace::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
