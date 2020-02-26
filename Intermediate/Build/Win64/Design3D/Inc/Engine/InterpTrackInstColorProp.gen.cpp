// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstColorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstColorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UInterpTrackInstColorProp::StaticRegisterNativesUInterpTrackInstColorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstColorProp_NoRegister()
	{
		return UInterpTrackInstColorProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstColorProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstColorProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstColorProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstColorProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstColorProp_Statics::NewProp_ResetColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorProp.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstColorProp_Statics::NewProp_ResetColor = { "ResetColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstColorProp, ResetColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstColorProp_Statics::NewProp_ResetColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstColorProp_Statics::NewProp_ResetColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstColorProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstColorProp_Statics::NewProp_ResetColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstColorProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstColorProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstColorProp_Statics::ClassParams = {
		&UInterpTrackInstColorProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstColorProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstColorProp_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstColorProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstColorProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstColorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstColorProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstColorProp, 2022760275);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstColorProp>()
	{
		return UInterpTrackInstColorProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstColorProp(Z_Construct_UClass_UInterpTrackInstColorProp, &UInterpTrackInstColorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstColorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstColorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
