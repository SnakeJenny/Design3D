// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstLinearColorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstLinearColorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstLinearColorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstLinearColorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UInterpTrackInstLinearColorProp::StaticRegisterNativesUInterpTrackInstLinearColorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstLinearColorProp_NoRegister()
	{
		return UInterpTrackInstLinearColorProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics
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
	UObject* (*const Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstLinearColorProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstLinearColorProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::NewProp_ResetColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstLinearColorProp.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::NewProp_ResetColor = { "ResetColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstLinearColorProp, ResetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::NewProp_ResetColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::NewProp_ResetColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::NewProp_ResetColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstLinearColorProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::ClassParams = {
		&UInterpTrackInstLinearColorProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstLinearColorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstLinearColorProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstLinearColorProp, 1047587928);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstLinearColorProp>()
	{
		return UInterpTrackInstLinearColorProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstLinearColorProp(Z_Construct_UClass_UInterpTrackInstLinearColorProp, &UInterpTrackInstLinearColorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstLinearColorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstLinearColorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
