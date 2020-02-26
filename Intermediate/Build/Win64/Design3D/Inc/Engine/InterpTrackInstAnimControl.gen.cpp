// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstAnimControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAnimControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UInterpTrackInstAnimControl::StaticRegisterNativesUInterpTrackInstAnimControl()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister()
	{
		return UInterpTrackInstAnimControl::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAnimControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitPosition;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstAnimControl.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation = { "InitRotation", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition = { "InitPosition", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAnimControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::ClassParams = {
		&UInterpTrackInstAnimControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAnimControl, 3009091466);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstAnimControl>()
	{
		return UInterpTrackInstAnimControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAnimControl(Z_Construct_UClass_UInterpTrackInstAnimControl, &UInterpTrackInstAnimControl::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstAnimControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAnimControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
