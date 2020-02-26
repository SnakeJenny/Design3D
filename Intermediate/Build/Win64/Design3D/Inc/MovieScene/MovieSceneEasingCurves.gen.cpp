// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingCurves() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EMovieSceneBuiltInEasing_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBuiltInEasing"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBuiltInEasing>()
	{
		return EMovieSceneBuiltInEasing_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneBuiltInEasing(EMovieSceneBuiltInEasing_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneBuiltInEasing"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Hash() { return 1552962171U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneBuiltInEasing"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneBuiltInEasing::Linear", (int64)EMovieSceneBuiltInEasing::Linear },
				{ "EMovieSceneBuiltInEasing::SinIn", (int64)EMovieSceneBuiltInEasing::SinIn },
				{ "EMovieSceneBuiltInEasing::SinOut", (int64)EMovieSceneBuiltInEasing::SinOut },
				{ "EMovieSceneBuiltInEasing::SinInOut", (int64)EMovieSceneBuiltInEasing::SinInOut },
				{ "EMovieSceneBuiltInEasing::QuadIn", (int64)EMovieSceneBuiltInEasing::QuadIn },
				{ "EMovieSceneBuiltInEasing::QuadOut", (int64)EMovieSceneBuiltInEasing::QuadOut },
				{ "EMovieSceneBuiltInEasing::QuadInOut", (int64)EMovieSceneBuiltInEasing::QuadInOut },
				{ "EMovieSceneBuiltInEasing::CubicIn", (int64)EMovieSceneBuiltInEasing::CubicIn },
				{ "EMovieSceneBuiltInEasing::CubicOut", (int64)EMovieSceneBuiltInEasing::CubicOut },
				{ "EMovieSceneBuiltInEasing::CubicInOut", (int64)EMovieSceneBuiltInEasing::CubicInOut },
				{ "EMovieSceneBuiltInEasing::QuartIn", (int64)EMovieSceneBuiltInEasing::QuartIn },
				{ "EMovieSceneBuiltInEasing::QuartOut", (int64)EMovieSceneBuiltInEasing::QuartOut },
				{ "EMovieSceneBuiltInEasing::QuartInOut", (int64)EMovieSceneBuiltInEasing::QuartInOut },
				{ "EMovieSceneBuiltInEasing::QuintIn", (int64)EMovieSceneBuiltInEasing::QuintIn },
				{ "EMovieSceneBuiltInEasing::QuintOut", (int64)EMovieSceneBuiltInEasing::QuintOut },
				{ "EMovieSceneBuiltInEasing::QuintInOut", (int64)EMovieSceneBuiltInEasing::QuintInOut },
				{ "EMovieSceneBuiltInEasing::ExpoIn", (int64)EMovieSceneBuiltInEasing::ExpoIn },
				{ "EMovieSceneBuiltInEasing::ExpoOut", (int64)EMovieSceneBuiltInEasing::ExpoOut },
				{ "EMovieSceneBuiltInEasing::ExpoInOut", (int64)EMovieSceneBuiltInEasing::ExpoInOut },
				{ "EMovieSceneBuiltInEasing::CircIn", (int64)EMovieSceneBuiltInEasing::CircIn },
				{ "EMovieSceneBuiltInEasing::CircOut", (int64)EMovieSceneBuiltInEasing::CircOut },
				{ "EMovieSceneBuiltInEasing::CircInOut", (int64)EMovieSceneBuiltInEasing::CircInOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircIn.Grouping", "Circular" },
				{ "CircIn.ToolTip", "Circular easing" },
				{ "CircInOut.Grouping", "Circular" },
				{ "CircOut.Grouping", "Circular" },
				{ "CubicIn.Grouping", "Cubic" },
				{ "CubicIn.ToolTip", "Cubic easing" },
				{ "CubicInOut.Grouping", "Cubic" },
				{ "CubicOut.Grouping", "Cubic" },
				{ "ExpoIn.Grouping", "Exponential" },
				{ "ExpoIn.ToolTip", "Exponential easing" },
				{ "ExpoInOut.Grouping", "Exponential" },
				{ "ExpoOut.Grouping", "Exponential" },
				{ "Linear.Grouping", "Linear" },
				{ "Linear.ToolTip", "Linear easing" },
				{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
				{ "QuadIn.Grouping", "Quadratic" },
				{ "QuadIn.ToolTip", "Quadratic easing" },
				{ "QuadInOut.Grouping", "Quadratic" },
				{ "QuadOut.Grouping", "Quadratic" },
				{ "QuartIn.Grouping", "Quartic" },
				{ "QuartIn.ToolTip", "Quartic easing" },
				{ "QuartInOut.Grouping", "Quartic" },
				{ "QuartOut.Grouping", "Quartic" },
				{ "QuintIn.Grouping", "Quintic" },
				{ "QuintIn.ToolTip", "Quintic easing" },
				{ "QuintInOut.Grouping", "Quintic" },
				{ "QuintOut.Grouping", "Quintic" },
				{ "SinIn.Grouping", "Sinusoidal" },
				{ "SinIn.ToolTip", "Sinusoidal easing" },
				{ "SinInOut.Grouping", "Sinusoidal" },
				{ "SinOut.Grouping", "Sinusoidal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneBuiltInEasing",
				"EMovieSceneBuiltInEasing",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneBuiltInEasingFunction::StaticRegisterNativesUMovieSceneBuiltInEasingFunction()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister()
	{
		return UMovieSceneBuiltInEasingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Built-In Function" },
		{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Easing" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneBuiltInEasingFunction, Type), Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBuiltInEasingFunction, IMovieSceneEasingFunction), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBuiltInEasingFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::ClassParams = {
		&UMovieSceneBuiltInEasingFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBuiltInEasingFunction, 1555008383);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBuiltInEasingFunction>()
	{
		return UMovieSceneBuiltInEasingFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBuiltInEasingFunction(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction, &UMovieSceneBuiltInEasingFunction::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBuiltInEasingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBuiltInEasingFunction);
	void UMovieSceneEasingExternalCurve::StaticRegisterNativesUMovieSceneEasingExternalCurve()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister()
	{
		return UMovieSceneEasingExternalCurve::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Curve Asset" },
		{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Easing" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEasingExternalCurve, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEasingExternalCurve, IMovieSceneEasingFunction), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEasingExternalCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::ClassParams = {
		&UMovieSceneEasingExternalCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEasingExternalCurve, 2963192273);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEasingExternalCurve>()
	{
		return UMovieSceneEasingExternalCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEasingExternalCurve(Z_Construct_UClass_UMovieSceneEasingExternalCurve, &UMovieSceneEasingExternalCurve::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEasingExternalCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingExternalCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
