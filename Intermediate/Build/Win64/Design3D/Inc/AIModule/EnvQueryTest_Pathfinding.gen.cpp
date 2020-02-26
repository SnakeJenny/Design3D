// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Pathfinding() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static UEnum* EEnvTestPathfinding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPathfinding, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPathfinding"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestPathfinding::Type>()
	{
		return EEnvTestPathfinding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestPathfinding(EEnvTestPathfinding_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestPathfinding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Hash() { return 1882759485U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestPathfinding"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestPathfinding::PathExist", (int64)EEnvTestPathfinding::PathExist },
				{ "EEnvTestPathfinding::PathCost", (int64)EEnvTestPathfinding::PathCost },
				{ "EEnvTestPathfinding::PathLength", (int64)EEnvTestPathfinding::PathLength },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EEnvTestPathfinding",
				"EEnvTestPathfinding::Type",
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
	void UEnvQueryTest_Pathfinding::StaticRegisterNativesUEnvQueryTest_Pathfinding()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister()
	{
		return UEnvQueryTest_Pathfinding::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipUnreachable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkipUnreachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFromContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathFromContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "navigation filter to use in pathfinding" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "if set, items with failed path will be invalidated (PathCost, PathLength)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable = { "SkipUnreachable", nullptr, (EPropertyFlags)0x0010048000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, SkipUnreachable), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "pathfinding direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext = { "PathFromContext", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, PathFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "context: other end of pathfinding test" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
		{ "ToolTip", "testing mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, TestMode), Z_Construct_UEnum_AIModule_EEnvTestPathfinding, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_SkipUnreachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_PathFromContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::NewProp_TestMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Pathfinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::ClassParams = {
		&UEnvQueryTest_Pathfinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Pathfinding, 459437168);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Pathfinding>()
	{
		return UEnvQueryTest_Pathfinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Pathfinding(Z_Construct_UClass_UEnvQueryTest_Pathfinding, &UEnvQueryTest_Pathfinding::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Pathfinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Pathfinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
