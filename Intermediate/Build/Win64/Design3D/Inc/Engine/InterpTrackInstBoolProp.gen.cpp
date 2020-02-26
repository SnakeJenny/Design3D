// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstBoolProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstBoolProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UBoolProperty();
// End Cross Module References
	void UInterpTrackInstBoolProp::StaticRegisterNativesUInterpTrackInstBoolProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister()
	{
		return UInterpTrackInstBoolProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstBoolProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetBool_MetaData[];
#endif
		static void NewProp_ResetBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstBoolProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_SetBit(void* Obj)
	{
		((UInterpTrackInstBoolProp*)Obj)->ResetBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool = { "ResetBool", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterpTrackInstBoolProp), &Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_BoolProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
		{ "ToolTip", "Mask that indicates which bit the boolean property actually uses of the value pointed to by BoolProp." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstBoolProp, BoolProperty), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_BoolProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_BoolProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_BoolProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstBoolProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::ClassParams = {
		&UInterpTrackInstBoolProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstBoolProp, 1039048544);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstBoolProp>()
	{
		return UInterpTrackInstBoolProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstBoolProp(Z_Construct_UClass_UInterpTrackInstBoolProp, &UInterpTrackInstBoolProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstBoolProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstBoolProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
