// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Slate/SGameLayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameLayerManager() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowTitleBarMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EWindowTitleBarMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindowTitleBarMode, Z_Construct_UPackage__Script_Engine(), TEXT("EWindowTitleBarMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWindowTitleBarMode>()
	{
		return EWindowTitleBarMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWindowTitleBarMode(EWindowTitleBarMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EWindowTitleBarMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EWindowTitleBarMode_Hash() { return 3622160490U; }
	UEnum* Z_Construct_UEnum_Engine_EWindowTitleBarMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWindowTitleBarMode"), 0, Get_Z_Construct_UEnum_Engine_EWindowTitleBarMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWindowTitleBarMode::Overlay", (int64)EWindowTitleBarMode::Overlay },
				{ "EWindowTitleBarMode::VerticalBox", (int64)EWindowTitleBarMode::VerticalBox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Slate/SGameLayerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EWindowTitleBarMode",
				"EWindowTitleBarMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
