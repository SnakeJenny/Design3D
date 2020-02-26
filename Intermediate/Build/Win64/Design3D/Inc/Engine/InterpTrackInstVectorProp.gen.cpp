// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstVectorProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVectorProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVectorProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstVectorProp::StaticRegisterNativesUInterpTrackInstVectorProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVectorProp_NoRegister()
	{
		return UInterpTrackInstVectorProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstVectorProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstVectorProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::NewProp_ResetVector_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVectorProp.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::NewProp_ResetVector = { "ResetVector", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVectorProp, ResetVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::NewProp_ResetVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::NewProp_ResetVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::NewProp_ResetVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstVectorProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::ClassParams = {
		&UInterpTrackInstVectorProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstVectorProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstVectorProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstVectorProp, 3304429783);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstVectorProp>()
	{
		return UInterpTrackInstVectorProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVectorProp(Z_Construct_UClass_UInterpTrackInstVectorProp, &UInterpTrackInstVectorProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVectorProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVectorProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
