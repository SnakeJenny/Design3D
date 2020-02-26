// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemCore/Public/Field/FieldSystemTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemTypes() {}
// Cross Module References
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields();
	UPackage* Z_Construct_UPackage__Script_FieldSystemCore();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldOperationType();
	FIELDSYSTEMCORE_API UEnum* Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType();
// End Cross Module References
	static UEnum* EFieldPhysicsDefaultFields_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldPhysicsDefaultFields"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldPhysicsDefaultFields>()
	{
		return EFieldPhysicsDefaultFields_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsDefaultFields(EFieldPhysicsDefaultFields_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldPhysicsDefaultFields"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields_Hash() { return 354335447U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsDefaultFields"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsDefaultFields_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_RadialIntMask", (int64)Field_RadialIntMask },
				{ "Field_RadialFalloff", (int64)Field_RadialFalloff },
				{ "Field_UniformVector", (int64)Field_UniformVector },
				{ "Field_RadialVector", (int64)Field_RadialVector },
				{ "Field_RadialVectorFalloff", (int64)Field_RadialVectorFalloff },
				{ "Field_EFieldPhysicsDefaultFields_Max", (int64)Field_EFieldPhysicsDefaultFields_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Hidden", "" },
				{ "Field_EFieldPhysicsDefaultFields_Max.ToolTip", "//256th entry" },
				{ "Field_RadialFalloff.DisplayName", "RadialFalloff" },
				{ "Field_RadialIntMask.DisplayName", "RadialIntMask" },
				{ "Field_RadialVector.DisplayName", "RadialVector" },
				{ "Field_RadialVectorFalloff.DisplayName", "RadialVectorFalloff" },
				{ "Field_UniformVector.DisplayName", "UniformVector" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldPhysicsDefaultFields",
				"EFieldPhysicsDefaultFields",
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
	static UEnum* EFieldPhysicsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldPhysicsType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldPhysicsType>()
	{
		return EFieldPhysicsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsType(EFieldPhysicsType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldPhysicsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType_Hash() { return 3550073846U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldPhysicsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_StayDynamic", (int64)Field_StayDynamic },
				{ "Field_LinearForce", (int64)Field_LinearForce },
				{ "Field_PhysicsType_Max", (int64)Field_PhysicsType_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Field_LinearForce.DisplayName", "LinearForce" },
				{ "Field_PhysicsType_Max.Hidden", "" },
				{ "Field_PhysicsType_Max.ToolTip", "//256th entry" },
				{ "Field_StayDynamic.DisplayName", "StayDynamic" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldPhysicsType",
				"EFieldPhysicsType",
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
	static UEnum* EFieldOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_EFieldOperationType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("EFieldOperationType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<EFieldOperationType>()
	{
		return EFieldOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldOperationType(EFieldOperationType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("EFieldOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_EFieldOperationType_Hash() { return 1818078681U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_EFieldOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldOperationType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_EFieldOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Multiply", (int64)Field_Multiply },
				{ "Field_Divide", (int64)Field_Divide },
				{ "Field_Add", (int64)Field_Add },
				{ "Field_Substract", (int64)Field_Substract },
				{ "Field_Operation_Max", (int64)Field_Operation_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Field_Add.DisplayName", "Add" },
				{ "Field_Divide.DisplayName", "Divide" },
				{ "Field_Multiply.DisplayName", "Multiply" },
				{ "Field_Operation_Max.Hidden", "" },
				{ "Field_Operation_Max.ToolTip", "//256th entry" },
				{ "Field_Substract.DisplayName", "Subtract" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"EFieldOperationType",
				"EFieldOperationType",
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
	static UEnum* ESetMaskConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType, Z_Construct_UPackage__Script_FieldSystemCore(), TEXT("ESetMaskConditionType"));
		}
		return Singleton;
	}
	template<> FIELDSYSTEMCORE_API UEnum* StaticEnum<ESetMaskConditionType>()
	{
		return ESetMaskConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESetMaskConditionType(ESetMaskConditionType_StaticEnum, TEXT("/Script/FieldSystemCore"), TEXT("ESetMaskConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType_Hash() { return 1868165020U; }
	UEnum* Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FieldSystemCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESetMaskConditionType"), 0, Get_Z_Construct_UEnum_FieldSystemCore_ESetMaskConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Set_Always", (int64)Field_Set_Always },
				{ "Field_Set_IFF_NOT_Interior", (int64)Field_Set_IFF_NOT_Interior },
				{ "Field_Set_IFF_NOT_Exterior", (int64)Field_Set_IFF_NOT_Exterior },
				{ "Field_MaskCondition_Max", (int64)Field_MaskCondition_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Field_MaskCondition_Max.Hidden", "" },
				{ "Field_MaskCondition_Max.ToolTip", "//256th entry" },
				{ "Field_Set_Always.DisplayName", "Always" },
				{ "Field_Set_IFF_NOT_Exterior.DisplayName", "IFF NOT Exterior" },
				{ "Field_Set_IFF_NOT_Interior.DisplayName", "IFF NOT Interior" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FieldSystemCore,
				nullptr,
				"ESetMaskConditionType",
				"ESetMaskConditionType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
