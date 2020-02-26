// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVisibility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
// End Cross Module References
	void UInterpTrackInstVisibility::StaticRegisterNativesUInterpTrackInstVisibility()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister()
	{
		return UInterpTrackInstVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstVisibility.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, events between this time and the current time will be processed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVisibility, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InterpTrackInstVisibility" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVisibility, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstVisibility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::ClassParams = {
		&UInterpTrackInstVisibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstVisibility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstVisibility, 3217226651);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstVisibility>()
	{
		return UInterpTrackInstVisibility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstVisibility(Z_Construct_UClass_UInterpTrackInstVisibility, &UInterpTrackInstVisibility::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVisibility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
