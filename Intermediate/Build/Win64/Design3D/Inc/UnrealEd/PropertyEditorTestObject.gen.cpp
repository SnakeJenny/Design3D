// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/PropertyEditorTestObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyEditorTestObject() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EditColor();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ArrayLabelEnum();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UNREALED_API UClass* Z_Construct_UClass_UPropertyEditorTestObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPropertyEditorTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static UEnum* EditColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EditColor, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditColor"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EditColor>()
	{
		return EditColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EditColor(EditColor_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EditColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EditColor_Hash() { return 2485928828U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EditColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EditColor"), 0, Get_Z_Construct_UEnum_UnrealEd_EditColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EditColor::Red", (int64)EditColor::Red },
				{ "EditColor::Orange", (int64)EditColor::Orange },
				{ "EditColor::Yellow", (int64)EditColor::Yellow },
				{ "EditColor::Green", (int64)EditColor::Green },
				{ "EditColor::Blue", (int64)EditColor::Blue },
				{ "EditColor::Indigo", (int64)EditColor::Indigo },
				{ "EditColor::Violet", (int64)EditColor::Violet },
				{ "EditColor::Pink", (int64)EditColor::Pink },
				{ "EditColor::Magenta", (int64)EditColor::Magenta },
				{ "EditColor::Cyan", (int64)EditColor::Cyan },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EditColor",
				"EditColor",
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
	static UEnum* ArrayLabelEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ArrayLabelEnum, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ArrayLabelEnum"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ArrayLabelEnum>()
	{
		return ArrayLabelEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ArrayLabelEnum(ArrayLabelEnum_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ArrayLabelEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ArrayLabelEnum_Hash() { return 3522614054U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ArrayLabelEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ArrayLabelEnum"), 0, Get_Z_Construct_UEnum_UnrealEd_ArrayLabelEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ArrayIndex0", (int64)ArrayIndex0 },
				{ "ArrayIndex1", (int64)ArrayIndex1 },
				{ "ArrayIndex2", (int64)ArrayIndex2 },
				{ "ArrayIndex3", (int64)ArrayIndex3 },
				{ "ArrayIndex4", (int64)ArrayIndex4 },
				{ "ArrayIndex5", (int64)ArrayIndex5 },
				{ "ArrayIndex_MAX", (int64)ArrayIndex_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ArrayLabelEnum",
				"ArrayLabelEnum",
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
	static UEnum* PropertEditorTestEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PropertEditorTestEnum"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<PropertEditorTestEnum>()
	{
		return PropertEditorTestEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PropertEditorTestEnum(PropertEditorTestEnum_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("PropertEditorTestEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum_Hash() { return 234961344U; }
	UEnum* Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PropertEditorTestEnum"), 0, Get_Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PropertyEditorTest_Enum1", (int64)PropertyEditorTest_Enum1 },
				{ "PropertyEditorTest_Enum2", (int64)PropertyEditorTest_Enum2 },
				{ "PropertyEditorTest_Enum3", (int64)PropertyEditorTest_Enum3 },
				{ "PropertyEditorTest_Enum4", (int64)PropertyEditorTest_Enum4 },
				{ "PropertyEditorTest_Enum5", (int64)PropertyEditorTest_Enum5 },
				{ "PropertyEditorTest_Enum6", (int64)PropertyEditorTest_Enum6 },
				{ "PropertyEditorTest_MAX", (int64)PropertyEditorTest_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
				{ "PropertyEditorTest_Enum1.Hidden", "" },
				{ "PropertyEditorTest_Enum1.ToolTip", "This comment should appear above enum 1" },
				{ "PropertyEditorTest_Enum2.ToolTip", "This comment should appear above enum 2" },
				{ "PropertyEditorTest_Enum3.Hidden", "" },
				{ "PropertyEditorTest_Enum3.ToolTip", "This comment should appear above enum 3" },
				{ "PropertyEditorTest_Enum4.ToolTip", "This comment should appear above enum 4" },
				{ "PropertyEditorTest_Enum5.Hidden", "" },
				{ "PropertyEditorTest_Enum5.ToolTip", "This comment should appear above enum 5" },
				{ "PropertyEditorTest_Enum6.ToolTip", "This comment should appear above enum 6" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"PropertEditorTestEnum",
				"PropertEditorTestEnum",
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
class UScriptStruct* FPropertyEditorTestBasicStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PropertyEditorTestBasicStruct"), sizeof(FPropertyEditorTestBasicStruct), Get_Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPropertyEditorTestBasicStruct>()
{
	return FPropertyEditorTestBasicStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyEditorTestBasicStruct(FPropertyEditorTestBasicStruct::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("PropertyEditorTestBasicStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestBasicStruct
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestBasicStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyEditorTestBasicStruct")),new UScriptStruct::TCppStructOps<FPropertyEditorTestBasicStruct>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestBasicStruct;
	struct Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPropertyInsideAStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPropertyInsideAStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyInsideAStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatPropertyInsideAStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntPropertyInsideAStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntPropertyInsideAStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "This structs properties should be pushed out to categories inside its parent category unless it is in an array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyEditorTestBasicStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_InnerStruct_MetaData[] = {
		{ "Category", "InnerStructCategoryWithPushedOutProps" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_InnerStruct = { "InnerStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestBasicStruct, InnerStruct), Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_InnerStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_InnerStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_ObjectPropertyInsideAStruct_MetaData[] = {
		{ "Category", "InnerStructCategoryWithPushedOutProps" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_ObjectPropertyInsideAStruct = { "ObjectPropertyInsideAStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestBasicStruct, ObjectPropertyInsideAStruct), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_ObjectPropertyInsideAStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_ObjectPropertyInsideAStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_FloatPropertyInsideAStruct_MetaData[] = {
		{ "Category", "InnerStructCategoryWithPushedOutProps" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_FloatPropertyInsideAStruct = { "FloatPropertyInsideAStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestBasicStruct, FloatPropertyInsideAStruct), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_FloatPropertyInsideAStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_FloatPropertyInsideAStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_IntPropertyInsideAStruct_MetaData[] = {
		{ "Category", "InnerStructCategoryWithPushedOutProps" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_IntPropertyInsideAStruct = { "IntPropertyInsideAStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestBasicStruct, IntPropertyInsideAStruct), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_IntPropertyInsideAStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_IntPropertyInsideAStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_InnerStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_ObjectPropertyInsideAStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_FloatPropertyInsideAStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::NewProp_IntPropertyInsideAStruct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PropertyEditorTestBasicStruct",
		sizeof(FPropertyEditorTestBasicStruct),
		alignof(FPropertyEditorTestBasicStruct),
		Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyEditorTestBasicStruct"), sizeof(FPropertyEditorTestBasicStruct), Get_Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct_Hash() { return 646769689U; }
class UScriptStruct* FPropertyEditorTestSubStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PropertyEditorTestSubStruct"), sizeof(FPropertyEditorTestSubStruct), Get_Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPropertyEditorTestSubStruct>()
{
	return FPropertyEditorTestSubStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyEditorTestSubStruct(FPropertyEditorTestSubStruct::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("PropertyEditorTestSubStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestSubStruct
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestSubStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyEditorTestSubStruct")),new UScriptStruct::TCppStructOps<FPropertyEditorTestSubStruct>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFPropertyEditorTestSubStruct;
	struct Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedStructInsideUncustomizedStruct2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedStructInsideUncustomizedStruct2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedStructInsideUncustomizedStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedStructInsideUncustomizedStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyEditorTestSubStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct2_MetaData[] = {
		{ "Category", "PropertyEditorTestSubStruct" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct2 = { "CustomizedStructInsideUncustomizedStruct2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestSubStruct, CustomizedStructInsideUncustomizedStruct2), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct_MetaData[] = {
		{ "Category", "PropertyEditorTestSubStruct" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct = { "CustomizedStructInsideUncustomizedStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestSubStruct, CustomizedStructInsideUncustomizedStruct), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_SecondProperty_MetaData[] = {
		{ "Category", "PropertyEditorTestSubStruct" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_SecondProperty = { "SecondProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestSubStruct, SecondProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_SecondProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_SecondProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_FirstProperty_MetaData[] = {
		{ "Category", "PropertyEditorTestSubStruct" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_FirstProperty = { "FirstProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyEditorTestSubStruct, FirstProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_FirstProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_FirstProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_CustomizedStructInsideUncustomizedStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_SecondProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::NewProp_FirstProperty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PropertyEditorTestSubStruct",
		sizeof(FPropertyEditorTestSubStruct),
		alignof(FPropertyEditorTestSubStruct),
		Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyEditorTestSubStruct"), sizeof(FPropertyEditorTestSubStruct), Get_Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyEditorTestSubStruct_Hash() { return 1383503903U; }
	void UPropertyEditorTestObject::StaticRegisterNativesUPropertyEditorTestObject()
	{
	}
	UClass* Z_Construct_UClass_UPropertyEditorTestObject_NoRegister()
	{
		return UPropertyEditorTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyEditorTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureOrBlendableInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureOrBlendableInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightPropagationVolumeBlendable_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_LightPropagationVolumeBlendable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimClassInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AnimClassInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendableInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_BlendableInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorToVectorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LinearColorToVectorMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorToVectorMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorToVectorMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorToFloatMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VectorToFloatMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorToFloatMap_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VectorToFloatMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorToStringMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LinearColorToStringMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorToStringMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LinearColorToStringMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_VectorSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_LinearColorSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameToNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NameToNameMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntToEnumMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IntToEnumMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToEnumMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IntToEnumMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToColorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectToColorMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToColorMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectToColorMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToInt32Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectToInt32Map;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToInt32Map_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectToInt32Map_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToActorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringToActorMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToActorMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StringToActorMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringToObjectMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToObjectMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StringToObjectMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToFloatMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringToFloatMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToFloatMap_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StringToFloatMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ToStructMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Int32ToStructMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32ToStructMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Int32ToStructMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToColorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringToColorMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToColorMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringToColorMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ToStringMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Int32ToStringMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32ToStringMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Int32ToStringMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_NameSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditColorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_EditColorSet;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditColorSet_ElementProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditColorSet_ElementProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ObjectSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StringSet;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_FloatSet;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Set_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Int32Set;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Set_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyActorsAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlyActorsAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnyMaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnyMaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayOfEditInlineNewSMCs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayOfEditInlineNewSMCs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayOfEditInlineNewSMCs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInlineNewStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditInlineNewStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayOfStructs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayOfStructs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayOfStructs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetReferenceCustomStructWithEditCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetReferenceCustomStructWithEditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_MetaData[];
#endif
		static void NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimplePropertyWithEditCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimplePropertyWithEditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditCondition_MetaData[];
#endif
		static void NewProp_bEditCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetReferenceCustomStructWithThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetReferenceCustomStructWithThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetReferenceCustomStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetReferenceCustomStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructWithMultipleInstances2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructWithMultipleInstances2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditConditionStructWithMultipleInstances2_MetaData[];
#endif
		static void NewProp_bEditConditionStructWithMultipleInstances2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditConditionStructWithMultipleInstances2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructWithMultipleInstances1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructWithMultipleInstances1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisIsBrokenIfItsVisibleInADetailsView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThisIsBrokenIfItsVisibleInADetailsView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPasswordProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextPasswordProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringPasswordProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringPasswordProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectThatCannotBeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectThatCannotBeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringThatCannotBeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringThatCannotBeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntThatCannotBeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntThatCannotBeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntPropertyWithClampedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntPropertyWithClampedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyWithClampedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatPropertyWithClampedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticArrayOfIntsWithEnumLabels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticArrayOfIntsWithEnumLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticArrayOfInts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticArrayOfInts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedArrayOfInts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FixedArrayOfInts;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FixedArrayOfInts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StructPropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumPropertyArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorPropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinearColorPropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorPropertyArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectPropertyArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotatorPropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotatorPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector4PropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vector4PropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector4PropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2PropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vector2PropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2PropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector3PropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vector3PropertyArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector3PropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextPropertyArray;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringPropertyArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolPropertyArray;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamePropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamePropertyArray;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NamePropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatPropertyArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatPropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytePropertyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BytePropertyArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BytePropertyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntProperty32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntProperty32Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntProperty32Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatrixProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatrixProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotatorProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector4Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector4Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector3Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector3Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntPointProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntPointProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[];
#endif
		static void NewProp_BoolProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DoubleProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt64Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_UnsignedInt64Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt32Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UnsignedInt32Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt16Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_UnsignedInt16Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int16roperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Int16roperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int8Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Int8Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyEditorTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/PropertyEditorTestObject.h" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureOrBlendableInterface_MetaData[] = {
		{ "AllowedClasses", "Texture,BlendableInterface" },
		{ "Category", "ObjectPropertyAllowedClasses" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "Allows either an object that's derived from UTexture or IBlendableInterface, to ensure that Object Property handles know how to\nfilter for AllowedClasses correctly." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureOrBlendableInterface = { "TextureOrBlendableInterface", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TextureOrBlendableInterface), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureOrBlendableInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureOrBlendableInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LightPropagationVolumeBlendable_MetaData[] = {
		{ "AllowedClasses", "LightPropagationVolumeBlendable" },
		{ "Category", "ScriptInterfaces" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "This is an IBlendableInterface that only allows for ULightPropagationVolumeBlendable objects" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LightPropagationVolumeBlendable = { "LightPropagationVolumeBlendable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LightPropagationVolumeBlendable), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LightPropagationVolumeBlendable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LightPropagationVolumeBlendable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnimClassInterface_MetaData[] = {
		{ "Category", "ScriptInterfaces" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnimClassInterface = { "AnimClassInterface", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, AnimClassInterface), Z_Construct_UClass_UAnimClassInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnimClassInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnimClassInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BlendableInterface_MetaData[] = {
		{ "Category", "ScriptInterfaces" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BlendableInterface = { "BlendableInterface", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, BlendableInterface), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BlendableInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BlendableInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_MetaData[] = {
		{ "Category", "TMapStructKeyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap = { "LinearColorToVectorMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LinearColorToVectorMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_Key_KeyProp = { "LinearColorToVectorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_ValueProp = { "LinearColorToVectorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_MetaData[] = {
		{ "Category", "TMapStructKeyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap = { "VectorToFloatMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, VectorToFloatMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_Key_KeyProp = { "VectorToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_ValueProp = { "VectorToFloatMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_MetaData[] = {
		{ "Category", "TMapStructKeyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap = { "LinearColorToStringMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LinearColorToStringMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_Key_KeyProp = { "LinearColorToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_ValueProp = { "LinearColorToStringMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet_MetaData[] = {
		{ "Category", "TSetStructTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet = { "VectorSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, VectorSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet_ElementProp = { "VectorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet_MetaData[] = {
		{ "Category", "TSetStructTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet = { "LinearColorSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LinearColorSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet_ElementProp = { "LinearColorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap = { "NameToNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, NameToNameMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_Key_KeyProp = { "NameToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_ValueProp = { "NameToNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap = { "IntToEnumMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, IntToEnumMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_Key_KeyProp = { "IntToEnumMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_ValueProp = { "IntToEnumMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap = { "ObjectToColorMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectToColorMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_Key_KeyProp = { "ObjectToColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_ValueProp = { "ObjectToColorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map = { "ObjectToInt32Map", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectToInt32Map), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_Key_KeyProp = { "ObjectToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_ValueProp = { "ObjectToInt32Map", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap = { "StringToActorMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringToActorMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_Key_KeyProp = { "StringToActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_ValueProp = { "StringToActorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap = { "StringToObjectMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringToObjectMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_Key_KeyProp = { "StringToObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_ValueProp = { "StringToObjectMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringToFloatMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_Key_KeyProp = { "StringToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_ValueProp = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap = { "Int32ToStructMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int32ToStructMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_Key_KeyProp = { "Int32ToStructMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_ValueProp = { "Int32ToStructMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap = { "StringToColorMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringToColorMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_Key_KeyProp = { "StringToColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_ValueProp = { "StringToColorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_MetaData[] = {
		{ "Category", "TMapTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int32ToStringMap), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_Key_KeyProp = { "Int32ToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_ValueProp = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, NameSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet = { "EditColorSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, EditColorSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_ElementProp = { "EditColorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UnrealEd_EditColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet = { "ActorSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ActorSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet_ElementProp = { "ActorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet = { "ObjectSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet_ElementProp = { "ObjectSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet = { "FloatSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, FloatSet), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet_ElementProp = { "FloatSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set_MetaData[] = {
		{ "Category", "TSetTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set = { "Int32Set", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int32Set), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set_ElementProp = { "Int32Set", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_OnlyActorsAllowed_MetaData[] = {
		{ "Category", "AssetPropertyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_OnlyActorsAllowed = { "OnlyActorsAllowed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, OnlyActorsAllowed), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_OnlyActorsAllowed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_OnlyActorsAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnyMaterialInterface_MetaData[] = {
		{ "Category", "AssetPropertyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnyMaterialInterface = { "AnyMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, AnyMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnyMaterialInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnyMaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticMeshProp_MetaData[] = {
		{ "Category", "AssetPropertyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticMeshProp = { "StaticMeshProp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StaticMeshProp), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticMeshProp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticMeshProp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureProp_MetaData[] = {
		{ "Category", "AssetPropertyTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureProp = { "TextureProp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TextureProp), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureProp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureProp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs_MetaData[] = {
		{ "Category", "EditInlineProps" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs = { "ArrayOfEditInlineNewSMCs", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ArrayOfEditInlineNewSMCs), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs_Inner = { "ArrayOfEditInlineNewSMCs", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditInlineNewStaticMeshComponent_MetaData[] = {
		{ "Category", "EditInlineProps" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditInlineNewStaticMeshComponent = { "EditInlineNewStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, EditInlineNewStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditInlineNewStaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditInlineNewStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs_MetaData[] = {
		{ "Category", "StructTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs = { "ArrayOfStructs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ArrayOfStructs), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs_Inner = { "ArrayOfStructs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithEditCondition_MetaData[] = {
		{ "Category", "StructTests" },
		{ "editcondition", "bEditConditionAssetReferenceCustomStructWithEditCondition" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithEditCondition = { "AssetReferenceCustomStructWithEditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, AssetReferenceCustomStructWithEditCondition), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithEditCondition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithEditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_MetaData[] = {
		{ "Category", "StructTests" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_SetBit(void* Obj)
	{
		((UPropertyEditorTestObject*)Obj)->bEditConditionAssetReferenceCustomStructWithEditCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition = { "bEditConditionAssetReferenceCustomStructWithEditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyEditorTestObject), &Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_SimplePropertyWithEditCondition_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "editcondition", "bEditCondition" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_SimplePropertyWithEditCondition = { "SimplePropertyWithEditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, SimplePropertyWithEditCondition), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_SimplePropertyWithEditCondition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_SimplePropertyWithEditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition_MetaData[] = {
		{ "Category", "StructTests" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition_SetBit(void* Obj)
	{
		((UPropertyEditorTestObject*)Obj)->bEditCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition = { "bEditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyEditorTestObject), &Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithThumbnail_MetaData[] = {
		{ "Category", "StructTests" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithThumbnail = { "AssetReferenceCustomStructWithThumbnail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, AssetReferenceCustomStructWithThumbnail), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithThumbnail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStruct_MetaData[] = {
		{ "Category", "StructTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStruct = { "AssetReferenceCustomStruct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, AssetReferenceCustomStruct), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStruct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances2_MetaData[] = {
		{ "Category", "StructTests" },
		{ "editcondition", "bEditConditionStructWithMultipleInstances2" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances2 = { "StructWithMultipleInstances2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StructWithMultipleInstances2), Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2_MetaData[] = {
		{ "Category", "StructTests" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2_SetBit(void* Obj)
	{
		((UPropertyEditorTestObject*)Obj)->bEditConditionStructWithMultipleInstances2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2 = { "bEditConditionStructWithMultipleInstances2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyEditorTestObject), &Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances1_MetaData[] = {
		{ "Category", "StructTests" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances1 = { "StructWithMultipleInstances1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StructWithMultipleInstances1), Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ThisIsBrokenIfItsVisibleInADetailsView_MetaData[] = {
		{ "Category", "SingleStruct" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ThisIsBrokenIfItsVisibleInADetailsView = { "ThisIsBrokenIfItsVisibleInADetailsView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ThisIsBrokenIfItsVisibleInADetailsView), Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ThisIsBrokenIfItsVisibleInADetailsView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ThisIsBrokenIfItsVisibleInADetailsView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPasswordProperty_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "PasswordField", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPasswordProperty = { "TextPasswordProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TextPasswordProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPasswordProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPasswordProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPasswordProperty_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "PasswordField", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPasswordProperty = { "StringPasswordProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringPasswordProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPasswordProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPasswordProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectThatCannotBeChanged_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectThatCannotBeChanged = { "ObjectThatCannotBeChanged", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectThatCannotBeChanged), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectThatCannotBeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectThatCannotBeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringThatCannotBeChanged_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringThatCannotBeChanged = { "StringThatCannotBeChanged", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringThatCannotBeChanged), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringThatCannotBeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringThatCannotBeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntThatCannotBeChanged_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntThatCannotBeChanged = { "IntThatCannotBeChanged", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, IntThatCannotBeChanged), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntThatCannotBeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntThatCannotBeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPropertyWithClampedRange_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPropertyWithClampedRange = { "IntPropertyWithClampedRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, IntPropertyWithClampedRange), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPropertyWithClampedRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPropertyWithClampedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyWithClampedRange_MetaData[] = {
		{ "Category", "AdvancedProperties" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "This is a custom tooltip that should be shown" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyWithClampedRange = { "FloatPropertyWithClampedRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, FloatPropertyWithClampedRange), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyWithClampedRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyWithClampedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfIntsWithEnumLabels_MetaData[] = {
		{ "ArraySizeEnum", "/Script/UnrealEd.ArrayLabelEnum" },
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfIntsWithEnumLabels = { "StaticArrayOfIntsWithEnumLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticArrayOfIntsWithEnumLabels, UPropertyEditorTestObject), STRUCT_OFFSET(UPropertyEditorTestObject, StaticArrayOfIntsWithEnumLabels), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfIntsWithEnumLabels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfIntsWithEnumLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfInts_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfInts = { "StaticArrayOfInts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticArrayOfInts, UPropertyEditorTestObject), STRUCT_OFFSET(UPropertyEditorTestObject, StaticArrayOfInts), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfInts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfInts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts = { "FixedArrayOfInts", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, FixedArrayOfInts), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts_Inner = { "FixedArrayOfInts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray = { "StructPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StructPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray_Inner = { "StructPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyEditorTestBasicStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray = { "EnumPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, EnumPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray_Inner = { "EnumPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray = { "ColorPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ColorPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray_Inner = { "ColorPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray = { "LinearColorPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LinearColorPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray_Inner = { "LinearColorPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray = { "ActorPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ActorPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray_Inner = { "ActorPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray = { "ObjectPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray_Inner = { "ObjectPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray = { "RotatorPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, RotatorPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray_Inner = { "RotatorPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray = { "Vector4PropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector4PropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray_Inner = { "Vector4PropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray = { "Vector2PropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector2PropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray_Inner = { "Vector2PropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray = { "Vector3PropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector3PropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray_Inner = { "Vector3PropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray = { "TextPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TextPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray_Inner = { "TextPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray = { "StringPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray_Inner = { "StringPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray = { "BoolPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, BoolPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray_Inner = { "BoolPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray = { "NamePropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, NamePropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray_Inner = { "NamePropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray = { "FloatPropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, FloatPropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray_Inner = { "FloatPropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "Byte" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray = { "BytePropertyArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, BytePropertyArray), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray_Inner = { "BytePropertyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array_MetaData[] = {
		{ "Category", "ArraysOfProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
		{ "ToolTip", "Integer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array = { "IntProperty32Array", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, IntProperty32Array), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array_Inner = { "IntProperty32Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TransformProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TransformProperty = { "TransformProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TransformProperty), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TransformProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TransformProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_MatrixProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_MatrixProperty = { "MatrixProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, MatrixProperty), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_MatrixProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_MatrixProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumProperty = { "EnumProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, EnumProperty), Z_Construct_UEnum_UnrealEd_PropertEditorTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorProperty = { "ColorProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ColorProperty), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorProperty = { "LinearColorProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, LinearColorProperty), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ClassProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ClassProperty = { "ClassProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ClassProperty), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ClassProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ClassProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectProperty = { "ObjectProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ObjectProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorProperty = { "RotatorProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, RotatorProperty), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4Property_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4Property = { "Vector4Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector4Property), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2Property_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2Property = { "Vector2Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector2Property), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3Property_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3Property = { "Vector3Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Vector3Property), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPointProperty_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPointProperty = { "IntPointProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, IntPointProperty), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPointProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPointProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextProperty = { "TextProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, TextProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringProperty = { "StringProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, StringProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty_SetBit(void* Obj)
	{
		((UPropertyEditorTestObject*)Obj)->BoolProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyEditorTestObject), &Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameProperty = { "NameProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, NameProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_DoubleProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_DoubleProperty = { "DoubleProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, DoubleProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_DoubleProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_DoubleProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, FloatProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt64Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt64Property = { "UnsignedInt64Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, UnsignedInt64Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt64Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt64Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt32Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt32Property = { "UnsignedInt32Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, UnsignedInt32Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt32Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt32Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt16Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt16Property = { "UnsignedInt16Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, UnsignedInt16Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt16Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt16Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ByteProperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ByteProperty = { "ByteProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, ByteProperty), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ByteProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ByteProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int64Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int64Property = { "Int64Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int64Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int64Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int64Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Property = { "Int32Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int32Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int16roperty_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int16roperty = { "Int16roperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int16roperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int16roperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int16roperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int8Property_MetaData[] = {
		{ "Category", "BasicProperties" },
		{ "ModuleRelativePath", "Classes/Editor/PropertyEditorTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int8Property = { "Int8Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyEditorTestObject, Int8Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int8Property_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int8Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyEditorTestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureOrBlendableInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LightPropagationVolumeBlendable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnimClassInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BlendableInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToVectorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorToFloatMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorToStringMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_VectorSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameToNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntToEnumMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToColorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectToInt32Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToActorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToObjectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToFloatMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStructMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringToColorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32ToStringMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditColorSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Set_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_OnlyActorsAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AnyMaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticMeshProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextureProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfEditInlineNewSMCs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EditInlineNewStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ArrayOfStructs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithEditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionAssetReferenceCustomStructWithEditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_SimplePropertyWithEditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStructWithThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_AssetReferenceCustomStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_bEditConditionStructWithMultipleInstances2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructWithMultipleInstances1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ThisIsBrokenIfItsVisibleInADetailsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPasswordProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPasswordProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectThatCannotBeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringThatCannotBeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntThatCannotBeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPropertyWithClampedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyWithClampedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfIntsWithEnumLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StaticArrayOfInts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FixedArrayOfInts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StructPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ActorPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4PropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2PropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3PropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NamePropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatPropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BytePropertyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntProperty32Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TransformProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_MatrixProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_EnumProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ColorProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_LinearColorProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ClassProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ObjectProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_RotatorProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector4Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector2Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Vector3Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_IntPointProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_TextProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_StringProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_BoolProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_NameProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_DoubleProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_FloatProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt64Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt32Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_UnsignedInt16Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_ByteProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int64Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int32Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int16roperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyEditorTestObject_Statics::NewProp_Int8Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyEditorTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyEditorTestObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyEditorTestObject_Statics::ClassParams = {
		&UPropertyEditorTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyEditorTestObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyEditorTestObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPropertyEditorTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyEditorTestObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyEditorTestObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyEditorTestObject, 1543722698);
	template<> UNREALED_API UClass* StaticClass<UPropertyEditorTestObject>()
	{
		return UPropertyEditorTestObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyEditorTestObject(Z_Construct_UClass_UPropertyEditorTestObject, &UPropertyEditorTestObject::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPropertyEditorTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyEditorTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
