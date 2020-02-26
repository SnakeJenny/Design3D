// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackMoveAxis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMoveAxis() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
// End Cross Module References
	static UEnum* EInterpMoveAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpMoveAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpMoveAxis"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInterpMoveAxis>()
	{
		return EInterpMoveAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpMoveAxis(EInterpMoveAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EInterpMoveAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInterpMoveAxis_Hash() { return 3415625104U; }
	UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpMoveAxis"), 0, Get_Z_Construct_UEnum_Engine_EInterpMoveAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AXIS_TranslationX", (int64)AXIS_TranslationX },
				{ "AXIS_TranslationY", (int64)AXIS_TranslationY },
				{ "AXIS_TranslationZ", (int64)AXIS_TranslationZ },
				{ "AXIS_RotationX", (int64)AXIS_RotationX },
				{ "AXIS_RotationY", (int64)AXIS_RotationY },
				{ "AXIS_RotationZ", (int64)AXIS_RotationZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
				{ "ToolTip", "List of axies this track can use" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInterpMoveAxis",
				"EInterpMoveAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInterpTrackMoveAxis::StaticRegisterNativesUInterpTrackMoveAxis()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister()
	{
		return UInterpTrackMoveAxis::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackMoveAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookupTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackMoveAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Move Axis Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackMoveAxis.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
		{ "ToolTip", "Lookup track to use when looking at different groups for transform information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack = { "LookupTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMoveAxis, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
		{ "ToolTip", "The axis which this track will use when transforming an actor" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis = { "MoveAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMoveAxis, MoveAxis), Z_Construct_UEnum_Engine_EInterpMoveAxis, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackMoveAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackMoveAxis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::ClassParams = {
		&UInterpTrackMoveAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackMoveAxis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackMoveAxis, 3109584885);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackMoveAxis>()
	{
		return UInterpTrackMoveAxis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackMoveAxis(Z_Construct_UClass_UInterpTrackMoveAxis, &UInterpTrackMoveAxis::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackMoveAxis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMoveAxis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
