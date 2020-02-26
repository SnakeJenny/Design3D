// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
// End Cross Module References
	static UEnum* EEnvTestDot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDot"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDot>()
	{
		return EEnvTestDot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestDot(EEnvTestDot_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestDot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestDot_Hash() { return 513395619U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestDot"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestDot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestDot::Dot3D", (int64)EEnvTestDot::Dot3D },
				{ "EEnvTestDot::Dot2D", (int64)EEnvTestDot::Dot2D },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dot2D.DisplayName", "Dot 2D (Heading)" },
				{ "Dot2D.Tooltip", "Dot Product in the XY-plane, which is equivalent to the cosine of the heading or yaw angle." },
				{ "Dot3D.DisplayName", "Dot (3D)" },
				{ "Dot3D.Tooltip", "Fully 3D dot-product" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EEnvTestDot",
				"EEnvTestDot",
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
	void UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister()
	{
		return UEnvQueryTest_Dot::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Dot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteValue_MetaData[];
#endif
		static void NewProp_bAbsoluteValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TestMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\nwhen you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side,\nand values closer to 1 are more in front or behind (without distinguishing forward/backward)." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit(void* Obj)
	{
		((UEnvQueryTest_Dot*)Obj)->bAbsoluteValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue = { "bAbsoluteValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryTest_Dot), &Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDot, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of second line used by test" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB = { "LineB", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, LineB), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of first line used by test" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA = { "LineA", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Dot, LineA), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Dot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Dot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams = {
		&UEnvQueryTest_Dot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Dot, 3961049804);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Dot>()
	{
		return UEnvQueryTest_Dot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Dot(Z_Construct_UClass_UEnvQueryTest_Dot, &UEnvQueryTest_Dot::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Dot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Dot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
