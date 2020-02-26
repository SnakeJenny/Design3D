// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Distance() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static UEnum* EEnvTestDistance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDistance, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDistance"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDistance::Type>()
	{
		return EEnvTestDistance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestDistance(EEnvTestDistance_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestDistance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestDistance_Hash() { return 576639188U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestDistance"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestDistance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestDistance::Distance3D", (int64)EEnvTestDistance::Distance3D },
				{ "EEnvTestDistance::Distance2D", (int64)EEnvTestDistance::Distance2D },
				{ "EEnvTestDistance::DistanceZ", (int64)EEnvTestDistance::DistanceZ },
				{ "EEnvTestDistance::DistanceAbsoluteZ", (int64)EEnvTestDistance::DistanceAbsoluteZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DistanceAbsoluteZ.DisplayName", "Distance Z (Absolute)" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EEnvTestDistance",
				"EEnvTestDistance::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryTest_Distance::StaticRegisterNativesUEnvQueryTest_Distance()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister()
	{
		return UEnvQueryTest_Distance::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DistanceTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Distance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Distance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo = { "DistanceTo", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Distance, DistanceTo), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode_MetaData[] = {
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ToolTip", "testing mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Distance, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDistance, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Distance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Distance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::ClassParams = {
		&UEnvQueryTest_Distance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Distance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Distance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Distance, 1788115006);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Distance>()
	{
		return UEnvQueryTest_Distance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Distance(Z_Construct_UClass_UEnvQueryTest_Distance, &UEnvQueryTest_Distance::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Distance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Distance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
