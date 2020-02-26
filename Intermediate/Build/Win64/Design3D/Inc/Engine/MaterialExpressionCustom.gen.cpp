// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionCustom.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustom() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* ECustomMaterialOutputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomMaterialOutputType, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomMaterialOutputType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomMaterialOutputType>()
	{
		return ECustomMaterialOutputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMaterialOutputType(ECustomMaterialOutputType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomMaterialOutputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Hash() { return 2357166073U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMaterialOutputType"), 0, Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMOT_Float1", (int64)CMOT_Float1 },
				{ "CMOT_Float2", (int64)CMOT_Float2 },
				{ "CMOT_Float3", (int64)CMOT_Float3 },
				{ "CMOT_Float4", (int64)CMOT_Float4 },
				{ "CMOT_MAX", (int64)CMOT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECustomMaterialOutputType",
				"ECustomMaterialOutputType",
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
class UScriptStruct* FCustomInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomInput, Z_Construct_UPackage__Script_Engine(), TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomInput>()
{
	return FCustomInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomInput(FCustomInput::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomInput
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomInput")),new UScriptStruct::TCppStructOps<FCustomInput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomInput;
	struct Z_Construct_UScriptStruct_FCustomInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomInput",
		sizeof(FCustomInput),
		alignof(FCustomInput),
		Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash() { return 2433078249U; }
	void UMaterialExpressionCustom::StaticRegisterNativesUMaterialExpressionCustom()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister()
	{
		return UMaterialExpressionCustom::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCustom.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Inputs), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Code), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams = {
		&UMaterialExpressionCustom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionCustom, 4062324111);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCustom>()
	{
		return UMaterialExpressionCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCustom(Z_Construct_UClass_UMaterialExpressionCustom, &UMaterialExpressionCustom::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustom);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionCustom)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
