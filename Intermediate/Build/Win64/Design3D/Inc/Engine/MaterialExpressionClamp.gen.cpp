// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionClamp.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClamp() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClampMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EClampMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClampMode, Z_Construct_UPackage__Script_Engine(), TEXT("EClampMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EClampMode>()
	{
		return EClampMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClampMode(EClampMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EClampMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EClampMode_Hash() { return 3462241817U; }
	UEnum* Z_Construct_UEnum_Engine_EClampMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClampMode"), 0, Get_Z_Construct_UEnum_Engine_EClampMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMODE_Clamp", (int64)CMODE_Clamp },
				{ "CMODE_ClampMin", (int64)CMODE_ClampMin },
				{ "CMODE_ClampMax", (int64)CMODE_ClampMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EClampMode",
				"EClampMode",
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
	void UMaterialExpressionClamp::StaticRegisterNativesUMaterialExpressionClamp()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister()
	{
		return UMaterialExpressionClamp::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionClamp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionClamp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionClamp.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Max" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault = { "MaxDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, MaxDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Min" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault = { "MinDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, MinDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode = { "ClampMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, ClampMode), Z_Construct_UEnum_Engine_EClampMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MaxDefault' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MinDefault' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionClamp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionClamp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams = {
		&UMaterialExpressionClamp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionClamp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionClamp, 2142172165);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionClamp>()
	{
		return UMaterialExpressionClamp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionClamp(Z_Construct_UClass_UMaterialExpressionClamp, &UMaterialExpressionClamp::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionClamp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClamp);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionClamp)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
