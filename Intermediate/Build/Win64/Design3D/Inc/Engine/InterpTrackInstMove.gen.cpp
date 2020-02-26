// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstMove() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstMove::StaticRegisterNativesUInterpTrackInstMove()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister()
	{
		return UInterpTrackInstMove::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstMove.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
		{ "ToolTip", "Saved rotation. Used in editor for resetting when quitting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation = { "ResetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstMove, ResetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
		{ "ToolTip", "Saved position. Used in editor for resetting when quitting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation = { "ResetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstMove, ResetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstMove_Statics::ClassParams = {
		&UInterpTrackInstMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstMove, 3905023016);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstMove>()
	{
		return UInterpTrackInstMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstMove(Z_Construct_UClass_UInterpTrackInstMove, &UInterpTrackInstMove::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
