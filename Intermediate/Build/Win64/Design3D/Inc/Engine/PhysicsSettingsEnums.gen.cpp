// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettingsEnums() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EFrictionCombineMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFrictionCombineMode, Z_Construct_UPackage__Script_Engine(), TEXT("EFrictionCombineMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFrictionCombineMode::Type>()
	{
		return EFrictionCombineMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFrictionCombineMode(EFrictionCombineMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EFrictionCombineMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFrictionCombineMode_Hash() { return 3788170065U; }
	UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFrictionCombineMode"), 0, Get_Z_Construct_UEnum_Engine_EFrictionCombineMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFrictionCombineMode::Average", (int64)EFrictionCombineMode::Average },
				{ "EFrictionCombineMode::Min", (int64)EFrictionCombineMode::Min },
				{ "EFrictionCombineMode::Multiply", (int64)EFrictionCombineMode::Multiply },
				{ "EFrictionCombineMode::Max", (int64)EFrictionCombineMode::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.ToolTip", "Uses the average value of the materials touching: (a+b)/2" },
				{ "Max.ToolTip", "Uses the maximum value of materials touching: max(a,b)" },
				{ "Min.ToolTip", "Uses the minimum value of the materials touching: min(a,b)" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettingsEnums.h" },
				{ "Multiply.ToolTip", "Uses the product of the values of the materials touching: a*b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFrictionCombineMode",
				"EFrictionCombineMode::Type",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
